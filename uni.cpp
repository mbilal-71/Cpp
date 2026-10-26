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

    // string fruit;
    // int choice;
    // cout << "Enter your fav fruit" << endl;
    // cin >> fruit;

    // if (fruit == "mango")
    // {
    //     choice = 1;
    // }
    // else if (fruit == "apples")
    // {
    //     choice = 2;
    // }
    // else
    // {
    //     choice = 3;
    // }

    // switch (choice)
    // {
    // case 1:
    //     cout << "I like mangoes";
    //     break;
    // case 2:
    //     cout << "I like apples";
    //     break;
    // default:
    //     cout << "I like all fruits";
    // }

    // int choice;
    // cout << "1. Add  2. Subtract  3. Exit: ";
    // cin >> choice;

    // switch (choice) {
    //     case 1: cout << "Add selected"; break;
    //     case 2: cout << "Subtract selected"; break;
    //     case 3: cout << "Goodbye"; break;
    //     default: cout << "Invalid choice";
    // }

    // int choice,a,b;
    // cout << "1. Add  2. Subtract  3. Mul 4. Div " << endl;
    // cout << "Enter value of a and b" << endl;
    // cin >> a >> b;
    // cout << "Enter your choice: ";
    // cin >> choice;

    // switch(choice){
    //     case 1: cout << "a + b is: " << a+b; break;
    //     case 2: cout << "a - b is: " << a-b; break;
    //     case 3: cout << "a * b is: " << a*b; break;
    //     case 4: if (b != 0){
    //          cout << "a / b is: " << double(a) / b;
    //     }
    //     else{
    //         cout << "Error: Cannot divide by zero.";
    //     } break;

    //     default : cout << "Invalid Choice";
    // }

    // string username = "user";
    // int password = 1234;
    // string Username;
    // int Password;
    // cout << "Enter Username: ";
    // cin >> Username;
    // if (Username == username)
    // {
    //     cout << "Enter Password: ";
    //     cin >> Password;
    //     if (Password == password)
    //     {
    //         cout << "Login Successful!";
    //     }
    //     else
    //     {
    //         cout << "Login Failed! Incorrect Password.";
    //     }
    // }
    // else
    // {
    //     cout << "\nUser not found!";
    // }

    // int age;
    // string name;

    // cout << "Enter your age: ";
    // cin >> age;

    // cin.ignore();

    // cout << "Enter your full name: ";
    // getline(cin, name);

    // cout << "Age: " << age << endl;
    // cout << "Name: " << name << endl;

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num == 0){
    //     cout << "Number is Zero";
    // }
    // else if (num > 0){
    //     cout << "Number is positive";
    // }else{
    //     cout << "Number is negative";
    // }

    // int a,b;
    // cout << "Enter value of a and b: " <<endl;
    // cin >> a >> b;

    // if(a>b){
    //     cout << "a is greatest";
    // }else{
    //     cout << "b is greatest";
    // }

    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;

    // if (marks<0 || marks > 100) {
    //     cout << "Invalid Marks";
    // } else if (marks>=80 && marks<=100){
    //     cout << "Your grade is A";
    // } else if (marks>=70 && marks<80){
    //     cout << "Your grade is B";
    // } else if (marks>=60 && marks<70){
    //     cout << "Your grade is C";
    // } else {
    //     cout << "Your grade is F";
    // }

    // int units;
    // cout << "Enter units consumed: ";
    // cin >> units;

    // if (units < 0){
    //     cout << "Invalid input! Units cannot be negative.";
    // }else if (units <= 100){
    //     cout << "Category: Up to 100 units";
    // }else if (units <= 300) {
    //     cout << "Category: 101-300 units";
    // }else{
    //     cout << "Category: Above 300 units";
    // }

    //     int choice;
    //     cout << "Choices are: 1.Addition 2.Subtraction 3.Multiplication (Enter a number only): ";
    //     cin >> choice;

    //     if(choice==1){
    //         cout << "You selected Addition";
    //     } else if (choice==2){
    //         cout << "You selected Subtraction";
    //     } else if (choice==3){

    // }    cout << "You selected Multiplication";
    //     } else {
    //         cout << "Invalid choice";
    //     }


    // double amount, discount, finalAmount;
    // cout << "Enter purchase amount: Rs. ";
    // cin >> amount;
    // if (amount >= 5000){
    //     discount = amount * 0.10;
    // } else{
    //     discount = 0;
    // }
    // finalAmount = amount - discount;
    // cout << "Purchase Amount: Rs. " << amount << endl;
    // cout << "Discount: Rs. " << discount << endl;
    // cout << "Final Amount: Rs. " << finalAmount << endl;
    // cout << "Final Amount: Rs. " << finalAmount << endl;
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    string status = (age >= 18)? "Adult" : "Minor";
    cout << status;



    return 0;
}
