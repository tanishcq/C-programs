#include <iostream>
using namespace std;

class box{
    private:
    float length, width, height;

    public:
    void input();
    void output();
};

void box::input(){
    cout << "Length : ";
    cin >> length;
    cout << "Width : ";
    cin >> width;
    cout << "Height : ";
    cin >> height;
}

void box::output(){
    float volume = length*width*height;
    cout << "Volume of box : " << volume << endl;
}

int main(){
    box b;
    b.input();
    b.output();
    return 0;
}
