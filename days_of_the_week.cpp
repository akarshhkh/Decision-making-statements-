//akarsh khot
//23070123012
//Aim - using switch case statement take any day from the user to print the day which user have dicides to choose.

#include<iostream>
using namespace std;
int main()

{
    int a;
    cout<<"Enter your choice\n1)Monday\n2)Tuesday\n3)Wednesday\n4)Thursday\n5)Friday\n6)Saturday\n7)Sunday"<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
    cout<<"Monday";
        break;

    case 2:
    cout<<"Tuesday";
        break;

    case 3:
    cout<<"Wednesday";
        break;

    case 4:
    cout<<"Thursday";
        break;

    case 5:
    cout<<"Friday";
        break;

    case 6:
    cout<<"Saturday";
        break;

    case 7:
    cout<<"Sunday";
        break;
        
    default:
    cout<<"Wrong input";
        break;
    }
}

/*
OUTPUT
Enter your choice
1)Monday
2)Tuesday
3)Wednesday
4)Thursday
5)Friday
6)Saturday
7)Sunday
5
Friday
*/
