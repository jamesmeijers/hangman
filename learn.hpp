//
//  learn.hpp
//  hangman
//
//  Created by James Meijers on 2016-09-30.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#ifndef learn_hpp
#define learn_hpp

using namespace std;
#include <iostream>
#include <fstream>
#include <string>

void learn(ifstream& words,
           double top[26],
           double one[26],
           double* two[26],
           double** three[26],
           double*** four[26],
           double**** five[26]);


#endif /* learn_hpp */
