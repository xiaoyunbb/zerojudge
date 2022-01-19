#include <iostream>
#include <string>
using namespace std;

int Rome2I(string rome){
	int num = 0;
	for(int i = 0; i < rome.length(); i++){
		if(rome[i] == 'M') num += 1000;
		else if(rome[i] == 'C' && rome[i + 1] == 'M'){
			num += 900;
			i++;
		}
		else if(rome[i] == 'D') num += 500;
		else if(rome[i] == 'C' && rome[i + 1] == 'D'){
			num += 400;
			i++;
		}
		else if(rome[i] == 'C') num += 100;
		else if(rome[i] == 'X' && rome[i + 1] == 'C'){
			num += 90;
			i++;
		}
		else if(rome[i] == 'L') num += 50;
		else if(rome[i] == 'X' && rome[i + 1] == 'L'){
			num += 40;
			i++;
		}
		else if(rome[i] == 'X') num += 10;
		else if(rome[i] == 'I' && rome[i + 1] == 'X'){
			num += 9;
			i++;
		}
		else if(rome[i] == 'V') num += 5;
		else if(rome[i] == 'I' && rome[i + 1] == 'V'){
			num += 4;
			i++;
		}
		else if(rome[i] == 'I') num += 1;
	}
	return num;
}

string I2Rome(int n){
	string rome;
	if(n == 0){
		return "ZERO";
	}
	while(n >= 1000){
		n -= 1000;
		rome += "M";
	}
	while(n >= 900){
		n -= 900;
		rome += "CM";
	}
	while(n >= 500){
		n -= 500;
		rome += "D";
	}
	while(n >= 400){
		n -= 400;
		rome += "CD";
	}
	while(n >= 100){
		n -= 100;
		rome += "C";
	}
	while(n >= 90){
		n -= 90;
		rome += "XC";
	}
	while(n >= 50){
		n -= 50;
		rome += "L";
	}
	while(n >= 40){
		n -= 40;
		rome += "XL";
	}
	while(n >= 10){
		n -= 10;
		rome += "X";
	}
	while(n >= 9){
		n -= 9;
		rome += "IX";
	}
	while(n >= 5){
		n -= 5;
		rome += "V";
	}
	while(n >= 4){
		n -= 4;
		rome += "IV";
	}
	while(n >= 1){
		n -= 1;
		rome += "I";
	}
	
	return rome;
}


int main(){
	string a, b;
	int n;
	while(cin >> a >> b){
		if(a == "#") {return 0;}
		cout << Rome2I(a) << " " << Rome2I(b) << endl;

		n = Rome2I(a) - Rome2I(b);
		if(n < 0) n *= (-1);
		cout << I2Rome(n) << endl;
	}
	return 0;
}