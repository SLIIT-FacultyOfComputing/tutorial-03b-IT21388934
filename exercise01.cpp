#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  cout<<setw(5)<<"No";
  cout<<setw(12)<<"Name";
  cout<<setw(10)<<"Mark"<<endl;

	for (int r=0; r<5;r++){
		cout<<setw(5)<<setprecision(1)<<r+1;
		cout<<setw(12)<<names[r];
		cout<<setw(10)<<setiosflags (ios::fixed)<<marks[r]<<endl;
	}
}