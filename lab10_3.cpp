#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0 ;
    float sum = 0 ;
    float sum_sq = 0 ;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += stof(textline);
        sum_sq += pow(stof(textline),2) ;
        count++ ;
    }
    double mean ;
    mean = sum/count ;
    double sd ;
    sd = sqrt((sum_sq/count)-pow(mean,2)) ;


    cout << "Number of data = " << count << endl ;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd ;
}