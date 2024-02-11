//#######Basics of C++########
//Program to print "Hello, world!" on the screen
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}



//Write a program to take a number from the user and print on the screen
#include <iostream>
using namespace std;

int main() {
    int luckyNumber = 5;
    char section = 'A';
    float cgpa = 3.5;
    
    cout << "Lucky Number = " << luckyNumber << endl;
    cout << "Section = " << section << endl;
    cout << "CGPA = " << cgpa << endl;
    
    return 0;
}



//Write a program to take a number from the user and print on the screen
#include <iostream>
using namespace std;

int main() {
    int luckyNumber;
    
    cout << "Enter a Number: ";
    cin >> luckyNumber;
    
    cout << "Your lucky number is " << luckyNumber << endl;
    
    return 0;
}


//Program to display the table of a number entered by the user
#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompting user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Displaying the table of the entered number
    cout << "Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}



//Program to display the ASCII value of a character entered by the user
#include <iostream>
using namespace std;

int main() {
    char ch;

    // Prompting user to enter a character
    cout << "Enter a character: ";
    cin >> ch;

    // Displaying the ASCII value of the entered character
    cout << "ASCII value of " << ch << " is: " << int(ch) << endl;

    return 0;
}


//#######Decision Control Instruction & Case Control Instruction######
//Program to find whether the area of a circle is greater than its perimeter
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area, perimeter;

    // Prompting user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculating area and perimeter
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;
    
    //Print Area and Perimeter of Circle
    cout<< "Area of Circle is: "<<area<<endl;
    cout<< "Perimeter of Circle is : "<<perimeter<<endl;
    
    // Comparing area and perimeter
    if (area > perimeter) {
        cout << "The area of the circle is greater than its perimeter." << endl;
    } else {
        cout << "The perimeter of the circle is greater than its area." << endl;
    }

    return 0;
}


//Program to calculate the amount to be paid after applying discount at a departmental store
#include <iostream>
using namespace std;

int main() {
    double totalBill, discountRate = 0.0, discountedAmount;
    char membershipCard;

    // Prompting user to enter total bill and whether they have a membership card
    cout << "Enter total bill amount: ";
    cin >> totalBill;
    cout << "Do you have a membership card? (Y/N): ";
    cin >> membershipCard;

    // Calculating discount based on total bill amount and membership card
    if (totalBill >= 20000) {
        discountRate = 2.5;
    } else if (totalBill >= 5000 && membershipCard == 'N') {
        discountRate = 1.5;
    }

    // Calculating discounted amount
    discountedAmount = totalBill - (totalBill * discountRate / 100);

    // Displaying the amount to be paid after discount
    cout << "Amount to be paid after applying discount: Rs. " << discountedAmount << endl;

    return 0;
}



//Program to design a simple calculator using switch statement
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Prompting user to enter two numbers and select an operator
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter '+' for addition\nEnter '-' for subtraction\nEnter '*' for multiplication\nEnter '/' for division\nEnter your choice: ";
    cin >> op;

    // Performing the selected operation
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    // Displaying the result of the operation
    cout << "Result: " << result << endl;

    return 0;
}



//##### Loop Control Instruction######
//Program to print employee IDs from 1 to 15 and skip IDs 7 and 10 using `continue` statement:
#include <iostream>
using namespace std;

int main() {
    for (int id = 1; id <= 15; ++id) {
        if (id == 7 || id == 10) {
            continue; // Skip IDs 7 and 10
        }
        cout << "Employee ID: " << id << endl;
    }
    return 0;
}


//Program to print employee IDs starting from 1 until an ID of resigned employee occurs (7 or 10) using `break` statement:
#include <iostream>
using namespace std;

int main() {
    for (int id = 1; id <= 15; ++id) {
        if (id == 7 || id == 10) {
            break; // Stop printing IDs if 7 or 10 occurs
        }
        cout << "Employee ID: " << id << endl;
    }
    return 0;
}


//Program to print odd IDs of employees from 1 to 19 using compound assignment operator:
#include <iostream>
using namespace std;

int main() {
    for (int id = 1; id <= 19; id += 2) { // Increment by 2 to get odd IDs
        cout << "Employee ID: " << id << endl;
    }
    return 0;
}



//Program to display a menu for selecting a question based on the employee's choice:
#include <iostream>
using namespace std;

