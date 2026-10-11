class Solution {
public:
    int digitCount(int n){
        if(n==0)return 1;
        int digitc=0;
        while(n>0){
            digitc++;
            n=n/10;
        }
        return digitc;
    }
    int addDigits(int num) {
       if(digitCount(num)==1)return num;
       int sum=0;
       while(num>0){
         int digit=num%10;
         sum+=digit;
         num=num/10;
       }
       return addDigits(sum);
    }
};