#include <iostream>
#include <string>
// leetcode beautiful substring 
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }

    int beautifulSubstrings(string s, int k) {
        int n = s.size();
        int cnt2 = 0;

        for (int i = 0; i < n; i++) {
            int vowels = 0, consonants = 0;
            
            for (int j = i; j < n; j++) {
                if (isVowel(s[j])) {
                    vowels++;
                } else {
                    consonants++;
                }

                if (consonants == vowels && (consonants * vowels % k == 0)) {
                    cnt2++;
                }
            }
        }
        return cnt2;
    }
};