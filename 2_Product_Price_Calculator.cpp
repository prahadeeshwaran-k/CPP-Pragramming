#include <bits/stdc++.h>
using namespace std;

class Product
{
public:
    string name;
    int price;
    int discount;
    int finial_price = 0;

    void getFinalPrice()
    {
        if(discount > 0)
        finial_price = price - (price*discount / 100);
        else
        finial_price = price;
    }

    Product(string name,int price,int discount){
        this->name = name;
        this->price = price;
        this->discount  =  discount;
    }
};

int main(){
    int n,price,discount;
    string name;
    vector<Product> StoreCart;

    cin >> n;
    for (int i = 0; i < n; i++)
    {   
        cin >> name >> price >> discount;
        Product temp(name,price,discount);
        temp.getFinalPrice();
        StoreCart.push_back(temp);
    }

    Product lowest = StoreCart[0];
    
    for (int i = 0; i < n; i++){
        if(lowest.finial_price > StoreCart[i].finial_price){
            lowest = StoreCart[i];
        }else if(lowest.finial_price == StoreCart[i].finial_price){
            if(lowest.name > StoreCart[i].name){
                lowest = StoreCart[i];
            }
        }
    }
    cout << "Cheapest: " << lowest.name << "(Final Price: " << lowest.finial_price << ")" << endl;
}