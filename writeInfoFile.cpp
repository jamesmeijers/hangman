//
//  writeInfoFile.cpp
//  hangman
//
//  Created by James Meijers on 2016-09-30.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "writeInfoFile.hpp"

void writeInfoFile(double top[26],
                   double one[26],
                   double* two[26],
                   double** three[26],
                   double*** four[26],
                   double**** five[26]){
    ofstream out;
    out.open("wordSource");
    
    for(int i = 0; i< 26; i++){
        out << top[i] << " " << endl;
        
    }
    
    for(int i = 0; i< 26; i++){
        out << one[i] << " " << endl;
        
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            out << two[i][j] << " ";
        }
        out << endl;
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                out << three[i][j][k] << " ";
            }
            out << endl;
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                for(int l = 0; l < 26; l++){
                    out << four[i][j][k][l] << " ";
                }
                out << endl;
            }
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                for(int l = 0; l < 26; l++){
                    for(int m = 0; m < 26; m++){
                        out << five[i][j][k][l][m] << " ";
                    }
                    out << endl;
                }
            }
        }
    }
    
    out.close();

}