int main() {
    int choice;

    // Display menu
    cout << "Menu:\n1. Print employee IDs (skip 7 and 10)\n2. Print employee IDs until resignation\n3. Print odd employee IDs\nEnter your choice (1-3): ";
    cin >> choice;

    // Execute based on user's choice
    switch (choice) {
        case 1:
            for (int id = 1; id <= 15; ++id) {
                if (id == 7 || id == 10) {
                    continue; // Skip IDs 7 and 10
                }
                cout << "Employee ID: " << id << endl;
            }
            break;
        case 2:
            for (int id = 1; id <= 15; ++id) {
                if (id == 7 || id == 10) {
                    break; // Stop printing IDs if 7 or 10 occurs
                }
                cout << "Employee ID: " << id << endl;
            }
            break;
        case 3:
            for (int id = 1; id <= 19; id += 2) { // Increment by 2 to get odd IDs
                cout << "Employee ID: " << id << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}


//#####Arrays######
//Program to manage salaries of employees in an organization:
#include <iostream>
#include <algorithm> // For min_element, max_element
using namespace std;

int main() {
    const int SIZE = 10;
    double salaries[SIZE];
    double sum = 0, average, maximum, minimum;

    // Input salaries from the account office person
    cout << "Enter the salaries of 10 employees:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter salary for employee " << i + 1 << ": ";
        cin >> salaries[i];
        sum += salaries[i];
    }

    // Calculate average, maximum, and minimum salaries
    average = sum / SIZE;
    maximum = *max_element(salaries, salaries + SIZE);
    minimum = *min_element(salaries, salaries + SIZE);

    // Display all salaries, average, maximum, minimum, and sum
    cout << "\nSalaries of all employees:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Employee " << i + 1 << ": " << salaries[i] << endl;
    }
    cout << "Average Salary: " << average << endl;
    cout << "Maximum Salary: " << maximum << endl;
    cout << "Minimum Salary: " << minimum << endl;
    cout << "Total Salary: " << sum << endl;

    return 0;
}


//Program to manipulate marks array:
#include <iostream>
#include <algorithm> // For sort
using namespace std;

int main() {
    int marks[] = {45, 60, 70, 35, 87, 90, 43, 42, 19, 49};
    const int SIZE = sizeof(marks) / sizeof(marks[0]);

    // Display original array
    cout << "Original Array:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;

    // Sort the array in ascending order
    sort(marks, marks + SIZE);
    cout << "Array in Ascending Order:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;

    // Sort the array in descending order
    cout << "Array in Descending Order:\n";
    for (int i = SIZE - 1; i >= 0; --i) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}



//######Strings#####
//Program to count characters in a conversation between two persons:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string person1, person2;
    int count1 = 0, count2 = 0;

    cout << "Person 1: ";
    getline(cin, person1);

    cout << "Person 2: ";
    getline(cin, person2);

    // Count characters for each person
    for (char ch : person1) {
        if (isalpha(ch)) // Count only alphabetic characters
            ++count1;
    }

    for (char ch : person2) {
        if (isalpha(ch)) // Count only alphabetic characters
            ++count2;
    }

    // Print the summary
    cout << "Summary:\n";
    cout << "Person 1 said " << count1 << " characters.\n";
    cout << "Person 2 said " << count2 << " characters.\n";

    return 0;
}


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[]="Life is complex: it has both real and imaginary components";
	char v[]={'a','e','i','o','u'};
	int space=0,vowels=0;
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]==' ')
		{	
			space++;
			cout<<st[i];
		}
		else
			cout<<((int)st[i])<<" ";
		for(int j=0;j<strlen(v);j++)
		{
			if(st[i]==v[j])
				vowels++;
		}
	}
	cout<<endl<<"Spaces="<<space<<endl;
	cout<<endl<<"Vowels="<<vowels<<endl;
	return 0;
}

//Program to concatenate a word with a phrase and display the concatenated string along with the size of the word:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, concatenated;

    cout << "Enter your favorite word: ";
    cin >> word;

    // Concatenate the word with the phrase
    concatenated = word + " is a good choice";

    // Print the concatenated string and size of the word
    cout << "Concatenated string: " << concatenated << endl;
    cout << "Size of the word: " << word.size() << endl;

    return 0;
}




//#####Functions#######
#include <iostream>
using namespace std;

// Function 
double Fahrenheit_to_Celsius(double fahrenheit);
double Celsius_to_Fahrenheit(double celsius);
void print_absolute_zero();

