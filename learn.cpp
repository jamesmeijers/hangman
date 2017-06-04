//
//  learn.cpp
//  hangman
//
//  Created by James Meijers on 2016-09-30.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "learn.hpp"
#include "findWord.hpp"

void learn(ifstream& words,
           double top[26],
           double one[26],
           double* two[26],
           double** three[26],
           double*** four[26],
           double**** five[26]){
    
    string word;
    word = findWord(words);
    
    while (!words.fail()){
        cout << word << endl;
        int a, b, c, d, e;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        
        a = word[0] - 'a';
        b = word[1] - 'a';
        c = word[2] - 'a';
        d = word[3] - 'a';
        e = word[4] - 'a';
        
        one[a]++;
        two[a][b]++;
        three[a][b][c]++;
        four[a][b][c][d]++;
        five[a][b][c][d][e]++;
        top[a] ++;
        top[b] ++;
        top[c] ++;
        top[d] ++;
        top[e] ++;
        
        
        word = findWord(words);
    }
    
    
}