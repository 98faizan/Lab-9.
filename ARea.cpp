//#include<iostream>
//using namespace std;
//int area(int a);
//float area(float a, float b);
//float area(float a);
//int main() {
//	int choice;
//	cout << "press 1 for area of square.\n";
//	cout << "press 2 for area of recctangle.\n";
//	cout << "press 3 for area of circle.\n";
//	cout << "enter your choice:\n";
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		int length;
//		cout << "enter the length of square:";
//		cin >> length;
//		cout << "\nthe area of square is:";
//		cout << area(length);
//		break;
//	case 2:
//		float length1, breath;
//		cout << "enter the length of rectangle:";
//		cin >> length1;
//		cout << "enter the breath of rectangle:";
//		cin >> breath;
//		cout << "\nthe area of rectangle is:";
//		cout << area(length1, breath);
//		break;
//	case 3:
//		float radius;
//		cout << "enter the radius of cirle:";
//		cin >> radius;
//		cout << "\nthe area of circle:";
//		cout << area(radius);
//		break;
//	default:
//		cout << "invalid input.";
//	}
//return 0;
//}
//int area(int a) {
//	return a * a;
//}
//float area(float a, float b) {
//	return a * b;
//}
//float area(float a) {
//	return 3.14 * a * a;
//}