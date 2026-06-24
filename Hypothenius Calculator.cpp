#include<iostream>
#include<cmath>

int main(){

    //A Triangle has three Sides, So we make three variables.

    double height;
    double base;
    double hypo;
    double a;
    double b;
    double c;

    
    std::cout<<"Enter the Height: ";
    std::cin>> height;
    std::cout<< std::endl;
    std::cout<<"Enter the Base: ";
    std::cin>> base;
    std::cout<< std::endl;
    
    //The formula for Hypotenuse is sqrt(a^2+ b^2)
    a= pow(height,2);
    b=pow(base,2);
    c = a+b;
    hypo = sqrt(c);

    std::cout<<"The Hypotenuse is: "<<hypo<<'\n';


}