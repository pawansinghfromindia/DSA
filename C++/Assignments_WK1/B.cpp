#include <bits/stdc++.h>
using namespace std;

int main() {
	/*
	 Print the first five uppercase English letters, one per line.
	*/
	cout << "A" << endl;
	cout << "B" << endl;
	cout << "C" << endl;
	cout << "D" << endl;
	cout << "E" << endl;

	cout << "------------------"<< endl;

	cout << "A" << endl << "B" << endl << "C" << endl << "D" << endl << "E" << endl;
    
    cout << "------------------"<< endl;
	
	cout << "A\nB\nC\nD\nE" ;
	
	cout << "------------------"<< endl;
	
	for(int i = 65; i<70; i++){
	    cout << char(i) << endl;
	}
    
    cout << "-----------" << endl;
    
    for(char i = 97; i<102; i++){
	    cout << char(toupper(i)) << endl;
	}
    
    cout << "-----------" << endl;
}

