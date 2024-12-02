#include <iostream> 
using namespace std;
//1-----
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int number;
//	cout << "Введите число: ";
//	cin >> number;
//	if (number == 10) 
//	{
//		cout << "Вы ввели 10";
//	}
//	return 0;
//}
//2-----
//int main() 
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = i * 2;
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
//3-----
//int main() {
//	int count = 0;
//	while (count < 5) 
//	{ 
//		cout << count << endl;
//		count++;
//	}
//	return 0;
//}
//4-----
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	float num;
//	cin >> num;
//	int numInt = int(num);
//	cout << "Целое число: " << numInt << endl;
//	if (numInt == 5) {
//		cout << "numInt равно 5";
//	}
//	return 0;
//}
//5-----
//int main() {
//	int numArray[5];
//	for (int i = 0; i < 5; i++) {
//		numArray[i] = i * 2;
//	}
//	int sum;
//	sum = 0;
//	cout << "Array values: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Element" << i << ": " << numArray[i] << endl;
//		sum += numArray[i];
//	}
//	cout << sum;
//	return 0;
//}
//6-----
//int main() 
//{
//	int x = 10;
//	float y = 3.14;
//	char myChar = 'A';
//	bool isTrue = true;
//	if (x > 5)
//	{
//		cout << "x is greater than 5" << endl;
//	}
//	else 
//	{
//		cout << "x is less or equal to 5" << endl;
//	}
//	cout << "Value of y: " << y << endl;
//	cout << "Character: " << myChar << endl;
//	cout << "Boolean: " << isTrue << endl;
//	return 0;
//}
//7-----
//int main() {
//	unsigned int uVal = 10; 
//	signed int sVal = -20;
//	cout << "Unsigned Value: " << uVal << endl;
//	cout << "Signed Value: " << sVal << endl;
//	int user_input;
//	cout << "Enter a number: ";
//	cin >> user_input;
//	if (user_input < 0)
//		cout << "Negative number!" << endl;
//	else
//		cout << "Positive number!" << endl;
//	return 0;
//}
//8-----
//int main() {
//	int a = 10;
//	int b = 20;
//	int* ptrA;
//	int* ptrB;
//
//	ptrA = &a;
//	ptrB = &b;
//
//	cout << "Value of a: " << *ptrA << endl;
//	cout << "Value of b: " << *ptrB << endl;
//
//	*ptrA = *ptrB;
//	cout << "After assigning b to a: " << *ptrA << endl;
//
//	int c = 30;
//	int* ptrC;
//	ptrC = &c;
//	cout << "Value of c: " << *ptrC << endl;
//
//	cout << "End of the program." << endl;
//
//	return 0;
//}
//9-----
//int main() {
//	int num = 5;
//	int* pNum;
//	pNum = &num;
//	cout << "Number before: " << *pNum << endl;
//	*pNum = 10;
//	cout << "Number after: " << *pNum << endl;
//	float pf = 5.5;
//	float* pFloat;
//	pFloat = &pf;
//	cout << "Float value: " << *pFloat << endl;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < 5; i++) 
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//10-----
//int main()
//{
//	float fValue = 3.14;
//	float* pfValue;
//
//	pfValue = &fValue;
//
//	cout << "Float value: " << *pfValue << endl;
//
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* pArr;
//
//	pArr = &arr[0];
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << pArr[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}