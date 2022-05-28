#include<bits/stdc++.h>
using namespace std;

/*  
    胡益远
    2022.5.8
    方法一，按照递推式的递归写法
    rm = max(ri+rm-i);
*/  

int MAX = 10;
int price[] = {1,5,8,9,10,17,17,20,24,30};
int dp(int l); 
int main(){
    int ans = dp(10);
	
    cout<<ans<<endl;
}   
    
int dp(int len){

    if(len==1){
        return price[0];
    }
    if(len==2){
        return price[1]; //做一步简化而已
    }
    int max = price[len-1];
    for(int i=1; i<=len-1; i++){

        int temp = dp(i) + dp(len-i);
        if(temp>max)
            max =temp;
    }
    return max;
}
