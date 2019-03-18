//
//  main.cpp
//  Lab 2
//
//  Created by Mea Culpa on 3/13/19.
//  Copyright © 2019 Mea Culpa. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class secretType
{
public:
    void print();
    void setName(string x);
    void setAge(int x);
    void setWeight(int x);
    void setHeight(double x);
    void getName();
    void getAge();
    void getWeight();
    void weightStatus();
    
private:
    string name;
    int age, weight;
    double height;
};

void secretType::weightStatus()
{
    int x;
    x = (weight)/(height * height);
    if(x<=18.5)
    {
        cout<<"Underweight"<<endl;
    }
    else if(x>=18.5 && x<=24.9)
    {
        cout<<"Normal Weight"<<endl;
    }
    else if(x>=25 && x<=29.9)
    {
        cout<<"Over Weight"<<endl;
    }
    else
    {
        cout<<"Obese"<<endl;
    }
}
void secretType::setName(string x)
{
    name = x;
}
void secretType::setAge(int x)
{
    age = x;
}
void secretType::setWeight(int x)
{
    weight = x;
}
void secretType::setHeight(double x)
{
    weight = x;
}


int main()
{
    secretType patient[3];
    string name;
    int age,weight,height;
    
    cout<<"Welcome to bmi calculator "<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter patient's name"<<endl;
        cin>>name;
        patient[i].setName(name);
        cout<<"Enter Age"<<endl;
        cin>>age;
        patient[i].setAge(age);
        cout<<"Enter Weight"<<endl;
        cin>>weight;
        patient[i].setWeight(weight);
        cout<<"Enter Height"<<endl;
        cin>>height;
        patient[i].setHeight(height);
        patient[i].weightStatus();
        
    }
    return 0;
}
