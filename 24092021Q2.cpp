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
    for(int i = 0; i)
}
int main(){
    return 0;
}