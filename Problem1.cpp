//
//  Problem1.cpp
//  Project2 - Problem # 1
//
//  Created by Bradley Dodds on 6/8/18.
//  Copyright © 2018 brad. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {

    
    char stringValue[] = "programming";
    string vowelString = stringValue;
    int count = 0;
    
    for(int index = 0; index < vowelString.length(); index++) {
        
        switch(tolower(vowelString[index])) {
                
            case('a') : count++;
                break;
            case('e') : count++;
                break;
            case('i') : count++;
                break;
            case('o') : count++;
                break;
            case('u') : count++;
                break;
            default: //non-vowel value
                break;
        }
        
        
        
    }
    
    cout << "the string \"" + vowelString + "\" has ";
    cout << count;
    cout << " values.\n";
    
    
    return 0;
}
