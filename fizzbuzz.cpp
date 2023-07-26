#include <iostream>

int main() {

// Variable for number user picks

int i = 0;

bool validInput = false;

    // Validate the user input
    while (!validInput) {
        // Ask the user to pick a number which is assigned to variable i
        std::cout << "Pick a number: ";
        std::string input;
        std::cin >> input;

        // Try to convert the input string to an integer
        try {
            i = std::stoi(input);
            validInput = true;
        }     

        // Catch exceptions and give the user a retry prompt
        catch (const std::exception& e) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
        }
    }

/* Print numbers upto user chosen number substituting:
- fizz for multiples of 3 
- buzz for multiples of 5 
- fizzbuzz for multiples of both 3 and 5 */

for (int l = 0; l < i; l++) {
    
    if ((l + 1) % 3 == 0 && (l + 1) % 5 == 0) {

        std::cout << "fizzbuzz\n";

    }

    else if ( (l + 1) % 3 == 0) {

        std::cout << "fizz\n";

    }

    else if ((l + 1) % 5 == 0) {

        std::cout << "buzz\n";

    }

    else {

        std::cout << l + 1 << "\n";

    }
    
}


}