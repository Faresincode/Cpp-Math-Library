# Cpp-Math-Library

🔢 CppMathLibrary is a lightweight C++ math utility class (clscMath)
that provides a wide range of number-checking and mathematical helper
functions.
It’s designed as a header-only library for quick integration into any
C++ project.

------------------------------------------------------------------------

✨ Features

-   ✅ Check if a number is positive, negative, or zero
-   ✅ Verify Numbers
-   ✅ Detect odd/even, prime, palindrome, perfect numbers
-   ✅ Random number generation within a range
-   ✅ Reverse numbers, sum digits, get fractional part
-   ✅ Convert numbers to text representation
-   ✅ Math utilities: ABS, Opposite, Half, Ceil, Floor, Round, Sqrt
-   ✅ Basic operations: Sum, Subtract, Multiply, Divide, Modulo
-   ✅ Support for multiple types: int, short, float, double, long long

------------------------------------------------------------------------

📂 Project Structure

    CppMathLibrary/
    │
    ├── clscMath.h     # Core math utility class
    ├── main.cpp       # Example usage & test program
    ├── README.md      # Project documentation
    ├── test-output    # the output of the main.cpp test case
    ├── .gitignore     # Ignore compiled binaries
    └── LICENSE        # MIT License

------------------------------------------------------------------------

🚀 Getting Started

1. Clone the Repository

    git clone https://github.com/Faresincode/Cpp-Math-Library.git
    cd CppMathLibrary

2. Compile the Example

    g++ main.cpp -o test
    ./test

------------------------------------------------------------------------

🖥️ Example Usage

    #include "clscMath.h"
    #include <iostream>
    using namespace std;

    int main() {
        cout << "Is 7 prime? " << clscMath::IsPrime(7) << endl;    // 1 (true)
        cout << "Reverse of 1234: " << clscMath::ReverseNum(1234) << endl; // 4321
        cout << "Sum of digits (1234): " << clscMath::SumDigits(1234) << endl; // 10
        cout << "Number to text (456): " << clscMath::NumberToText(456) << endl; // "Four Hundreds Fifty Six"
        return 0;
    }

------------------------------------------------------------------------

📊 Example Output

    Is 7 prime? 1
    Reverse of 1234: 4321
    Sum of digits (1234): 10
    Number to text (456): Four Hundreds Fifty Six

------------------------------------------------------------------------

⚙️ Functions Overview

Some available methods: - IsPositive(int), IsNegative(int),
IsZeroInt(int) - IsOdd(int), IsEven(int) - IsPrime(int),
IsPalindrome(int), IsPerfect(int) - RandomIntNum(int from, int to) -
ReverseNum(int), SumDigits(int) - NumberToText(int) - ABS(value),
Opposite(value), Half(value) - Ceil(float), Floor(float), Round(float)

------------------------------------------------------------------------

📜 License

This project is licensed under the MIT License – feel free to use it in
your own projects.

------------------------------------------------------------------------

🤝 Contributing

Contributions are welcome!
- Fork the repo
- Create a new branch (feature/your-feature)
- Commit changes
- Submit a Pull Request

------------------------------------------------------------------------

⭐ Support

If you find this project useful, please give it a ⭐ on GitHub – it
helps others discover it!
