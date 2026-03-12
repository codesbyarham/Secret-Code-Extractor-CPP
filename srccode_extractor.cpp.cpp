#include <iostream>
#include <fstream>
using namespace std;

// Function to extract lowercase letters and digits from input file
void extractCode()
{
    ifstream inputFile("secretData.txt");
    ofstream outputFile("codeDetected.txt");
    
    // Check if files opened successfully
    if (!inputFile || !outputFile)
    {
        cout << "File error" << endl;
        return;
    }
    
    char ch;
    // Read each character from input file
    while (inputFile.get(ch))
    {
        // Check if it's a lowercase letter (a-z) or digit (0-9)
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            outputFile << ch;  // Write to output file
            cout << ch;         // Display on console
        }
    }
    
    // Close files
    inputFile.close();
    outputFile.close();
}

int main()
{
    extractCode();
    return 0;
}