#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>


using namespace std;

int main(){

	double total = 0;
	ifstream source;
	source.open("score.txt");
	string score;
	double N = 0;
	double Ex2 = 0;
	double m = 0;
	

	
	while(getline(source,score)){
		total += atof(score.c_str());
		N++;
		Ex2 += pow(atof(score.c_str()),2);
	}
	m = total / N;
    
	cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << m << endl;
    cout << "Standard deviation = " << sqrt(((1 / N) * Ex2) - pow(m,2));
}
