/* Given a string s that consists of uppercase characters (A-Z) and lowercase (a-z), calculate how
 many uppercase characters and lowercase characters are in this string using two vectors and
 print these characters.
 In the output first line:
 -number of uppercase characters and characters with one space in between.
 In the output second line:
 -number of lowercase characters and characters with one space in between.
 Hint: To pass test in Gradescope you are expected to put endl after the second line. */

// ID: 220879
// Name: Azizbek Savkimov

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector<char> UPPERCASE;
    vector<char> LOWERCASE;
    
    string pattern;
    cin >> pattern;
    
    for (int i = 0; i < pattern.length(); i++) {
        int char_code = pattern[i];
        
        if (char_code >= 65 && char_code <= 90) {
            UPPERCASE.push_back(pattern[i]);
        }
        
        if (char_code >= 97 && char_code <= 122) {
            LOWERCASE.push_back(pattern[i]);
        }
    }
    
    cout << UPPERCASE.size();
    for (int i = 0; i < UPPERCASE.size(); i++) {
        cout << " " << UPPERCASE[i];
        
        if (i == UPPERCASE.size() - 1) cout << endl;
    }
    
    cout << LOWERCASE.size();
    for (int i = 0; i < LOWERCASE.size(); i++) {
        cout << " " << LOWERCASE[i];
        
        if (i == LOWERCASE.size() - 1) cout << endl;
    }
    
    return 0;
}
