#include <iostream>
using namespace std;

int main() {
    int numOfSub;
    int totalMarks;

    cout << "Enter number of subjects: ";
    cin >> numOfSub;

    int i = 1;
    double sum = 0;

    while (i <= numOfSub) {
        int marks;
        cout << "Enter marks of subject " << i << ": ";
        cin >> marks;
        sum = sum + marks;
        i++;
    }

    cout << "Enter total marks: ";
    cin >> totalMarks;

    double percent = (sum/totalMarks) * 100;

    double cgpa = percent / 9.5;

    cout << "Your cgpa is " << cgpa << endl;

    return 0;
}