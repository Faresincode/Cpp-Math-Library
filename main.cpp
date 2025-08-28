
#include "clscMath.h"
#include <iostream>
using namespace std;

int main() {
    cout << "================= clscMath Test Program =================" << endl;

    // Test positivity
    cout << "\n-- Positivity Check --" << endl;
    cout << "5 is positive? " << clscMath::IsPositive(5) << endl;
    cout << "-3 is negative? " << clscMath::IsNegative(-3) << endl;
    cout << "0 is zero? " << clscMath::IsZeroInt(0) << endl;

    // Odd / Even
    cout << "\n-- Odd / Even --" << endl;
    cout << "7 is odd? " << clscMath::IsOdd(7) << endl;
    cout << "10 is even? " << clscMath::IsEven(10) << endl;

    // Prime check
    cout << "\n-- Prime Check --" << endl;
    cout << "7 is prime? " << clscMath::IsPrime(7) << endl;
    cout << "12 is prime? " << clscMath::IsPrime(12) << endl;

    // Palindrome check
    cout << "\n-- Palindrome Check --" << endl;
    cout << "121 is palindrome? " << clscMath::IsPalindrome(121) << endl;
    cout << "123 is palindrome? " << clscMath::IsPalindrome(123) << endl;

    // Perfect number
    cout << "\n-- Perfect Number Check --" << endl;
    cout << "6 is perfect? " << clscMath::IsPerfect(6) << endl;
    cout << "10 is perfect? " << clscMath::IsPerfect(10) << endl;

    // Reverse number
    cout << "\n-- Reverse Number --" << endl;
    cout << "Reverse of 1234: " << clscMath::ReverseNum(1234) << endl;

    // Sum of digits
    cout << "\n-- Sum of Digits --" << endl;
    cout << "Sum of digits of 1234: " << clscMath::SumDigits(1234) << endl;

    // Number to text
    cout << "\n-- Number to Text --" << endl;
    cout << "1234 in words: " << clscMath::NumberToText(1234) << endl;

    // Math operations
    cout << "\n-- Basic Math Operations --" << endl;
    cout << "Sum(5, 10, 15) = " << clscMath::Sum(5, 10, 15) << endl;
    cout << "Subtract(50, 10, 5) = " << clscMath::Subtract(50, 10, 5) << endl;
    cout << "Multiplicate(2, 3, 4) = " << clscMath::Multiplicate(2, 3, 4) << endl;
    cout << "Divide(100, 2, 5) = " << clscMath::Divide(100, 2, 5) << endl;
    cout << "Mode2Num(17, 5) = " << clscMath::Mode2Num(17, 5) << endl;

    // ABS, Opposite, Half
    cout << "\n-- Utility Functions --" << endl;
    cout << "ABS(-12) = " << clscMath::ABS(-12) << endl;
    cout << "Opposite(12) = " << clscMath::Opposite(12) << endl;
    cout << "Half(25) = " << clscMath::Half(25.0f) << endl;

    // Ceil, Floor, Round
    cout << "\n-- Ceil / Floor / Round --" << endl;
    cout << "Ceil(5.2) = " << clscMath::Ceil(5.2f) << endl;
    cout << "Floor(5.9) = " << clscMath::Floor(5.9f) << endl;
    cout << "Round(5.5) = " << clscMath::Round(5.5f) << endl;
    cout << "Round(-5.5) = " << clscMath::Round(-5.5f) << endl;

    // Random number
    cout << "\n-- Random Number (1-10) --" << endl;
    for (int i = 0; i < 5; i++)
        cout << clscMath::RandomIntNum(1, 10) << " ";
    cout << endl;

    cout << "\n================= End of Tests =================" << endl;
    return 0;
}
