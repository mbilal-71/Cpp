#include <iostream>
#include <iomanip>
#include <string>
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

// int main()
// {
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

// int age;
// cout << "Enter your age:";
// cin>>age;
// switch ((age>=18) && (age<=60))
// {
//     case 0:
//     cout << "You are not eligible for driving license";
//     break;
// case 1:
//     cout << "You are eligible for driving license";
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

// 11.3.[For Loop]:

// for(initialization; condition; updation){ sb sa phly initiate ho ga, phr condition check ho gi, usky bd body ma code execute ho ga and phr updation ho gi
//  loop body()
// }

// int i;
// for (int i = 1; i <= 10; i++)
// {
//     cout << "i"<< endl;
// }

// infinite for loop

// int i;
// for (int i = 1; 3 <= 10; i++)
// {
//     cout << "i"<< endl;
// }

// 11.4.[While Loop]:

// int i=0;
// while ( i<=4)
// {
//     cout << i << endl;
//     i++;
// }

// infinite while loop

// int i=1;
// while (true)
// {
//     cout << i << endl;
//     i++;
// }

// 11.5.[do-while Loop]:

// int i=0;
// do
// {
//     cout << i << endl;
//     i++;
// } while (i<=4);

// int i=1;
// do
// {
//     cout << "6 * " << i << " = " << i*6 << endl;
//     i++;
// } while (i<=10);

// int i, j;

// for (i = 1; i <= 5; i++)
// {
//     for (j = 1; j <= 5; j++)
//     {
//         cout << " * ";
//     }
//     cout << endl;
// }
// for (i = 1; i <= 5; i++)
// {
//     for (j = 1; j <= 5; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }
// for (i = 1; i <= 5; i++)
// {
//     for (j = 1; j <= 5; j++)
//     {
//         cout << i;
//     }
//     cout << endl;
// }

// for (i = 5; i >= 1; i--)
// {
//     for (j = 5; j >= 1; j--)
//     {
//         cout << j;
//     }
//     cout << endl;
// }
// for (i = 5; i >= 1; i--)
// {
//     for (j = 5; j >= 1; j--)
//     {
//         cout << i;
//     }
//     cout << endl;
// }

// for (i = 1; i <=5; i++)
// {
//     for (j = 5; j >= i; j--)
//     {
//         cout << " * ";
//     }
//     cout << endl;
// }

// for (i = 1; i <=5; i++)
// {
//     for (j = 1; j <= i; j++)
//     {
//         cout << " * ";
//     }
//     cout << endl;
// }

// for (i = 1; i <=5; i++)
// {
//     for (j = 1; j <= i; j++)
//     {
//         cout << j;
//     }
//     cout << endl;
// }

// for (i = 1; i <=5; i++)
// {
//     for (j = 1; j <= i; j++)
//     {
//         cout << i;
//     }
//     cout << endl;
// }

// for ( i = 5; i >=1; i--)
// {
//     for(j=5; j>=i; j--){
//         cout << j;
//     }
//     cout << endl;
// }

// for ( i = 5; i >=1; i--)
// {
//     for(j=5; j>=i; j--){
//         cout << i;
//     }
//     cout << endl;
// }

// for ( i=1; i <=5; i++)
// {
//     for(j=5; j>=i; j--){
//         cout << j;
//     }
//     cout << endl;
// }

// for ( i=1; i <=5; i++)
// {
//     for(j=5; j>=i; j--){
//         cout << i;
//     }
//     cout << endl;
// }

//    for ( i = 5; i >=1; i--)
//     {
//         for(j=i; j>=1; j--){
//             cout << j;
//         }
//         cout << endl;
//     }

// for ( i=1; i <=5; i++)
// {
//     for(j=5; j>=i; j--){
//         cout << i;
//     }
//     cout << endl;
// }

// 12.[Break and Continue]:

// for (i = 1; i <= 5; i++)
// {
//     if(i==4){
//         break; // it will terminate loop on 4
//     }
//     cout << i << endl;
// }

// for (i = 1; i <= 5; i++)
// {
//     if(i==4){
//         continue; // it will skip 4
//     }
//     cout << i << endl;
// }

// 13.[Pointers]: => pointer is data type which holds the address of other data types

// & use:

// int a = 3;
// int* b = &a;   // * is dereferencing operator & address operator

// cout << b << endl;

// // * use:

// cout << "The value at address b is: " << *b << endl;

// [pointer to pointer]:

// int** c = &b;

// cout << &b <<endl;
// cout << c  <<endl;
// cout << *c <<endl; // it will give address of a in output
// cout << **c <<endl;

// 14. [Arrays]: => An array is a collection of items of similar type stored in contagious memory locations

// int i =0;
// int i, marks[] =  {86,56,92,45};

// cout << marks;

// for(i=0;i<4;i++){
//     cout << marks[i] <<endl;
// }

// while (i<4)
// {
//     cout << marks[i] <<endl;
//     i++;
// }

// do
// {
//     cout << marks[i] <<endl;
//     i++;
// } while (i<4);

// 15. [Pointers and Arrays]:

// int marks[] = {86, 56, 92, 45};
// int* p = marks; // pointer to first element of array
// cout << "The address of marks[0] is: " << p << endl; // prints the memory address
// cout << *(p+1) <<endl;
// cout << *(p++) <<endl;
// cout << *p <<endl;
// cout << *(++p);

// [Values]:

// cout << "The value of marks[0] is: " << *p << endl;
// cout << "The value of marks[1] is: " << *(p+1) << endl;
//  cout << *p <<endl;
// cout << "The value of marks[2] is: " << *(p+2) << endl;
// cout << "The value of marks[3] is: " << *(p+3) << endl;

// &address is taken by just name of variable
// marks will give address of 1st index
// use of &marks for address is wrong x x

