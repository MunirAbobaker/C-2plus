#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;
int main(int argc, char** argv) {
    // strings
    string str1 = "I am a string";
    cout << "1st: "<< str1[0] << endl;
    cout << "Last: " << str1.back() << endl;
    cout << "Length: " << str1.length() << endl;
    string str2 = str1;
    string str3(str2, 4); // copy string ab 4 char
    string str4 = str1 + "and your not";
    str4.append("!");
    // earse from the 12th position to the end
    str4.erase(12, str4.length() -1 );
    cout << "New String " << str4 << endl;
    if(str4.find("string") != string::npos)
        cout << "String Index: " <<
             str4.find("string") << endl;



    return 0;
}
