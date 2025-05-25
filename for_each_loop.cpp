#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> grades = { 12,32,34,46,55,59,61,63};

    //Normal for loop
    for (size_t i =0;i<grades.size();i++){
        cout<<grades[i]<<" ";
    }
    cout<< endl;

    //foreach loop
    for(int variable :grades){
        cout<< variable << " ";
    }
    cout << endl;

    //foreach loop also works in String 
    string name = "vanakkam";
    for(char letter : name ){
        cout << letter << " ";
    }
    cout << endl;

    vector<string> languages = {"Tamil","English","Hindi","Malayalam","Telugu"};
    for(string variable : languages){
        cout << variable << " ";
    }
    cout << endl;

    //pass a reference with const
    for(const string& variable : languages){
            cout << variable << " ";
        }
    
    //to access the loop in revers order

    //important with size_t it is a unsigned long long int so it cant be negative (Used with caution when in i--) 
    
    //LIMITATION
    //1.cant use the revers order of the list in foreach loop
    //2.cant change the value of the item buy range base(for each loop)
    //3.but we can change the value by pass the reference  
    //foreach loop


    //update the value using pass by reference
    for(int& variable :grades){
        variable += 5;
    }
    cout << endl;

    //printing the updated vector
    for(int variable :grades){
        cout<< variable << " ";
    }
    cout << endl;

    return 0;
}