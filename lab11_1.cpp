#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

	int i = 1;
	char grade;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if (grade == 'A') {
				count[0]++;
				i++;
			}else if(grade == 'B') {
				count[1]++;
				i++;
			}else if(grade == 'C') {
				count[2]++;
				i++;
			}else if(grade == 'D') {
				count[3]++;
				i++;
			}else if(grade == 'F') {
				count[4]++;
				i++;
			}else if(grade == '0'){
				i--;
				break;
			}else cout << "Wrong input. Please input again.\n";
		
	}while(1);
	
	
	cout << "In total " << i << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<"\n";	
	
	return 0;
}