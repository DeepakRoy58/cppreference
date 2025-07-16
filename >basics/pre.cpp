// Preprocessor directive to include the standard input-output stream library
#include <iostream>   

// Macro definition using the preprocessor
#define PI 3.14159    

// Use the standard namespace to avoid writing std:: repeatedly
using namespace std;  

// Main function - execution starts here
int main() {

    // Declare a variable to store the radius
    float radius;

    // Ask the user to enter the radius of a circle
    cout << "Enter the radius of the circle: ";
    
    // Take user input and store it in the radius variable
    cin >> radius;

    // Calculate the area using the macro PI
    float area = PI * radius * radius;

    // Display the calculated area
    cout << "The area of the circle is: " << area << endl;

    // Return 0 indicates the program ended successfully
    return 0;
}
