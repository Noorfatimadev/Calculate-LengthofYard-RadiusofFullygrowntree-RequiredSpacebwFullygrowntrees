#include <iostream> 
#include <iomanip>
#include<cmath>
using namespace std;
{   
double length;
double space,singletree;
int totalarea;
double radius;
int trees;
    
cout << "Enter the length of the Yard:" << endl;
    cin >> length;
cout << "Enter the radius of a fully grown tree:" << endl;
    cin >> radius;
cout << "Enter the space between fully grown trees:" << endl;  
    cin >> space;
singletree=(2*radius)*space;
trees=length/singletree;
totalarea=PI*pow(radius,2)*trees;


cout << "The number of trees can be planted is:" << trees << endl;
cout << "The total area of yard that will be occupied  is:" << totalarea << endl;
    return 0;}
