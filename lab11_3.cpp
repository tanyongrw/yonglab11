#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
    double sum,sum1;
    int N;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
    sum += atof(textline.c_str());
    sum1 += pow(atof(textline.c_str()),2);
    
    N++;
    }

    cout << "Number of data = ";
    cout << N << "\n";
    cout << setprecision(3);
    cout << "Mean = ";
    cout << sum/N << "\n";
    cout << "Standard deviation = ";
    cout << sqrt(sum1/N-pow(sum/N,2));
    
}