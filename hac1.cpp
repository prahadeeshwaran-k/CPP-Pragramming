#include <bits/stdc++.h>

class student{
    
    private:
        vector<int> marks;//int markd[6]
        int average;
        int id;
        int subject;
        string name;
    
    public:
        student(string name,int id,int Subject){
            this->name = name;
            this->id = id;
            this->subject = Subject
        }
        
        void print(){
            cout << name <<" "<< id << endl;
        }
        
        void addmarks(int mark){
                marks.push_back(mark);
        }
    
        int getaverage(void){
            int temp= 0;
            vector<int>::iterator it =marks.begin(); //auto
            for(it;it<marks.end();it++){
                temp += *it;
            }
            average  = temp/subject;
        }
        
        int getgrade()
        {
            if(avearge>=90)
            cout<<"A\n";
                
            else if(avearge>=80)
            cout<<"B\n";
            
            else if(avearge>=70)
            cout<<"C\n";
            
            else if(avearge>=60)
            cout<<"D\n";
            
            else if(avearge<60)
            cout<<"F\n";
            
            else
            cout<<"Error\n";
        }
        
        
}

int main()
{
    std::cout<<"Hello World";
    vector<student> myclass;
    char ch;
    string name;
    int id,subjects;
    do{
        cin >> name >>id >>subject;
        myclass.push_back(student(name,id,subjects));
        cin >> ch;
    }while(ch == 'y');
    

    return 0;
}
