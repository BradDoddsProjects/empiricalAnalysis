#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string getLCS(string s1,string s2);
string getLRS(string S);

int main()
{
    string nnString;
    string S = "California";
    //string S = "Fullerton College";
    //string S = "";
    //string S = "Code";
    
    nnString = getLRS(S);
    
    cout << nnString << endl;
}
string getLRS(string S)
{
    string nString = "";
    int N = S.length();
    string subStrings[N];
    
    if(S.empty())
    {
        return "";
    }
    //get all substrings
    for(int i = 0; i < N; i++)
    {
        subStrings[i] = S.substr(i,N);
    }
    
    //sort substrings
    sort(subStrings, subStrings + N);
    
    //find longest repeated substr
    for(int i = 0; i < N-1; i++)
    {
        string x = getLCS(subStrings[i], subStrings[i+1]);
        if(x.length() > nString.length())
        {
            nString = x;
        }
    }
    return nString;
}
string getLCS(string s1,string s2)
{
    int x = min(s1.length(),s2.length());
    for(int i = 0; i < x; i++)
    {
        if(s1[i]!=s2[i])
            return s1.substr(0,i);
    }
    return s1.substr(0,x);
}
