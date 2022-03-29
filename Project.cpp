#include <iostream>
using namespace std;

int main()
{

    float age, h, w;
    cout << "Enter your age" << endl;
    cin >> age;

    cout << "Enter your height" << endl;
    cin >> h;

    cout << "Enter your weight" << endl;
    cin >> w;

    float bmi;
    bmi = (w) / (h * h);
    cout << "Your BMI is : " << bmi << endl;
    if (bmi > 25)
        cout << "You are Overweight";
    else if (bmi < 25 && bmi > 18.5)
        cout << "You are Optimally Weighted";
    else

        cout << "You are Underweight";
    return 0;
}
