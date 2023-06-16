#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//construktor
	StackArray(){
		top = -1;

	}

	int push(int element) {
		if (top == 4) {//step 3
			cout << "Number of data exceds the limit" << endl;
		}

		top ++
	}

};

