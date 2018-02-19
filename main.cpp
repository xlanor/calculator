/* Calculates whatever the user wants. */

#include <iostream>
#include <string>

/* Constants */
const int NUM_CHOICES = 1; // Number of choices for menuChoices
const std::string MENU_CHOICES[NUM_CHOICES] = {"Factorial"};
const double PI = 3.14159; // Pi to the first 5 decimal places

/* Prototypes */
void displayMenu();
int getChoice(int, int);
int calcFactorial(int);

int main()
{
    int num,
        result;

    std::cout << "Welcome to the calculator!\n\n";
    displayMenu();
    
    switch(getChoice(1, NUM_CHOICES))
    {
        case 1: // Factorial
            std::cout << "Please enter a non-negative integer: ";
            std::cin >> num;
            
            result = calcFactorial(num);
            if (result == -1)
                std::cout << "Invalid input. Please restart the program to recalculate.";
            else
                std::cout << num << "! = " << result;
            break;
        default:
            std::cout << "Goodbye.\n";
            break;
    }

    std::cout << std::endl;

    return 0;
}

/* Displays the user menu */
void displayMenu()
{
    std::cout << "Choose from the following items - \n";

    for (int i = 0; i < NUM_CHOICES; i++)
    {
        std::cout << (i + 1) << ". " << MENU_CHOICES[i] << std::endl;
    }

    std::cout << std::endl;
}

/* Asks user to input a number between min and validates it */
int getChoice(int min, int max)
{
    int choice;
    
    std::cout << "Please select a number between " << min << " and " << max << ": ";
    std::cin >> choice;
    
    while (choice < min || choice > max)
    {
        std::cout << "Incorrect input. Please enter a number between " << min << " and " << max;
        std::cin >> choice;
    }
    
    std::cout << std::endl;

    return choice;
}


/* Calculates the factorial of the given number */
int calcFactorial(int num)
{
    double result = 1.0;

    /* Validate num */
    if (num == 0) // 0! = 1
	return 1;
    else if (num < 0)
	return -1; // Invalid input.
    
    /* Evaluate factorial */
    for (int i = num; i > 1; i--) // num! = num(num-1) * ... * 2 * 1
        result *= static_cast<double>(i);
    
    /* Return result */
    return result;
}

// TODO: double factorial
