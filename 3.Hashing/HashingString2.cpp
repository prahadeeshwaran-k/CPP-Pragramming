#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string word;
    std::cout << "Enter a word: ";
    getline(cin, word);
    cout << "You entered: " << word << endl;

    int hash[26]={0};

    for(int i=0; i < word.size();i++){
        int temp = (word[i] - 'a');
        hash[temp] += 1;
        //hash[word[i]-'a']++
    }
    
    int q;
    cout <<"how many elements you going to find: " ;
    cin >> q;
    while (q--)
    {
        char c;
        cout<< "enter the element to find: ";
        cin >> c;
        cout<<hash[c-'a']<<"\n";
    }
    
}

//* Safer Version by GPT
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "You entered: " << word << endl;

    int hash[26] = {0};  // Only 26 letters a-z

    for (int i = 0; i < word.size(); i++) {
        char ch = tolower(word[i]);  // Case-insensitive
        if (ch >= 'a' && ch <= 'z') {
            hash[ch - 'a']++;
        }
    }

    int q;
    cout << "How many elements you are going to find: ";
    cin >> q;  // ✅ Missing semicolon added here

    while (q--) {
        char c;
        cout << "Enter the element to find: ";
        cin >> c;
        c = tolower(c);  // Case-insensitive
        if (c >= 'a' && c <= 'z') {
            cout << "Frequency of '" << c << "' = " << hash[c - 'a'] << "\n";
        } else {
            cout << "Invalid character. Only a-z allowed.\n";
        }
    }

    return 0;
}

*/