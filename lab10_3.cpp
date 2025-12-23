//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include <iomanip>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int count = 0;
    double sum = 0;
    double sum_of_square=0;
    double x ;
    

    string score;
    ifstream source("score.txt");

    while(getline(source,score)){
        x = atof(score.c_str());
        sum += x;
        sum_of_square += x*x;
        count++;
    }
    double mean = sum/count;
    double SD = sqrt((sum_of_square/count)-pow(mean,2));

    cout<<"Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout<<"Mean = "<<sum/count<<"\n";
    cout << "Standard deviation = "<< SD;
}