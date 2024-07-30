/**
 *FUZZ-BUZZ-ZAP.cpp
 *
 * Author: Jamal Hamid (c3508783)
 * Date: 30 07 2024
 *
 * This file implements is a Fuzz Buzz Zap program that if any number that is divisiable 
 * by 3 (Fizz), 5(Buzz), or 7(Zap) is then displayed for the output instead of the number
 */

//Included statement(s)
#include <iostream>
using namespace std; 

// Driver code 
int main() 
{ 
    // Intizling the varible
    int n;
    // Defining the limt for output
    std::cout << "Enter the limit: ";
    std::cin >> n;

    // Loop through numbers from 1 to the user-defined limit
	for (int i = 1; i <= n; ++i) { 
		if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0) { 
            // Add "Fizz Buzz Zap" to the result vector 
            cout << ("Fizz Buzz Zap"); 
        }
        else if  (i % 3 == 0 && i % 5 == 0) { 
            // Add "Fizz Buzz" to the result vector 
            cout << ("Fizz Buzz"); 
        }
        else if (i % 5 == 0 && i % 7 == 0) { 
            // Add "Buzz Zap" to the result vector 
            cout << ("Buzz Zap"); 
        }
        else if (i % 3 == 0 && i % 7 == 0) { 
            // Add "Buzz Zapp" to the result vector 
            cout << ("Buzz Zap"); 
        }
        else if (i % 3 == 0) { 
            // Add "Fizz" to the result vector 
            cout << ("Fizz"); 
        }
        else if (i % 5 == 0) { 
            // Add "Buzz" to the result vector 
            cout << ("Buzz"); 
        }
        else if (i % 7 == 0) { 
            // Add "Zap" to the result vector 
            cout << ("Zap");  
        }
		else {
            std::cout << i;
        }
        std::cout << std::endl;
	} 

	// Return the result vector 
	return 0; 
}

