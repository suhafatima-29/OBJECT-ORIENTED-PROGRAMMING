#include <iostream>
using namespace std;

int main() {
    float purchase, discount, total;

    cout << "Enter purchase amount: Rs ";
    cin >> purchase;

    discount = (purchase < 100) ? 0 :
               (purchase <= 500) ? 0.10 * purchase :
               (purchase <= 1000) ? 0.15 * purchase :
               0.20 * purchase;

    total = purchase - discount;

    cout << "Discount Applied: Rs " << discount << endl;
    cout << "Total Amount after Discount: Rs " << total << endl;

    return 0;
}

