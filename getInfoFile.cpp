//
//  getInfoFile.cpp
//  hangman
//
//  Created by James Meijers on 2016-09-29.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "getInfoFile.hpp"

void getInfoFile(double top[26],
                 double one[26],
                 double* two[26],
                 double** three[26],
                 double*** four[26],
                 double**** five[26]){
    
    ifstream info;
    info.open("wordSource");
    
    for(int i = 0; i< 26; i++){
        info >> top[i];
        
    }
    
    for(int i = 0; i< 26; i++){
        info >> one[i];
        
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            info >> two[i][j];
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                info >> three[i][j][k];
            }
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                for(int l = 0; l < 26; l++){
                    info >> four[i][j][k][l];
                }
            }
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                for(int l = 0; l < 26; l++){
                    for(int m = 0; m < 26; m++){
                        info >> five[i][j][k][l][m];
                    }
                }
            }
        }
    }
    
    info.close();
    
}