
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


================= clscMath Test Program =================

-- Positivity Check --
5 is positive? 1
-3 is negative? 1
0 is zero? 1

-- Odd / Even --
7 is odd? 1
10 is even? 1

-- Prime Check --
7 is prime? 1
12 is prime? 0

-- Palindrome Check --
121 is palindrome? 1
123 is palindrome? 0

-- Perfect Number Check --
6 is perfect? 1
10 is perfect? 0

-- Reverse Number --
Reverse of 1234: 4321

-- Sum of Digits --
Sum of digits of 1234: 10

-- Number to Text --
1234 in words: One Thousands Two Hundreds Thirty Four

-- Basic Math Operations --
Sum(5, 10, 15) = 30
Subtract(50, 10, 5) = 35
Multiplicate(2, 3, 4) = 24
Divide(100, 2, 5) = 2
Mode2Num(17, 5) = 2

-- Utility Functions --
ABS(-12) = 12
Opposite(12) = -12
Half(25) = 12.5

-- Ceil / Floor / Round --
Ceil(5.2) = 6
Floor(5.9) = 5
Round(5.5) = 6
Round(-5.5) = -6

-- Random Number (1-10) --
4 9 2 7 10 

================= End of Tests =================




