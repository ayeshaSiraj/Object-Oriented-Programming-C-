#include <iostream>
#include <cstring>

using namespace std;

bool Vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ;
}

string RemoveVowels(string str) {

    for (int i = 0; i < str.length(); ) {
        if (Vowel(str[i])) {
            str = str.substr(0, i) + str.substr(i + 1); 
        } else {
            i++; 
        }
    }

    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string newstr = RemoveVowels(str);
    cout << "New string : " << newstr << endl;

    return 0;
}
