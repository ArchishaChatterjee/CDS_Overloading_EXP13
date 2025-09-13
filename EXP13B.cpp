// EXPERIMENT 13B :  Constructor Overloading

# include <iostream>
using namespace std;

class construct{
    public:
    int a,b,c;
    construct (int a, int b){
        cout << "Sum :" << a+b << endl;
        cout << "Difference :" << a-b << endl;
        cout << "Product :" << a*b << endl;
        cout << "Division :" << a/b << endl;
        
    }

    void display(){

    }
};

int main(){
    construct Calc(2,3);
    Calc.display();

    return 0;
}

/*
OUTPUT :
Sum :5
Difference :-1
Product :6
Division :0
*/
