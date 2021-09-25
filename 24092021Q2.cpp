// WAP to create a class matrix to represent a 2-D array to be allocated memory dynamically, by using concept of array of array pointers. Write suitable constructor, destructor and member functions to input and display elements of 2-D array.
#include <iostream>
#define cout std::cout
#define cin std::cin
#define endl std::endl

class matrix{
    int **p, r, c;
    
    public: 
    matrix(int, int);
    ~matrix();
    void input();
    void output();
};

matrix::matrix(int r, int c){
    this->r = r;
    this->c = c;
    p = new int *[r];
    for(int i = 0; i < r; i++)
        p[i] = new int[c];
}

matrix::~matrix(){
    cout << "\nReleasing memory!" << endl;
    for(int i = 0; i < r; i++)
        delete []p[i];
    delete []p;
}

void matrix::input(){
    for(int i = 0; i < r; i++){
        cout << "Row " << i+1 << ": " << endl;
        for(int j = 0; j < c; j++)
            cin >> p[i][j];
        cout << endl;
    }
}

void matrix::output(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }
}

int main(){
    int r, c;
    cout << "\nEnter no. of rows and cols : ";
    cin >> r >> c;
    matrix m(r, c);
    cout << "\nEnter " << r*c << " elements : " << endl;
    m.input();
    cout << "\nDisplaying matrix" << endl;
    m.output();
    return 0;
}