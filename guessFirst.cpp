//
//  guessFirst.cpp
//  hangman
//
//  Created by James Meijers on 2016-10-01.
//  Copyright © 2016 James Meijers. All rights reserved.
//

using namespace std;
#include "guessFirst.hpp"
#include <stdbool.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

void guessFirst(double top[26],
                bool guessed[26],
                int& guesses,
                char word[5],
                int& letters){
    

    string posinfo;
    cout << "the program will guess letters, when the letter is correct, input Y, otherwise input N" << endl;
    char in = 'F';
    //q, least common letter, so smallest possible largest
    
    
    while (in != 'Y'){
        int largest = 16;
        for (int i = 0; i < 26; i++){
            if (top[i] > top[largest] && !guessed[i]){
                largest = i;
            }
        }
        
        char guess = 'a' + largest;
        guessed[largest] = true;
        guesses++;
        
        cout << "Guess #" << guesses << ':' << ' ' << guess << endl;
        
        cin >> in;
        if (in == 'Y'){
            cout << "What letter positions contain " << guess << endl;
            cin.ignore(1000, '\n');
            getline(cin, posinfo);
            stringstream input(posinfo);
            int pos;
            input >> pos;
            while (!input.fail()){
                letters++;
                word[pos-1] = guess;
                input >> pos;
                
                
            }
            
        }

        
        cout << endl;
    }

}