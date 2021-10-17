#include <iostream> 
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define coutes(x, y) std::cout << x << y << std::endl
#define cin(x) std::cin >> x
#define string std::string

class student{
    protected:
    string name;
    int rno, mid_sem;
    
    public:
    void mid_input(){
        coute("Enter details");
        cout("Name : ");
        cin(name);
        cout("Roll no : ");
        cin(rno);
        cout("Mid sem marks : ");
        cin(mid_sem);
    }
};

class exam{
    protected:
    int end_sem;

    public:
    void end_input(){
        cout("End sem marks : ");
        cin(end_sem);
    }
};

class result: public student, public exam{
    protected:
    int total;
    float gpa;

    public:
    void output(){
        total = (mid_sem + end_sem)/2;
        if(total > 95)
            gpa = 10;
        else
            gpa = (total/0.95) * 0.10;
        coute("\nResult");
        cout("Roll no. : ");
        coute(rno);
        coutes("GPA : ", gpa);
    }
};

int main(){
    system("cls");
    result s1;
    s1.mid_input();
    s1.end_input();
    s1.output();
    return 0;
}