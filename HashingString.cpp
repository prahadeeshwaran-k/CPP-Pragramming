#include<iostream>
using namespace std;

int main(){
    string s;
    s = "abcdabefc";

    int hash[26]= {0};
    for(int i=0; i<s.size();i++){
        hash[s[i]-'a']++ ;
    }

    string fS ="abcdef";
    for (int i = 0; i < fS.size(); i++) {
        char ch = fS[i];
        cout << ch << " -> "<< hash[ch - 'a'] << endl;
    }
    
    return 0;
}