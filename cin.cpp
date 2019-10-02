//cin practice

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    int age;
    double weight;

    cout << "Enter first, last, age, weight seperated by spaces "
    << endl;

    cin >> firstName >> lastName;
    cin >> age >> weight;

    cout << "Name: " << firstName << " "
        << lastName << endl;
    cout << "Age: " << age << endl;

    cout << "Weight: " << weight << endl;

    return 0;
}
