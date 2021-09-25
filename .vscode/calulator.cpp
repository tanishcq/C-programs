#include <iostream>
using namespace std;
int main()
{
    char fav;
    int num1, num2, choice, i;
    cout << "\n Enter 1st Number:";
    cin >> num1;
    cout << "\n Enter 2nd Number:";
    cin >> num2;
    do
    {
        cout << "\n Press 1 for Addition";
        cout << "\n Press 2 for Subtraction";
        cout << "\n Press 3 for Multiplication:";
        cout << "\n Press 4 for Division";
        cout << "\n Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n Sum of " << num1 << " and " << num2;
            cout << " : " << num1 + num2;
            break;
        case 2:
            cout << "\n Subtraction of " << num1 << " and " << num2;
            cout << " : " << num1 - num2;
            break;
        case 3:
            cout << "\n Multiplication of " << num1 << " and " << num2;
            cout << " : " << num1 * num2;
            break;
        case 4:
            cout << "\n Division of " << num1 << " and " << num2;
            cout << " : " << num1 / num2;
            break;
        default:
            printf("\n wrong choice");
        }
        printf("\n Do you want to continue?(y/n)\n");
        scanf("\n %c", &fav);
    } while (fav == 'y');
}