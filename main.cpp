//
//  main.cpp
//  hangman
//
//  Created by James Meijers on 2016-09-29.
//  Copyright © 2016 James Meijers. All rights reserved.
//

using namespace std;

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "blankOutputFile.hpp"
#include "getInfoFile.hpp"
#include "writeInfoFile.hpp"
#include "findWord.hpp"
#include "learn.hpp"
#include "play.hpp"

int main() {
    
    double* top = new double[26];
    double* one = new double[26];
    double** two = new double*[26];
    double*** three = new double**[26];
    double**** four = new double***[26];
    double***** five = new double****[26];
    
    for (int i = 0; i < 26; i++){
        two[i] = new double[26];
    }
    
    for (int i = 0; i < 26; i++){
        three[i] = new double*[26];
        for (int j = 0; j < 26; j++){
            three[i][j] = new double[26];
        }
    }
    
    for (int i = 0; i < 26; i++){
        four[i] = new double**[26];
        for (int j = 0; j < 26; j++){
            four[i][j] = new double*[26];
            for (int k = 0; k < 26; k++){
                four[i][j][k] = new double[26];
            }
        }
    }
    
    for (int i = 0; i < 26; i++){
        five[i] = new double***[26];
        for (int j = 0; j < 26; j++){
            five[i][j] = new double**[26];
            for (int k = 0; k < 26; k++){
                five[i][j][k] = new double*[26];
                for (int l = 0; l < 26; l++){
                    five[i][j][k][l] = new double[26];
                }
            }
        }
    }
    
    getInfoFile(top, one, two, three, four, five);
    
    cout << "Welcome to Hangman!" << endl << "End P to play, W to add wordsource, C to clear wordsource, or Q to quit" << endl;
    
    char command;
    cin >> command;
    cin.ignore(1000, '\n');
    while (command != 'Q'){
        if (command == 'P'){
            play(top, five);
        }
        else if (command == 'W'){
            blankOutputFile();
            cout << "Please enter the name of the library which you would like to import" << endl;
            string library;
            cin >> library;
            ifstream wordSource;
            wordSource.open(library);
            learn(wordSource, top, one, two, three, four, five);
        }
        else if (command == 'C'){
            cout << "Clearing output file" << endl;
            blankOutputFile();
        }
        
        else if (command != 'Q')
            cout << "Command not recognized, please try again..." << endl;
        cout << "End P to play, W to change wordsource, or Q to quit" << endl;
        cin >> command;
        cin.ignore(1000, '\n');
    }
    

    cout << "Quitting" << endl;
    writeInfoFile(top, one, two, three, four, five);
    
    
    return 0;
}


//convert words to lowercase
//transform(word.begin(), word.end(), word.begin(), ::tolower);


//import info
/*
 ifstream wordSource;
 wordSource.open("words");
 learn(wordSource, top, one, two, three, four, five);
 */
