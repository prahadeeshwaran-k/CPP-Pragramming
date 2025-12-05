#include <bits/stdc++.h>
using namespace std;

class student
{

public:
    vector<int> marks; // int marks[6]
    int average = 0;
    int id;
    int subject;
    string name;

public:
    student(string name, int id, int Subject)
    {
        this->name = name;
        this->id = id;
        this->subject = Subject;
    }

    void addmarks(int mark)
    {
        marks.push_back(mark);
    }

    void findaverage(void)
    {
        int temp = 0;
        vector<int>::iterator it = marks.begin(); // auto
        for (it; it < marks.end(); it++)
        {
            temp += *it;
        }
        average = temp / subject;
    }

    char getgrade(void)
    {
        if (average >= 90)
            return 'A';

        else if (average >= 80)
            return 'B';

        else if (average >= 70)
            return 'C';

        else if (average >= 60)
            return 'D';

        else
            return 'F';
    }
};

int main()
{
    vector<student> myclass;

    char ch;
    string name;
    int id, subjects, mark;

    do
    {
        cin >> name >> id >> subjects;
        student s(name, id, subjects);
        for (int i = 0; i < s.subject; i++)
        {
            cin >> mark;
            s.addmarks(mark);
        }
        s.findaverage();

        myclass.push_back(s);
        cin >> ch;
    } while (ch == 'y');

    student topper = myclass[0];
    
    for (int i = 0; i < myclass.size(); i++)
    {
        if (topper.average < myclass[i].average)
        {
            topper = myclass[i];
        }
        else if (topper.average == myclass[i].average)
        {
            if (topper.name > myclass[i].name)
            {
                topper = myclass[i];
            }
        }
    }
    cout << "Topper: " << topper.name;
    cout << "(Avg: " << topper.average << ", Grade: " << topper.getgrade() << ")" << endl;

    return 0;
}
