// EXPERIMENT 13E : Constructors Multiplication Operator using own example

#include <iostream>
using namespace std;

class Expenses{
    private:
    int a, b;
    public:
    Expenses (int x=0, int y=0){
        a = x;
        b = y;
    }

    Expenses operator*(Expenses const& obj){
        return Expenses(a * obj.a, b * obj.b);
    }

    void print(){
        cout << "Expenses of first product:" << a << endl;
        cout << "Expenses of second product:" << b << endl;
    }
};

int main(){
    cout << "Product 1 price : 10 Rs." << "\t" << " 2 units bought" << endl;
    cout << "Product 2 price : 5 Rs." << "\t" <<  "\t" << " 4 units bought" << endl;
    Expenses c1(10,5);
    Expenses c2(2,4);
    Expenses c3 = c1 * c2;
    c3.print();

    return 0;
}

/*
OUTPUT :
Product 1 price : 10 Rs.         2 units bought
Product 2 price : 5 Rs.          4 units bought
Expenses of first product:20
Expenses of second product:20
*/
