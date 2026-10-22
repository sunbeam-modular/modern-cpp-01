#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

/*
int main() {
	int total = 10;
	const int& alias = total;	// alias is another name for total - you cannot change total via alias
	cout << "alias: " << alias << " - type = " << typeid(alias).name() << endl;
	//alias++; // compiler error
	
	// when auto infer a value type, the const & ref qualifiers are discarded.
	auto copy = alias; // "copy" a new var that holds value of total i.e. 10
	cout << "copy: " << copy << " - type = " << typeid(copy).name() << endl;
	copy++; // okay -- increments the "copy" variable
	cout << "incr copy: " << copy << endl;

	auto& ref = total; // ref is alias to "total" var
	ref++; // it is normal reference, we can also modify original variable
	cout << "ref: " << ref << ", original total var: " << total << endl; // 11, 11

	const auto& roRef = total;
	//roRef++; // compiler error
	cout << "roRef: " << roRef << endl;
	return 0;
}
*/

/*
int main() {
	int scores[]{ 11, 22, 33 };
	for (int score : scores)
		cout << "scores ele: " << score << endl;
	cout << endl;

	vector<int> v1{ 10, 20, 30 };
	
	// method1 to traverse vector v1
	for (int i = 0; i < v1.size(); i++)
		cout << "v1 elem: " << v1[i] << endl;
	cout << endl;

	// method2 to traverse vector v1
	//vector<int>::iterator itr = v1.begin();
	auto itr = v1.begin();
	while (itr != v1.end()) {
		cout << "v1 elem: " << *itr << endl;
		++itr;
	}
	cout << endl;

	// method3 to traverse vector v1 -- modern c++ -- range based for loop
	for(int ele:v1)
		cout << "v1 elem: " << ele << endl;
	cout << endl;
	return 0;
}
*/

/*
int main() {
	int scores[]{ 11, 22, 33 };
	// each elem is "copied" into loop var "score" one by one.
	//	any change done in loop var "score" will not reflect in array elems
	for (auto score : scores) {
		cout << "scores ele: " << score << endl;
		score++; // only modifies the copy (not original elem in array)
	}
	cout << endl;

	// each elem is referenced (alias) into loop var "score" one by one.
	//	any change done in loop var "score", it will reflect in array elems
	for (auto& score : scores) {
		++score;
		cout << "scores ele: " << score << endl;
	}
	// after the loop -> scores array become = {12, 23, 34};
	cout << endl;

	// each elem is referenced (alias) into loop var "score" one by one.
	//	loop var is const ref, so cannot modify the original elems
	for (const auto& score : scores) {
		//score++; // compiler error
		cout << "scores ele: " << score << endl;
	}
	cout << endl;
	return 0;
}
*/

/*
int main() {
	auto v1{ 3 }; // int with value "3"
	auto v2 = { 3 }; // { 3 } -- initializer_list object.
	cout << "v1 type: " << typeid(v1).name() << endl;
	cout << "v2 type: " << typeid(v2).name() << endl;
	return 0;
}
*/

void print(initializer_list<int> nums) {
	for (int n : nums)
		cout << "print() arg: " << n << endl;
	cout << endl;
}

int main() {
	auto numbers = { 1, 2 };
	print(numbers); // initializer_list "numbers" passed to fn.
	print({ 10, 20, 30 }); // anonymous initializer_list created and passed to fn
	print({ 11, 22, 33, 44 });
	return 0;
}


