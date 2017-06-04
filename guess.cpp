//
//  guess.cpp
//  hangman
//
//  Created by James Meijers on 2016-10-01.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "guess.hpp"

void guess(double**** five[26],
           bool guessed[26],
           int& guesses,
           char word[5],
           int& letters){
    
    double letter1[26] = {0};
    double letter2[26] = {0};
    double letter3[26] = {0};
    double letter4[26] = {0};
    double letter5[26] = {0};
    
    double total[26] = {0};
    char guessOrder[26];
    
    for (int i = 0; i < 26; i++){
        guessOrder[i] = 'a' + i;
    }
    
    for (int i = 0; i < 26; i++){
        int ix;
        if (word[0] != '!')
            ix = word[0] - 'a';
        else
            ix = i;
        for (int j = 0; j < 26; j++){
            int jx;
            if (word[1] != '!')
                jx = word[1] - 'a';
            else
                jx = j;
            for (int k = 0; k < 26; k++){
                int kx;
                if (word[2] != '!')
                    kx = word[2] - 'a';
                else
                    kx = k;
                for (int l = 0; l < 26; l++){
                    int lx;
                    if (word[3] != '!')
                        lx = word[3] - 'a';
                    else
                        lx = l;
                    for (int m = 0; m < 26; m++){
                        int mx;
                        if (word[4] != '!')
                            mx = word[4] - 'a';
                        else
                            mx = m;
                        double p = five[ix][jx][kx][lx][mx];
                        letter1[ix] += p;
                        letter2[jx] += p;
                        letter3[kx] += p;
                        letter4[lx] += p;
                        letter5[mx] += p;
                    }
                }
            }
        }
    }
    
    if (word[0] != '!'){
        for (int i = 0; i < 26; i++){
            letter1[i] = 0;
        }
    }
    
    if (word[1] != '!'){
        for (int i = 0; i < 26; i++){
            letter2[i] = 0;
        }
    }
    
    if (word[2] != '!'){
        for (int i = 0; i < 26; i++){
            letter3[i] = 0;
        }
    }
    
    if (word[3] != '!'){
        for (int i = 0; i < 26; i++){
            letter4[i] = 0;
        }
    }
    
    if (word[4] != '!'){
        for (int i = 0; i < 26; i++){
            letter5[i] = 0;
        }
    }
    
    
    for (int i = 0; i < 26; i++){
        total[i] = letter1[i] + letter2[i] + letter3[i] + letter4[i] + letter5[i];
    }
    
    int biggest;
    int i, j;
    char hold;
    double hold2;
    
    for (i = 0; i < 26; i++){
        biggest = i;
        for (j = i; j < 26; j++){
            if (total[j] > total[biggest])
                biggest = j;
        }
        hold = guessOrder[i];
        guessOrder[i] = guessOrder[biggest];
        guessOrder[biggest] = hold;
        hold2 = total[i];
        total[i] = total[biggest];
        total[biggest] = hold2;
    }
    
    
    string posinfo;
    
    char in = 'F';
    for (i = 0; i < 26 && in != 'Y'; i++){
        char guess = guessOrder[i];
        if (!guessed[guessOrder[i] - 'a']){
            guessed[guessOrder[i] - 'a'] = true;
            guesses++;
        
            cout << "Guess #" << guesses << ':' << ' ' << guess << endl;
            
            cin >> in;
            if (in == 'Y'){
                cout << "What letter positions contain " << guess << endl;
                cin.ignore(100, '\n');
                getline(cin, posinfo);
                stringstream input(posinfo);
                int pos;
                input >> pos;
                while (!input.fail()){
                    word[pos -1] = guess;
                    letters++;
                    input >> pos;
                    
                }
                
            }
        }
    }
    
}