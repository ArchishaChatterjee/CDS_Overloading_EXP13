// EXPERIMENT 13A : Constructor Overloading

# include <iostream>
using namespace std;

class construct{
    public:
    
    construct (int a, int b){ 
        cout << a+b << endl;
    }
    construct (float a, float b){
        cout << a+b <<endl;

    }
    construct (int a, int b, int c){
        cout << a+b+c << endl;

    }

    //void display(){
       // int a,b;
        //cout << a+b << endl;
   // }
};

int main(){
    construct Add(2,3);
    //Add.display();
    construct Add1(2.3f,3.3f);
    //Add1.display();
    construct Add2(1,2,3);
    //Add2.display();


    return 0;
}

/*
OUTPUT :
5
5.6
6
*/
