/*
Problem : Find the Frequency of Each Digit
Write a program that accepts a number from the user and finds the frequency of each digit appearing in it.

Input: 239522
Output:
2 → 3 times
3 → 1 time
9 → 1 time
5 → 1 time

Input: 1018
Output:
1 → 2 times
0 → 1 time
8 → 1 time

Input: -1018
Output:
1 → 2 times
0 → 1 time
8 → 1 time

Input: 9000
Output:
9 → 1 time
0 → 3 times
0 → 3 times
*/
#include <iostream>
using namespace std;

class Numbers 
{
public:
    int iNo;

    Numbers(int iValue) 
    {
        iNo = abs(iValue);  // Convert to positive to handle negative numbers
    }

    void Frequency() 
    {
        int freq[10] = {0};  // Array to store frequency of digits 0-9
        int temp = iNo;      // Preserve original number
        int iDigit = 0;

        if (temp == 0) 
        { // Special case for 0
            cout << "0 -> 1 time\n";
            return;
        }

        while (temp > 0) 
        {
            iDigit = temp % 10;
            freq[iDigit]++;
            temp =temp / 10;
        }

        // Display frequency of each digit
        for (int i = 0; i < 10; i++) 
        {
            if (freq[i] > 0) {
                cout << i << " -> " << freq[i] << (freq[i] == 1 ? " time" : " times") << "\n";
            }
        }
    }
};

int main() 
{
    int iValue = 0;
    cout << "Enter Number: ";
    cin >> iValue;

    Numbers nobj(iValue);
    nobj.Frequency();

    return 0;
}
