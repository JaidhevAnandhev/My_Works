#include<iostream>
#include<fstream>  //to make use of system defined functions for file handling

using namespace std;

int main()
{
    //declaration of a string variable
    string str;

    // creating a variable of type ifstream to make use of file handling commands and open a file in read mode.
    ifstream in;

    //open is a system defined method to open and read from the mentioned file
    in.open("Hello.txt");

    //Make sure that the file is within the same folder as that of this program otherwise, will have to provide the entire path to the file to read from

    cout << "Reading content from the file and it's contents are: \n\n";

    // printing the data word by word
    while(in>>str)
        cout << str << " ";
    
    cout << "\n\n\n";

    // close the file opened before.
    in.close();

    return 0;
}
