#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declaration and Assignment.
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};       // Apple
    string s6{s1, 0, 3}; // App
    string s7(10, 'X');  // XXXXXXXXXX    Is is contructor style initialisation.

    // cout << s0 << endl;          // Empty string.
    // cout << s0.length() << endl; // 0

    // Initialisation

    // cout << "Initialisation"
    //      << "\n---------------------------" << endl;
    // cout << "s1 is initialized to " << s1 << endl;
    // cout << "s2 is initialized to " << s2 << endl;
    // cout << "s3 is initialized to " << s3 << endl;
    // cout << "s4 is initialized to " << s4 << endl;
    // cout << "s5 is initialized to " << s5 << endl;
    // cout << "s6 is initialized to " << s6 << endl;
    // cout << "s7 is initialized to " << s7 << endl;

    // Comparision

    // cout << "\nComparison"
    //      << "\n---------------------------" << endl;
    // cout << boolalpha;
    // cout << s1 << " == " << s5 << ": " << (s1 == s5) << "\t" << endl;
    // cout << s1 << " == " << s2 << ": " << (s1 == s2) << "\t" << endl;
    // cout << s1 << " != " << s2 << ": " << (s1 != s2) << "\t" << endl;
    // cout << s1 << " < " << s2 << ": " << (s1 < s2) << "\t" << endl;
    // cout << s2 << " > " << s1 << ": " << (s2 > s1) << "\t" << endl;
    // cout << s4 << " < " << s5 << ": " << (s4 < s5) << "\t" << endl;
    // cout << s1 << " == "
    //      << "Apple"
    //      << ": " << (s1 == "Apple") << "\t" << endl;

    //Concatenation

    // s3 = "Watermelon";
    // cout << "Concatenation"
    //      << "\n---------------------------" << endl;
    // s3 = s5 + " and " + s2 + " juice.";
    // cout << "s3 is now " << s3 << endl;
    // s3 = "name" + "and" + s5;

    // Looping

    // cout << "Looping"
    //      << "\n---------------------------" << endl;
    // s1 = "Apple";
    // for (size_t i{0}; i < s1.length(); i++)
    //     cout << s1.at(i) << endl;
    // cout << endl;
    // for (char c : s1)
    //     cout << c << endl;

    // Substring

    // cout << "Substring"
    //      << "\n---------------------------" << endl;
    // s1 = "This is a test";
    // cout << s1.substr(0, 4) << endl;    // Starts at 0 and takes 4 strings.
    // cout << s1.substr(5, 2) << endl;
    // cout << s1.substr(10, 4) << endl;

    // Erasing

    // cout << "Erase"
    //      << "\n---------------------------" << endl;
    // s1 = "This is a test";
    // s1.erase(0, 5);
    // cout << "s1 is now: " << s1 << endl;

    // Getline

    // cout << "Getline"
    //      << "\n---------------------------" << endl;
    // string full_name;
    // cout << "Enter the full name: ";
    // getline(cin, full_name);
    // cout << "Your full name is: " << full_name << endl;

    // Find
    cout << "Find"
         << "\n---------------------------" << endl;

    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find: ";
    cin >> word;

    int position = s1.find(word);

    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry " << word << " not found." << endl;

    cout
        << endl;
    return 0;
}