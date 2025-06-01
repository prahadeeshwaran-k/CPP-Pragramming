#include <iostream>
using namespace std;

int main(){
    //data type in pair that can be any thing
    pair <int,int> p = {1,3};

    //How to access
    cout <<p.first<< " & " <<p.second<<"\n";

    //pair contain pair
    pair <int,pair<int,int>> p1 = {1,{2,3}};
    cout <<p1.first << " & " << "{"<<p1.second.first<<","<<p1.second.second<<"}\n";

    pair <int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[0].first << " & " << arr [0].second<<", ";
    cout << arr[1].first << " & " << arr [1].second<<", ";
    cout << arr[2].first << " & " << arr [2].second<<"\n";

}