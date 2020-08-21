/*****************************************
 * #include <cctype>
 * Testing Characters Function.
 * 
 * isalpha(c) - True if c is a letter.
 * isalnum(c) - True if c is a letter or a digit.
 * isdigit(c) - True if c is a digit.
 * islower(c) - True if c is a lowercase letter.
 * isupper(c) - True if c is a uppercase letter.
 * isprint(c) - True if c is a printable character.
 * ispunct(c) - True if c is a punctuation character.
 * isspace(c) - True if c is a whitespace.
 * 
 * Converting Characters Function.
 * 
 * tolower(c) - returns lowercase of c.
 * toupper(c) - returns uppercase of c. If it can't be converted then that same character is returned.
 * 
 * 
 * #include <cstring>
 * strcpy(str, "hello ")  - to copy.
 * strcat(str, "there ")  - to concatenate.
 * strlen(str)            - to get length of string.
 * strcmp(str, "another") - to compare two strings.
 ****************************************/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];
    // cout << first_name << ", " << last_name << ", " << full_name << ", " << temp << endl; //Garbage value

    // cout << "Enter first name - ";
    // cin >> first_name;
    // cout << "Enter last name - ";
    // cin >> last_name;
    // cout << "Hello " << first_name << " your name has " << strlen(first_name) << " characters" << endl;
    // cout << "And your last name is " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // strcpy(full_name, first_name); // copy first_name to full_name.
    // strcat(full_name, " ");        // adding both strings
    // strcat(full_name, last_name);
    // cout << "Your Full name is " << full_name << endl;

    // cout << "Enter full name - ";
    // cin >> full_name;

    // cout << "Your full name is " << full_name<< endl;

    cout << "Enter full name - ";
    cin.getline(full_name, 50);

    cout << "Your full name is " << full_name << endl;

    cout << "-----------------------------" << endl;
    strcpy(temp, full_name);
    if (!strcmp(full_name, temp))
        cout << temp << " and " << full_name << " are same." << endl;
    else
        cout << temp << " and " << full_name << " are not same." << endl;

    cout << "-----------------------------" << endl;
    for (size_t i{0}; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    cout << "-----------------------------" << endl;
    if (!strcmp(full_name, temp))
        cout << temp << " and " << full_name << " are same." << endl;
    else
        cout << temp << " and " << full_name << " are not same." << endl;

    cout << "-----------------------------" << endl;
    cout << "Results of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Results of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
    cout << endl;
    return 0;
}