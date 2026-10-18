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
    int marks1,marks2,marks3;
    int totalMarks = 300, obtainedMarks;
    double percentage;

    cout << "Enter marks1: ";
    cin >> marks1;
    cout << "Enter marks2: ";
    cin >> marks2;
    cout << "Enter marks3: ";
    cin >> marks3;

    totalMarks = marks1+marks2+marks3;
    percentage = (obtainedMarks/totalMarks)*100;

    cout << "Percentage is: " << percentage;

    return 0;
}


