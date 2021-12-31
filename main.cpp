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
int imGlobal = 0;
const double PI = 3.142;
int main(int argc, char** argv) {
    cout << "hello wrold" << endl; // used name space above no std:: needed
    std::cout << "Hello, World!" << std::endl;
    bool married = true;
    char myGrade = 'A';
    cout << "Min unsigned short int " <<
         numeric_limits<unsigned short int>::min()
         << endl;

    cout << "Max unsigned short int " <<
         numeric_limits<unsigned short int>::max()
         << endl;
    cout << "Min short int " <<
         numeric_limits<short int>::min()
         << endl;

    cout << "Max short int " <<
         numeric_limits<short int>::max()
         << endl;

    cout << "Min  int " <<
         numeric_limits<int>::min()
         << endl;

    cout << "max int " <<
         numeric_limits< int>::max()
         << endl;

    cout << "Min long int " <<
         numeric_limits<long int>::min()
         << endl;

    cout << "Max long int " <<
         numeric_limits<long int>::max()
         << endl;

    // float

    cout << "Min float " <<
         numeric_limits<float>::min()
         << endl;

    cout << "Max float" <<
         numeric_limits<float>::max()
         << endl;
    cout << "Min double " <<
         numeric_limits<double>::min()
         << endl;

    cout << "Max double" <<
         numeric_limits<double>::max()
         << endl;

    cout << "Min long double  " <<
         numeric_limits<long double>::min()
         << endl;

    cout << "Max long double " <<
         numeric_limits<long double>::max()
         << endl;

    // float are only precise up to 6 digits
    float f1 = 1.1111111;
    float f2 = 1.1111111;
    printf("Sum = %.7f\n", (f1 + f2));// in the 7th decimal place we los precision
    // double are precise up until 16
    auto whatAmI = true; // automaticaly assign a value to this variable
    cout << "int Byte: " << sizeof(int) << endl;
    // char, decimal, 5 spaces, decimal, float, string
    printf("%c %d %5d %.3f %s\n", 'A',
           10, 5, 3.1234, "Hi");

    string q1 = "Enter a Number: ";
    string num1, num2;
    cout << q1;
    cin >> num1;
    cout << "Enter Another Number; ";
    cin >> num2;
    int nNum1 = stoi(num1);
    int nNum2 = stoi(num2); // convert string to int
    // use stof for string to float
    printf("%d + %d = %d\n", nNum1, nNum2,
           (nNum1 + nNum2));

    printf("%d %% %d = %d\n", nNum1, nNum2,
           (nNum1 % nNum2));

    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true : false;
    // to make output boolean instead of 1 or 0
    cout.setf(ios::boolalpha);
    cout << "Can I vote: " << canIVote << endl;

    // arrays
    int arrNum[10] = {1};
    int arrNums2[] = {1, 2, 3};
    int arrNums3[5] = {8, 9};
    cout << "1st Value " << arrNums3[0] << endl;
    // number of layers, coloumns, rows
    int arrNums4[2][2][2] = {{{1, 2}, {3, 4}},
                             {{5, 6}, {7, 8}}};
    cout << arrNums4[1][1][1] << endl;

    // use vectors, when u don not know size
    vector<int> vNums(2);
    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(2); // put at end of v
    cout << "Vector size: " << vNums.size() << endl;

    vector<string> words;
    stringstream ss("Some Random Words");
    string word;
    while (getline(ss, word, ' '))
    {
        words.push_back(word);
    }
    for(auto i = 0; i < words.size(); ++i)
    {
        cout << words[i] << endl;
    }

    // shorter form for loop
    int arr3[] = {1, 2, 3};
    for (auto x: arr3) cout << x << endl;

    // use random number from ctime
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    do
    {
        cout << "Guess the Numbeer : ";
        cin >> guess;
        if (guess > secretNum) cout << "Too Big\n";
        if (guess < secretNum) cout << "Too Small\n";
    } while (secretNum != guess);
    cout << " You Guessed it" << endl;
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

class DepthFirstSearchAdjacencyListIterative
{
    static class Edge
    {
        int from, to, cost;
    public: Edge(int from, int to, int cost)
        {
            this->from = from;
            this-> to = to;
            this-> cost =  cost;
        };
    };

    static int dfs(vector<int> graph, int start, int n)
    {
        int count = 0;
    }
};