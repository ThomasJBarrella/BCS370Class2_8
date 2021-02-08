#include <iostream>
#include <string>

/*int func1() {
  int n1,n2;
  std::cin >> n1 >> n2;
  return n1 + n2;
}*/

/*void func2() {
  int n1, n2;

  std::cin >> n1 >> n2;
  std::cout << n1 + n2;
}*/

/*void func3(int num1, int num2) {
  std::cout << "give me num1: ";
  std::cin >> num1;
  std:: cout << "give me num2: ";
  std::cin >> num2;
  std::cout << num1 + num2;
}*/

/*int func4(int n1, int n2) {
  n1 +=2;
  return n1 + n2;
}*/ //this is the ideal because the function will have input data, it takes paramaters

/*void func5(int n1, int n2, int total) {
  total = n1 + n2;
}*/

/*void func1(int num1, int num2) {
  int n1, n2;
  std::cout << "give me num1: ";
  std::cin >> n1;
  std::cout << "give me num2: ";
  std::cin >> n2;
  num1 = n1;
  num2 = n2;
  return num1 + num2;
}*/

int main() {
  //std::cout << func1();
  //func2();
  //std::cout << func4(2,3);
  
  //int num1=10, num2=20, total;
  //func5(num1,num2,total);

  return 0;
}

//she doesn't want us using cin and cout, the idea is to program without using cin and cout because cin and cout is basic data entry, not really coding
//programming is about concept
//real functions are about taking parameters not user data entry, so don't use cin and cout
//where is the data coming from? not your concern, not the function's responsibility to assign data
  //data and logic should be separate
  //the more you mix the worse the program gets
