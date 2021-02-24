#include<iostream>
#include<string>

int main(){
    int ph;

    std::cout << "Enter the PH value.\n";
    std::cin  >> ph;

    if(ph<0 || ph>14){
        std::cout<<"Enter Something valid\n";
    }

    else if (ph<7 ){
        std::cout<<"Acidic\n";
    }
    else if (ph>7 ){
        std::cout<< "Basic\n";
    }
    else {
        std::cout<< "Neutral\n";
    }
};