// [Pointer arithmetic]:

// New address = Current address + (i * size of data type)
// (p + i)     =        p        + (i * size of data type)
//  32 + i     =        32       + (1 * 4) => 36

//     return 0;
// }

// 16. [Structure, Union and Enums]:

// typedef struct employee
// {
//     int id;
//     char favChar;
//     float salary;
// } emp;

union money // better memory usage // it allows to share only data of one
{
    int id;
    char car;
    float pounds;
};

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// int main(){

// enum meal {Breakfast, Lunch, Dinner};
// meal m1 = Breakfast; // 2nd method
// cout << m1 << endl;
// cout << Breakfast << endl;
// cout << Lunch << endl;
// cout << Dinner << endl;

// emp ali;
// ali.id = 101;
// ali.favChar = 'A';
// ali.salary = 120000;
// union money m1;
// m1.id = 313;
// m1.car = 'c';

// cout << ali.id <<endl;
// cout << ali.favChar <<endl;
// cout << ali.salary <<endl;
// cout << m1.id << endl;
// cout << m1.car << endl; // it will overwrite memory location and will change val of id

// 17. [Function]:

//     int num1, num2;
//     cout << "Enter 1st number" << endl;
//     cin >> num1;
//     cout << "Enter 2nd number" << endl;
//     cin >> num2;

//     cout << "The sum is: " << sum(num1, num2);

//     return 0;
// }

// 18. [Function Prototype]:

// int sum(int a, int b);
// void g(void);
// // int sum(int , int);   // Acceptable
// // int sum(int a,b); // Not acceptable
// int main()
// {

//     int num1, num2;
//     cout << "Enter 1st number" << endl;
//     cin >> num1;
//     cout << "Enter 2nd number" << endl;
//     cin >> num2;
//     // num1 and num2 are actual parameters
//     cout << "The sum is: " << sum(num1, num2);
//     g();
//     return 0;
// }

// int sum(int a, int b)
// {
//     // Formal parameters a and b will be taking values from actual parameters num1 and num2
//     int c = a + b;
    
// }
// void g(){
//     cout << "\nGood Morning";
// }

// 18. [Call by reference using pointer]:


// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int a=4, b=5;
//     cout << "The value of a before swap is: " << a << endl;
//     cout << "The value of b before swap is: " << b << endl;
//     swapPointer(&a,&b);
//     cout << "The value of a after swap is: " << a << endl;
//     cout << "The value of b after swap is: " << b << endl;


//     return 0;
// }

// 19. [Call by reference using c++ reference variable]:

// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


// int main(){
    
// int a=4, b=5;
//     cout << "The value of a before swap is: " << a << endl;
//     cout << "The value of b before swap is: " << b << endl;
//     swapReferenceVar(a,b);
//     cout << "The value of a after swap is: " << a << endl;
//     cout << "The value of b after swap is: " << b << endl;

//     return 0;
// }

// 20. [Return by reference]:

// int & swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }


// int main(){
    
// int a=4, b=5;
//     cout << "The value of a before swap is: " << a << endl;
//     cout << "The value of b before swap is: " << b << endl;
//     swapReferenceVar(a,b) = 543;
//     cout << "The value of a after swap is: " << a << endl;
//     cout << "The value of b after swap is: " << b << endl;

//     return 0;
// }

// 21. [Inline functions]:

// inline int product(int a, int b){
//     return a*b;
// }

// int main(){
//     int a,b;
//     cout << "Enter value of a and b" << endl;
//     cin >> a >> b;
//     cout << "The product of a and b is: "  << product(a,b);
    
//     return 0;
// }

// 22.[Static Variable]:

//     int product(int a, int b){ // not use with inline
//     static int c = 0; 
//     c = c + 1; // next time when this function run it value will be retained. if c becomes equal to 1. next time will initiate from 1.
//     return a*b+c;
// }

// int main(){
//     int a,b;
//     cout << "Enter value of a and b" << endl;
//     cin >> a >> b;
//     cout << "The product of a and b is: "  << product(a,b);
//     cout << "The product of a and b is: "  << product(a,b);
//     cout << "The product of a and b is: "  << product(a,b);
//     cout << "The product of a and b is: "  << product(a,b);
//     cout << "The product of a and b is: "  << product(a,b);
    
//     return 0;
// }

// 23. [Default Argument]:

// float moneyReceived(int currentMoney, float factor=1.04){
// return currentMoney * factor;
// }

// int main(){
//     int money = 100000;
//     cout << "if you have " << money << "in your account. You will receive " << moneyReceived(money) <<  " Rs after 1 year" <<endl;
//     cout << "For VIP: if you have " << money << "in your account. You will receive " << moneyReceived(money, 1.1) <<  " Rs after 1 year";
//     // if we don't give value in params. function will use default value.
//     return 0;
// }

// 24. [Recursion]:

// Factorial => n! = n * (n-1)

// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }


// int main(){
    
// int num;
// cout << "Enter a number" << endl;
// cin >> num;
// cout << "The factorial of num is: " << factorial(num);

//     return 0;
// }

// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3); 
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

// Fibonacci Sequence:

int fib(int n){
    if (n<2){
        return 1;
    }
  return fib(n-1) + fib(n-2);
}

int main(){
    
int num;
cout << "Enter a number" << endl;
cin >> num;
cout << "The term in fibonacci sequence at index " <<num << " is: " << fib(num);

    return 0;
}

//fib(5)= fib(4) + fib(3) ==> 5+3 = 8
//fib(4)= fib(3) + fib(2) ==> 3+2 = 5
//fib(3)= fib(2) + fib(1) ==> 2+1 = 3
//fib(2)= fib(1) + fib(0) ==> 1+1 = 2
//fib(1) = 1
//fib(0) = 1