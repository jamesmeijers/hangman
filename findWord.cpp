//
//  findWord.cpp
//  hangman
//
//  Created by James Meijers on 2016-09-30.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "findWord.hpp"

string findWord(ifstream& dict){
    string word;
    
    dict >> word;
    while (word.length() != 5 && !dict.fail()){
        dict >> word;
    }
    
    return word;
}