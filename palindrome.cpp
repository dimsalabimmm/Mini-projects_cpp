#include<iostream>


class Solution {
public:
    bool isPalindrome(int x) {
        int orignum = x;
        int reversednum = 0 ;
        while (x>0){
            int digit = x % 10;
            reversednum = reversednum * 10 + digit; 
            x /= 10;
        }
        return orignum == reversednum; 
    }
    
};
int main(){
        Solution num;
        int number = 121;
        std::cout<<"enter a number ";
        std::cin>>number;
        if (num.isPalindrome(number)){
            std::cout<<number<<" is a polindrom"<<std::endl;

        }
        else{
            std::cout<<number<<" Is not a polindrom"<<std::endl;
        }
    return 0;
    } 
