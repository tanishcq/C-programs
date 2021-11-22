// To demonstrate multiple try and catch blocks
#include <iostream>
#define cout std::cout
#define cin std::cin
int main()
{
    int numerator, denominator, result;
    cout << "Enter The Numerator : ";
    cin >> numerator;
    cout << "Enter The Denominator : ";
    cin >> denominator;
    try
    {
        if (denominator == 0)
            throw denominator;
        else if (denominator < 0)
            throw 1.1;
        result = numerator / denominator;
        cout << "\nResult Of Division : " << result;
    }
    catch (int num)
    {
        cout << "\nYou Can't Input " << num << " In Denominator";
    }
    catch (double db)
    {
        cout << "\nYou Can't Input Negative Number In Denominator";
    }
    cout << "\nEnd Of Try-Catch";
    return 0;
}