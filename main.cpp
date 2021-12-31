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
    cout << "String2 : " << str2 << endl;
    string str3(str2, 4); // copy string ab 4 char
    cout << "String3 : " << str3 << endl;
    string str4 = str1 + " and your not";
    cout << "String4 : " << str4 << endl;
    str4.append("!");
    cout << "String4 : " << str4 << endl;
    // earse from the 12th position to the end
    str4.erase(12, str4.length() -1 );
    cout << "New String " << str4 << endl;
    str4.append("g");
    cout << "String4 : " << str4 << endl;
    // npos used instead of using -1, which means not found
    if(str4.find("string") != string::npos)
        cout << "String Index: " <<
             str4.find("string") << endl;
    cout << "Substring: " << str4.substr(6,6) << endl;
    string strNum = to_string(1+2);
    cout << "I am a string: " << strNum << endl;

    // chars, with single quote
    char letterZ = 'Z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number " << isalnum(letterZ) << endl;
    cout << "Is z a letter or number " << isalpha(letterZ) << endl;
    cout << "Is 5 or number " << isdigit(num5) << endl;
    cout << "Is space a space " << isspace(aSpace) << endl;




    return 0;
}
