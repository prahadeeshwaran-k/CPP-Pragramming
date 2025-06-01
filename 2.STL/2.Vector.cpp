#include <iostream>
#include <vector>
using namespace std;

// * vector is used singly linked list 
// * also used std::vector
// * array size can't be change
// * vector can change its size and its dynamic in nature

int main(){
    vector <int> v;

    v.push_back(20);
    v.push_back(21);

    v.emplace_back(31); 
    v.emplace_back(32); // emplace_back constructs the element in-place, potentially faster for complex objects

    vector<int> v1(5,100);//{100,100,100,100,100}
    vector<int> v2(5,20);//{20,20,20,20,20}
    vector<int> v3(v2);//{v2 fully create a copy}


    vector<char> ch ={'q','w','e'};
    ch.push_back('z');
    //insert
    ch.insert(ch.begin(),'a');

    for (char c : ch) {
        cout << c << ' ';
    }
    cout <<"\n";

    // * Iterator in Vector 
    vector<int>::iterator it =  v.begin();
        // * "it" is the name of the iterator it can be anything  
        // * this means pointing to address of the data
        // * v.begin() return -> 0x1242 (address) to access the data we need to de reference it

    cout<< "v.begin(): "<< *v.begin() <<"\nv.end(): "<< *(v.end()-1)<<"\n\n";
        // * begin() is point to the beging of the element or 1st element
        // * end() is point to the after the last element or (n + 1) Eg: [5] -> end() return to 6 element use --it

    cout<< "using iterator:\n";
    it++; // move back to next memory[1]
    cout<< *(it) << " ";
    it++; // move back to next memory[2]
    cout<< *(it) << " \n\n";

    //for loop using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout <<"\n";

    //for loop using iterator with auto
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout <<"\n";

    //for each loop
    for(auto it : v){
        cout << it << " ";
    }
    cout <<"\n";

    //delete the element in a vector
    //{20,21,31,31} delete 21
    v.erase(v.begin() + 1);
    
    //delete multiple element in vector in series
    //{20,31,32}
    v.erase(v.begin() + 1, v.end()-1); //erase(begin address, end address)
    

    //insert a element
    vector<int> container(3,100);//{100,100}
    container.insert(v.begin(),300);//{300,100,100}
    container.insert(v.begin()+1, 2, 7);//{300, 7, 7, 100, 100}

    //insert a vector into a vector
    vector<int>copy(2,50);
    container.insert(container.begin(),copy.begin(),copy.end());
    //{50, 50, 300, 7, 7, 100, 100}

    //find the size of vector
    container.size();// 7

    //remove last element 
    container.pop_back();//{50, 50, 300, 7, 7, 100}

    //swap an vector
    v1.swap(v2);

    //to clear a vector
    container.clear();//clear all the element {}

    //check empty
    // * {1}-> false
    // * {} -> true

    container.empty();





    return 0;

}