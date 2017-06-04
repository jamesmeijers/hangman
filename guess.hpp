//
//  guess.hpp
//  hangman
//
//  Created by James Meijers on 2016-10-01.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#ifndef guess_hpp
#define guess_hpp

#include <stdio.h>
using namespace std;

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

void guess(double**** five[26],
          bool guessed[26],
          int& guesses,
          char word[5],
          int& letters);


#endif /* guess_hpp */
