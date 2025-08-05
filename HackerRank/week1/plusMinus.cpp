#include<bits/stdc++.h>
#include <iostream>
using namespace std;

 /* Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 * vector<int> is used to interact with the arr 
 * arr.size ---> to give total element in the arr
 * 
 */
 
 
// answer-----------------------
void plusMinus(vector<int> arr) {
    int n  = arr.size();
    
    int zero=0, pos=0, neg=0;
    
    for(int number : arr){
        if(number>0)pos++;
        else if (number<0)neg++;
        else zero++;
        
    }
    
    
    cout<<(double)pos/n<<endl;
    cout<<(double)neg/n<<endl;
    cout<<(double)zero/n<<endl;

}
