#include <iostream>
#include <string>

using namespace std;

int main(){
	int maxNum, minNum;
	bool isNull = false;
	cout << "Enter numbers: " << endl;
	cin >> maxNum;
	(maxNum <= 0) ? (cout << "There is no minimum element in this sequence!" << endl, isNull = true) : minNum = maxNum;
	while (isNull == false)
	{
		cin >> maxNum;
		(maxNum <= 0) ? (cout << "The smallest number in this sequence is: " << minNum << endl, isNull = true) :
			minNum = (maxNum < minNum) ? maxNum : minNum;
	}
	return 0;
}
