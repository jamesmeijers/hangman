//
//  guessFirst.hpp
//  hangman
//
//  Created by James Meijers on 2016-10-01.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#ifndef guessFirst_hpp
#define guessFirst_hpp

#include <stdio.h>
void guessFirst(double top[26],
                bool guessed[26],
                int& guesses,
                char word[5],
                int& letters);

#endif /* guessFirst_hpp */
