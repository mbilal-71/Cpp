#include <iostream>
#include <iomanip>
using namespace std;

// 1.[VARIABLES]:

//   int c = 45;

// int main(){
//     int  a = 6, b=16, c=26;
//     float pi = 3.14;
//     cout << "The value of a is " << a<< ". The value of b is " << b <<". The value of c is " << c;
//     cout << "\nThe value of pi is : " <<pi;
//     cout << "\nThe value of global c is : " << ::c;  // :: key
//     return 0;
// }

// 2.[INPUT / OUTPUT]:

int main()
{
    //    int num1, num2;

    //    cout << "Enter the value of num1: \n"; // << insertion operator
    //    cin >> num1; // >> extraction operator

    //    cout << "Enter the value of num2: \n";
    //    cin >> num2;

    //    cout << "The sum of num1 + num2 is: " << num1+num2;
    //     return 0;
    // }

    // 3.[HEADER FILES AND OPERATORS]:

    // system header files: it comes with compiler #include <iostream>
    // user defined: written by programmer

    // 4.[Arithmetic operators]:

    //     //running in flow following one after each
    //     int a=4,b=5;
    //     // cout << "The value of a++ is: "<<a++  << endl; // phly simple a print ho ga bd ma addition ho gi
    //     // cout << "The value of a   is: "<< a   << endl; // ab a ki value upr waly increment ki wja sa 5 ho chuki
    //     // cout << "The value of a-- is: "<< a-- << endl; // again phly a print ho ga jiski value 5 hwi thi in previous step phr usky bd decrement ho ga
    //     // cout << "The value of a   is: "<< a   << endl; // ab a ki value upr waly decrement ki wja sa 4 ho chuki
    //     // cout << "The value of ++a is: "<< ++a << endl; // phly increment ho ga previous value ma then a print ho ga
    //     // cout << "The value of a   is: "<< a   << endl;
    //     // cout << "The value of --a is: "<< --a << endl;
    //     // cout << "The value of a   is: "<< a   << endl;

    // 4.[Assignment operators]:

    //    cout << (a == b);

    // 5.[Float, Double, longDouble Literals]:

    // float d = 34.4f;
    // double e = 34.4;
    // long double f = 34.4L;

    // cout << "The value of d is: " <<d <<endl <<"The value of e is: " <<e <<endl;
    // cout << "The size of d (float) is: " << sizeof(d) <<endl <<"The size of e (double) is: " << sizeof(e) <<endl <<"The size of f (longDouble) is: " << sizeof(f) <<endl;
    //   cout <<"The size of 34.4 (basically float but by default taken as double in c++) is: " << sizeof(34.4);

    // 6.[Reference Variables]:

    // float x = 455;
    // float & y = x;

    // cout << x << endl; //output 455
    // cout << y; //output 455

    // 7.[TypeCasting]:

    //    int a = 45;
    //    float b= 45.46;
    //    int c = int(b);

    //    cout << "The value of a is: " << float(a) <<endl; // int converted into float
    //    cout << "The value of b is: " << int(b) <<endl; // float converted into int
    //    cout << c <<endl;
    //    cout << a+b <<endl;
    //    cout << a+ int(b) <<endl;

    // 8.[Constants];

    //   const int a = 35;
    //   int a = 45; // will give error bcz it is already decleared
    //   cout << a;

    // 9.[Manipulators];

    // <<endl; is manipulator
    // setw coming from #include <iomanip> is manipulator

    // int a=6, b=31,c=9087;

    // cout << "The value of a before setw is: " <<a <<endl;
    // cout << "The value of b before setw is: " <<b <<endl;
    // cout << "The value of c before setw is: " <<c <<endl;
    // cout << "The value of c after setw is : " <<setw(4) <<c <<endl; // sets width upto 4 digits. either it is one digit but it will take place of 4 digits by creating space in front
    // cout << "The value of a after setw is : " <<setw(4) <<a <<endl;
    // cout << "The value of b after setw is : " <<setw(4) <<b <<endl;

    // 10.[Operator Precedence]:

    // int a = 3, b=5,
    // c = ((((a*5) + b)-45)+87);
    // cout << c;

    // 11.[Control Structures]:
 
    // 11.1.[if-else]: => Selection control structure

    // int age;
    // cout << "Enter your age:" <<endl;
    // cin >> age;
    // if(age>=18 && age<=60){
    //     cout << "You are eligible to vote";
    // } else if(age>60 && age<=70){
    //     cout << "You should have Valid CNIC to cast vote";
    // } else{
    //     cout << "You are not eligible to vote";
    // }

    // 11.2.[Switch Case]: Selection control structure


    int age;
    cout << "Enter your age:";
    cin>>age;
    switch (age)
    {
    case 18:
        cout << "You are eligible for driving license";
        break;
    case 22:
    cout << "You are 22";
        break;
    
    default:
    cout << "No special case";
        break;
    }

    return 0;
    
}
