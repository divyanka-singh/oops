#include <iostream>
using namespace std;

class student
{
public: //<<--- by default class create a private data members which is use only inner of the class that's why i made it public. --->>
    string name;
    int age;
    bool gender;
};

int main()
{

    student a;
    a.name = 'Divya';
    a.age = 20;
    a.gender = 1;

    return 0;
}