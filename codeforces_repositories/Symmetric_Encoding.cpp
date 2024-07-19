// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    while(numTestCases--){
        int strLength;
        cin >> strLength;
        string inputStr;
        cin >> inputStr;
        unordered_map<char, int> charFrequency;
        for(auto character : inputStr){
            charFrequency[character]++;
        }
        string uniqueChars = "";
        for(auto pair : charFrequency){
            uniqueChars += pair.first;
        }
       
        sort(uniqueChars.begin(), uniqueChars.end());
        unordered_map<char, int> charIndexMap;
        for(int idx = 0; idx < uniqueChars.size(); idx++){
            charIndexMap[uniqueChars[idx]] = idx + 1;
        }
        for(int idx = 0; idx < strLength; idx++){
            cout << uniqueChars[-charIndexMap[inputStr[idx]] + uniqueChars.size()];
        }
        cout<<endl;
    }
    return 0;
}
