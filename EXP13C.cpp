// EXPERIMENT 13C : Function Overloading

# include <iostream>
using namespace std;

class construct{
    public:
    int sum(int a, int b){
        cout << a+b << endl;
        return a+b;

    }
    int product (char a, char b){
        cout << a+b << endl;
        return (a*b);
    }
    int square(int a){
        cout <<  a*a << endl; 
        return a*a;
    }
    int square (float a){
        cout << a*a << endl;
        return a*a;
    }
    int cube(float a){
        cout <<  a*a*a << endl;
        return a*a*a;
    }
     
};

int main(){
    construct obj;
    obj.sum(2,3);
    obj.square(2.3f);
    obj.cube(3);
    obj.product(2,3);

    return 0;
}

/*
OUTPUT :
5
5.29
27
5
*/
