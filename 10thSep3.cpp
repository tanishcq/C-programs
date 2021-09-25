// WAP to create a class names complex(data members- real and imag of int type, member functions - input(), output(), add(), subtract(), multiply(). Make a menu driven program by taking choice from the user to add, subtract or multiply.
// The functions should be to add, subtract , multiply two complex numbers and return the complex number object as result of operation.
#include <iostream>
#include <conio.h>
using namespace std;

class complex{
    private:
    int real, img;

    public:
    void add(complex, complex);
    void subtract(complex, complex);
    void multiply(complex, complex);
    void input(){
        cout << "\nEnter a complex number " << endl;
        cout << "Real part : ";
        cin >> real;
        cout << "Imaginary part : ";
        cin >> img;
    }
    void output(){
        cout << "\nThe number is " << real << " + " << img << "i" << endl;
    }
};

void complex::add(complex a, complex b){
    real = a.real + b.real;
    img = a.img + b.img;
    cout << "\nComplex Number after adding : " << real << " + " << img << "i" << endl;
}
void complex::subtract(complex a, complex b){
    real = a.real - b.real;
    img = a.img - b.img;
    cout << "\nComplex Number after subtracting : " << real << " + " << img << "i" << endl;
}
void complex::multiply(complex a, complex b){
    real = a.real * b.real;
    img = a.img * b.img;
    cout << "\nComplex Number after multiplying : " << real << " + " << img << "i" << endl;
}

int main(){
    complex n1, n2, n3;
    int choice;
    char c;
    n1.input();
    n2.input();
    do{
        cout << "\n1. Add" << endl;
        cout << "2. Subtract " << endl;
        cout << "3. Multiply " << endl;
        cout << "or press 'ctrl + c' to Exit " << endl; 
        cout << "Your choice : ";
        cin >> choice;
        switch(choice){
            case 1: n3.add(n1, n2);
                break;
            case 2: n3.subtract(n1, n2);
                break;
            case 3: n3.multiply(n1, n2);
                break;
            default: cout << "Not a Valid choice!" << endl;
        }
        cout << "Do you want to continue? (Y for yes/ rest for exit)";
        c = getch();
    }while(c == 'Y' || c == 'y');
    return 0;
}