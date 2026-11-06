    
#include <iostream>
using namespace std;

int Arr[5];

int sumPositive = 0;
int sumNegative = 0;
int sum = 0;

int positiveCount = 0;
int negativeCount = 0;
int zeroCount = 0;

double average = 0;

// Function for positive numbers
int Positive(int a) {
    return sumPositive += a;
}

// Function for negative numbers
int Negative(int b) {
    return sumNegative += b;
}

// Function to display results
void DisplayResults() {

    cout << "\n----- RESULTS -----" << endl;

    cout << "Number of positive values = "
         << positiveCount << endl;

    cout << "Number of negative values = "
         << negativeCount << endl;

    cout << "Number of zero values = "
         << zeroCount << endl;

    cout << "Sum of positive numbers = "
         << sumPositive << endl;

    cout << "Sum of negative numbers = "
         << sumNegative << endl;

    cout << "Total sum = " << sum << endl;

    cout << "Average = " << average << endl;
}

int main() {

    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; i++) {

        cin >> Arr[i];

        if (Arr[i] > 0) {
            Positive(Arr[i]);
            positiveCount++;
        }

        else if (Arr[i] < 0) {
            Negative(Arr[i]);
            negativeCount++;
        }

        else {
            zeroCount++;
        }

        sum += Arr[i];
    }

    average = sum / 5.0;

    DisplayResults();

    return 0;
}

    