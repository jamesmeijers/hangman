//
//  writeInfoFile.hpp
//  hangman
//
//  Created by James Meijers on 2016-09-30.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#ifndef writeInfoFile_hpp
#define writeInfoFile_hpp

using namespace std;
#include <stdio.h>
#include <fstream>

void writeInfoFile(double top[26],
                   double one[26],
                   double* two[26],
                   double** three[26],
                   double*** four[26],
                   double**** five[26]);

#endif /* writeInfoFile_hpp */
