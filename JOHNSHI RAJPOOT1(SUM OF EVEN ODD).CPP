#include<iostream>
using namespace std;
int main() {
int n;
 cin >> n;
int evenDigitSum = 0;
int oddDigitSum = 0;
while(n != 0){
  int digit = n%10;
        if(digit %2 == 0){
            evenDigitSum = evenDigitSum +digit;
        }else{

            oddDigitSum = oddDigitSum+digit;
        }
         n = n/10;
    }
      cout << evenDigitSum << " " << oddDigitSum;
    return 0;
}

