#include <iostream>

using namespace std;

int main()
{
    size_t
        f = 0,  // The current Fibonacci number, calc by program
        p = 0;  // Previous Fibonacci number
        
        // Intro
        cout << "The Fibonacci Sequence: " << endl;

    // Initializ f
    f = 1;      // First numnber in the Fib. Sequence

    // Repeatedly display f and increment it

    for(int n = 1; n <= 100; ++n)
    {
        cout << "a[" << n << "] is " << f << endl;

        if (n == 1)
            f = 1;      // Seoncd num in Fib. Sequence
        else 
            f = f + p;   // Next num in Fib. Sequence
        p = f - p;       // Remember previous term
    }

    return 0;
}
