#include <iostream>
using namespace std;
class index
{
    int val;

public:
    index()
    {
        val = 0;
    }
    index(int in)
    {
        val = in;
    }
    int get_index()
    {
        return val;
    }
    friend index operator++(index &i)
    {
        return (++i.val);
    }
    friend index operator++(index &i, int)
    {
        return (i.val++);
    }
    friend index operator--(index &i)
    {
        return (--i.val);
    }
    friend index operator--(index &i, int)
    {
        return (i.val--);
    }
};
int main()
{
    system("cls");
    index i1(10), i2(20), i3, i4;
    cout << "Initial value in i1: " << i1.get_index() << endl;
    cout << "Initial value in i2: " << i2.get_index() << endl;
    cout << "Initial value in i3: " << i3.get_index() << endl;
    cout << "Initial value in i4: " << i4.get_index() << endl;
    i3 = ++i1;
    cout << "\ni3=++i1\n";
    cout << "i3= " << i3.get_index() << " and i1= " << i1.get_index();
    i4 = i2++;
    cout << "\ni4=i2++\n";
    cout << "i4= " << i4.get_index() << " and i2= " << i2.get_index();
    i3 = --i1;
    cout << "\ni3=--i1\n";
    cout << "i3= " << i3.get_index() << " and i1= " << i1.get_index();
    i4 = i2--;
    cout << "\ni4=i2--\n";
    cout << "i4= " << i4.get_index() << " and i2= " << i2.get_index();
    return 0;
}