int main() {
    int choice;
    double temperature;

    // Menu
    cout << "Conversion Menu:\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "3. Print absolute zero in Celsius and Fahrenheit\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Temperature in Celsius: " << Fahrenheit_to_Celsius(temperature) << endl;
            break;
        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Fahrenheit: " << Celsius_to_Fahrenheit(temperature) << endl;
            break;
        case 3:
            print_absolute_zero();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function to convert Fahrenheit to Celsius
double Fahrenheit_to_Celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double Celsius_to_Fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to print absolute zero in Celsius and Fahrenheit
void print_absolute_zero() {
    cout << "Absolute zero in Celsius: -273.15°C" << endl;
    cout << "Absolute zero in Fahrenheit: -459.67°F" << endl;
}





//#####Pointers######
//This program iterates through the array and prints the values
// and memory addresses of cells whose value is zero.
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {34, 56, 67, 49, 0, 22, 11, 14, 0, 0};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Memory addresses of cells whose value is zero:\n";
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == 0) {
            cout << "Value: " << numbers[i] << "\tAddress: " << &numbers[i] << endl;
        }
    }

    return 0;
}


// Define the department structure
//This program defines a Department structure, initializes
// it with software department information, and then prints the values 
//and memory addresses of each field using pointers.
#include <iostream>
#include <string>
using namespace std;
struct Department {
    string name;
    int employees;
    string location;
};

int main() {
    // Initialize a department with software department information
    Department softwareDepartment = {"Software", 50, "Building A"};

    // Create a pointer to the department
    Department* departmentPtr = &softwareDepartment;

    // Print values and addresses using pointers
    cout << "Department Information:\n";
    cout << "Name: " << departmentPtr->name << "\tAddress: " << &departmentPtr->name << endl;
    cout << "Employees: " << departmentPtr->employees << "\tAddress: " << &departmentPtr->employees << endl;
    cout << "Location: " << departmentPtr->location << "\tAddress: " << &departmentPtr->location << endl;

    return 0;
}


//#######File System#####
//This program first reads the words from the file words.txt into a vector. 
//Then, it prompts the user to enter a new word. If the entered word is found in the vector,
// it prints the position of the word. Otherwise, it adds the word to the file and
// prints a message confirming the addition.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Function to search for a word in the file
int searchWord(const string& word, const vector<string>& words) {
    for (int i = 0; i < words.size(); ++i) {
        if (words[i] == word) {
            return i + 1; // Position is 1-based
        }
    }
    return -1; // Return -1 if word is not found
}

// Function to add a new word to the file
void addWord(const string& word, ofstream& file) {
    file << word << endl;
}

int main() {
    ifstream inFile("words.txt");
    ofstream outFile("words.txt", ios::app); // Append mode to add new words at the end of the file

    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    vector<string> words;
    string word;

    // Read words from file and store them in a vector
    while (inFile >> word) {
        words.push_back(word);
    }

    // Ask user to enter a new word
    cout << "Enter a new word: ";
    cin >> word;

    // Search for the word in the vector
    int position = searchWord(word, words);

    if (position != -1) {
        cout << "The word \"" << word << "\" is already in the file at position " << position << "." << endl;
    } else {
        // Add the word to the file
        addWord(word, outFile);
        cout << "The word \"" << word << "\" has been added to the file." << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}


//######Advanced Concepts of Functions ######
//A shopkeeper have two items for sale. The item 1 price is Rs. 2345 and item 2 price is Rs. 
//2350. The trend of sale for the item 1 was better than item 2 just for Rs. 5. So he decided to 
//switch the prices and sale item 1 with Rs, 2350 and and item 2 with 2345. Help him to 
//change the price through a function that can change the values for all functions.

#include <iostream>
using namespace std;

// Function to switch the prices of the items
void switchPrices(int& price1, int& price2) {
    int temp = price1;
    price1 = price2;
    price2 = temp;
}

int main() {
    int item1Price = 2345;
    int item2Price = 2350;

    // Switch the prices
    switchPrices(item1Price, item2Price);

    cout << "After switching the prices:\n";
    cout << "Item 1 price: Rs. " << item1Price << endl;
    cout << "Item 2 price: Rs. " << item2Price << endl;

    return 0;
}



//Factorial
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    // Calculate and display factorial
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
