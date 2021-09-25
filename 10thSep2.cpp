// WAP to add two time objects.(time class to have hr, min and sec as data members)
#include <iostream>
using namespace std;

class time{
    private:
    int hrs, mins, secs;

    public:
    void add(time, time);
    void input(){
        cout << "\nEnter the time" << endl;
        cout << "Hours : ";
        cin >> hrs;
        cout << "Minutes : ";
        cin >> mins;
        cout << "Seconds : ";
        cin >> secs;
    }
    void output(){
        cout << "\nThe added time is " << hrs << " hrs " << mins << " mins and " << secs << " secs." << endl;
    }
};

void time::add(time a, time b){
    int q, r;
    hrs = a.hrs + b.hrs;
    mins = a.mins + b.mins;
    secs = a.secs + b.secs;
    if(secs > 59){
            r = secs % 60;
            q = secs / 60;
            secs = r;
            mins += q;
    }
    if(mins > 59){
        r = mins % 60;
        q = mins / 60;
        mins = r;
        hrs += q;
    }
}

int main(){
    time t1, t2, t3;
    t1.input();
    t2.input();
    t3.add(t1, t2);
    t3.output();
    return 0;
}