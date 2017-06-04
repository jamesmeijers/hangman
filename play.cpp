//
//  play.cpp
//  hangman
//
//  Created by James Meijers on 2016-10-01.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "play.hpp"
#include "guessFirst.hpp"
#include "guess.hpp"

void play(double top[26],
          double**** five[26]){
    
    //whether or not each letter of the alphabet has been guessed
    bool guessed[26];
    for (int i = 0; i < 26; i++){
        guessed[i] = false;
    }
    
    //number of guesses
    int guesses = 0;
    
    //contains the result of the guessing
    char word[5];
    for (int i = 0; i < 5; i++)
        word[i] = '!';
    
    //number of letters guessed correctly (5 = win)
    int letters = 0;
    
    guessFirst(top, guessed, guesses, word, letters);
    
    while (letters < 5){
        guess(five, guessed, guesses, word, letters);
    }
    
    cout << "Game Over! Correctly guessed: " << word[0] << word[1] << word[2] << word[3] << word[4] <<
    " in " << guesses << " guesses!" << endl;
    
    five[word[0] - 'a'][word[1] - 'a'][word[2] - 'a'][word[3] - 'a'][word[4] - 'a']++;




}





