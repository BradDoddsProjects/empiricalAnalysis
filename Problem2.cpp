//
//  Problem2.cpp
//  Project2 - Problem # 2
//
//  Created by Bradley Dodds on 6/8/18.
//  Copyright © 2018 brad. All rights reserved.
//

#include <string>
#include <iostream>

using namespace std;

int main()
{
    
    string oreoString = "California";
    
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < oreoString.size(); ++i) {
        
        for(int j = i; j < oreoString.size(); ++j) {
            
            if(oreoString[i] == oreoString[j] && (j-i+1) > (b - a + 1)) {
                a = i;
                b = j;
            }
        }
    }
    
    cout << oreoString.substr(a, b-a+1) << endl;
}
