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
    float price1, price2, price3;
    int quantity1, quantity2, quantity3;
    float total1, total2, total3,subtotal, finalTotal;
    

    cout << "Enter price of item 1: ";
    cin >> price1;
    cout << "Enter quantity of item 1: ";
    cin >> quantity1;

    cout << "Enter price of item 2: ";
    cin >> price2;
    cout << "Enter quantity of item 2: ";
    cin >> quantity2;

    cout << "Enter price of item 3: ";
    cin >> price3;
    cout << "Enter quantity of item 3: ";
    cin >> quantity3;

    total1 = price1 * quantity1;
    total2 = price2 * quantity2;
    total3 = price3 * quantity3;

    subtotal = total1 + total2 + total3;
    finalTotal = subtotal;

    cout << "Subtotal = " << subtotal << endl;
    cout << "Final Total = " << finalTotal << endl;

    return 0;
}


