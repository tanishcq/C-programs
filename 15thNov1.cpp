// To demonstrate exception handling (try-catch)
#include <iostream>
#define cout std::cout
#define cin std::cin
int main()
{
    int num, den, result;
    cout << "Enter the Numerator : ";
    cin >> num;
    cout << "Enter the Denominator : ";
    cin >> den;
    try
    {
        if (den == 0)
            throw den;
        result = num / den;
        cout << "\nThe Result Of Division : " << result;
    }
    catch (int n)
    {
        cout << "\nYou Can't Enter " << n << " In Denominator";
    }
    cout << "\nEnd Of Program";
    return 0;
}