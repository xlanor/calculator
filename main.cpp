/* Calculates whatever the user wants. */

#include <iostream>

/* Prototypes */
int calcFactorial(int);

int main()
{
    int num,
        result;

    std::cout << "Please enter an non-negative integer: ";
    std::cin >> num;
    
    result = calcFactorial(num);

    if (result == -1)
        std::cout << "Invalid input. Please restart the program to recalculate.\n";
    else
        std::cout << "The factorial of " << num << " is " << result << std::endl;    
    return 0;
}

int calcFactorial(int num)
{
    int result = 1;

    /* Validate num */
    if (num == 0) // 0! = 1
	return 1;
    else if (num < 0)
	return -1; // Invalid input.
    
    /* Evaluate factorial */
    for (int i = num; i > 1; i--) // num! = num(num-1) * ... * 2 * 1
        result *= i;
    
    /* Return result */
    return result;
}

// TODO: double factorial
