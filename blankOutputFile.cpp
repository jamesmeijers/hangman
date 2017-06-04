//
//  blankOutputFile.cpp
//  hangman
//
//  Created by James Meijers on 2016-09-29.
//  Copyright © 2016 James Meijers. All rights reserved.
//

#include "blankOutputFile.hpp"


int blankOutputFile() {
    ofstream outFile;
    outFile.open("wordSource");
    
    for(int i = 0; i< 26; i++){
        outFile << "0 " << endl;
    }
    
    for(int i = 0; i< 26; i++){
        outFile << "0 " << endl;
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            outFile << "0 ";
        }
        outFile << endl;
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                outFile << "0 ";
            }
            outFile << endl;
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                for(int l = 0; l < 26; l++){
                    outFile << "0 ";
                }
                outFile << endl;
            }
        }
    }
    
    for(int i = 0; i< 26; i++){
        for(int j = 0; j< 26; j++){
            for(int k = 0; k< 26; k++){
                for(int l = 0; l < 26; l++){
                    for(int m = 0; m < 26; m++){
                        outFile << "0 ";
                    }
                    outFile << endl;
                }
            }
        }
    }
    return 0;
}