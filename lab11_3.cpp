#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    double sum;
    int i = 0;
    double insqrt;

    ifstream source("score.txt");
    string textline;

    while (getline(source,textline))
    {   
        sum += stod(textline);
        insqrt += pow(stod(textline),2);
        i++;
        // cout << textline << "\n";
    }
     
    cout << "Number of data = "<< i << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/i << "\n";
    cout << "Standard deviation = "<< sqrt((insqrt/i)-pow((sum/i),2));

    return 0;
}