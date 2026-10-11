class Solution {
public:
    int maximum69Number (int num) {
        int ans=num;
        string number=to_string(num);
        for(int i=0; i<number.size(); i++){
            if(number[i]=='6'){
                number[i]='9';
                int original=stoi(number);
                ans=max(original,ans);
                number[i]='6';
            }
        }
        return ans;
    }
};