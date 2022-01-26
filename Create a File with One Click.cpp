#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create a text file
    ofstream MyWriteFile("createdfile.txt");

    // Write to the file
    MyWriteFile << "Hi Welcome! This is the file created by running the program. Thanks and bye :)";

    // Close the file
    MyWriteFile.close();

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("createdfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }

    // Close the file
    MyReadFile.close();
}