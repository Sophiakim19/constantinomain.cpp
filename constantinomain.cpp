#include <iostream>//input and output library 
using namespace std;//standard namespace for cin and cout

int main(){
    
   int num1, num2, product; // VARIABLES 
   
   cout<< "Enter a number: "; // output first number 
   cin>> num1; // input number
   cout<< "Eter another number: "; // output another number 
   cin>>num2;// input 2nd number 
   product = num1*num2; // product of num1 and num 2
   cout<< "The sum of the two numbers is: "<<product;// execution
   
   
    return 0;
}
