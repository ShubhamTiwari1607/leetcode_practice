#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string rearrangeLargestNumber(string num) {
    vector<int> evenDigits, oddDigits;

    // Separate digits by parity
    for (char c : num) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            evenDigits.push_back(digit);
        } else {
            oddDigits.push_back(digit);
        }
    }

    // Sort each group in descending order
    sort(evenDigits.rbegin(), evenDigits.rend());
    sort(oddDigits.rbegin(), oddDigits.rend());

    // Reconstruct the largest number
    string result;
    int evenIndex = 0, oddIndex = 0;

    for (char c : num) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            // Use the next largest even digit
            result += (evenDigits[evenIndex++] + '0');
        } else {
            // Use the next largest odd digit
            result += (oddDigits[oddIndex++] + '0');
        }
    }

    return result;
}

int main() {
    string number = "7596801";
    string largestNumber = rearrangeLargestNumber(number);

    cout << "Largest number: " << largestNumber << endl;

    return 0;
}
