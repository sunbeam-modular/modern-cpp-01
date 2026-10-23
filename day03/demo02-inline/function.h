#pragma once

// function declaration
int add(int, int);

// function definition
//int subtract(int a, int b) {
//	return a - b;
//}
// when function.h is included in multiple .cpp files, the definition will be repeated in those .cpp files.
//	linker will raise error -- redefinition of functions.

// inline -> ODR = One Definition Rule
inline int multiply(int a, int b) {
	return a * b;
}
// when function.h is included in multiple .cpp files, the definition will be repeated in those .cpp files.
//	however since fn is declared "inline", linker will consider it as a single copy
//		and linker will not produce any error.


// global var declaration -- usually in .h
extern int global1;

// global var declaraion -- in .h
//int global2 = 20;
// when function.h is included in multiple .cpp files, the definition will be repeated in those .cpp files.
//	linker will raise error -- redefinition of variable.

inline int global3 = 30;
// when function.h is included in multiple .cpp files, the definition will be repeated in those .cpp files.
//	however since var is declared "inline", linker will consider it as a single copy
//		and linker will not produce any error.

inline constexpr double PI = 3.14;
// inline ensure single copy at linking
//	constexpr ensure compile time evaluation
//	like a macro/symbolic constants
//		- symbolic constants don't have data type -- constexpr typed variable
//		- symbolic constants don't follow the scopes (as evaluated by pre-processor)
//			constexpr variables may be kept in namespace scope or class scope.
//		- in class - static constexpr variables are by default inline.
