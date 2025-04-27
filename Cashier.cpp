#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> products;
    vector<double> quantities;
    vector<double> prices;
    while(true) {
        cout << "1-Add a product\n2-View cart\n3-Calculate total cost\n4-Exit\n";
        int x;
        cin >> x;
        if (x == 1) {
            cout << "Enter the product's name: ";
            string name;
            cin >> name;
            products.push_back(name);
            cout << "Enter the price: ";
            double price;
            cin >> price;
            prices.push_back(price);
            cout << "Enter the quantity: ";
            double quantity;
            cin >> quantity;
            quantities.push_back(quantity);
        }
        else if (x == 2) {
            for (int index = 0;index < products.size(); ++index) {
                cout << products[index] << " " << quantities[index] << " " << prices[index] << endl;
            }
        }
        else if (x == 3) {
            double cost = 0;
            for (int index = 0;index < products.size(); ++index) {
                cost += quantities[index] * prices[index];
            }
            cout << "Tax = 14%\n";
            cout << "Total Cost Before Taxes: " << cost << endl;
            cost += 0.14 * cost;
            cout << "Total Cost After Taxes: " << cost << endl;
        }
        else if (x == 4) {
            break;
        }
        else {
            cout << "Please Enter a valid number\n";
        }
    }
    return 0;
}
