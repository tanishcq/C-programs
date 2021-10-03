// demonstrate multi level inheritence
#include <iostream>
#define cout(x) std::cout << x
#define coute(x) std::cout << x << std::endl
#define cin(x) std::cin >> x
#define string std::string
#define ll long long 

class employee{
    protected:
    ll empID;

    public:
    void inputID();
    void outputID();
};

void employee::inputID(){
    cout("Enter employee ID : ");
    cin(empID);
}

void employee::outputID(){
    cout("Employee ID : ");
    coute(empID);
}

class rating : public employee{
    protected:
    char empRating;

    public:
    void inputRating();
    void outputRating();
};

void rating::inputRating(){
    cout("Enter employee rating (A/B/C/D) : ");
    cin(empRating);
}

void rating::outputRating(){
    cout("Employee rating : ");
    coute(empRating);
}

class performance : public rating{
    public:
    ll salary;
    int inputSal();
    void outputSal();
    void displayeDetails();
};

int performance::inputSal(){
    cout("Enter employee current salary : ");
    cin(salary);
    if(empRating == 'A' || empRating == 'a'){
        return salary += 0.2*salary;
    }
    else if(empRating == 'B' || empRating == 'b'){
        return salary += 0.1*salary;
    }
    else if(empRating == 'D' || empRating == 'd'){
        return salary -= 0.1*salary;
    }
    else{
        return salary;
    }
}

void performance::outputSal(){
    cout("Employee salary as per rating : ");
    coute(salary);
}

void performance::displayeDetails(){
    coute("\nDetails of employee");
    outputID();
    outputRating();
    outputSal();
}


int main(){
    system("cls");
    performance emp;
    emp.inputID();
    emp.inputRating();
    emp.inputSal();
    emp.displayeDetails();
    return 0;
}   