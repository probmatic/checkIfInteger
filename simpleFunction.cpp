/*probmatic*/
//A funtion that detects if user has inputed an integer or not

#include <iostream>
#include <string>
using namespace std;


bool isNumber(string s); //returns true or false if user inputed an integer

int main()
{
	string str;
	cin >> str; //input

	if (isNumber(str))
		cout << "The integer you have entered is: " << str << endl;
	else
		cout << "That is not an integer." << endl;

	system("pause");
    return 0;
}
bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}
