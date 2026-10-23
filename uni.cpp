// #include <iostream>
// using namespace std;

// int main(){
//     string name = "Muhammad Bilal";   
//     int age =20;
//     string semester = "Fall 2026 (2nd)";

//     cout << name << endl << age << endl << semester;

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    // int marks1,marks2,marks3;
    // int totalMarks = 300, obtainedMarks;
    // double percentage;

    // cout << "Enter marks1: ";
    // cin >> marks1;
    // cout << "Enter marks2: ";
    // cin >> marks2;
    // cout << "Enter marks3: ";
    // cin >> marks3;

    // totalMarks = marks1+marks2+marks3;
    // percentage = (obtainedMarks/totalMarks)*100;

    // cout << "Percentage is: " << percentage;
    
// int marks=40;
//     if(marks>=85)
//         cout << "A";
//     else if (marks>=70)
//         cout << "B";
//     else if (marks>=50)
//         cout << "C";
//     else
//     cout << "F";    

// int age;
// cout << "Enter your age:";
// cin>>age;
// switch ((age>=18) && (age<=60))
// {
//     case 1:
//         cout << "You are eligible for driving license";
//         break;
//     case 0:
//     cout << "You are not eligible for driving license";
//     break;

// }

string fruit;
int choice;
cout << "Enter your fav fruit" << endl;
cin >> fruit;

if (fruit == "mango")
{
    choice = 1;
}
else if (fruit == "apples")
{
    choice = 2;
}
else
{
    choice = 3;
}

switch (choice)
{
case 1:
    cout << "I like mangoes";
    break;
case 2:
    cout << "I like apples";
    break;
default:
    cout << "I like all fruits";
}
 

    return 0;
}


