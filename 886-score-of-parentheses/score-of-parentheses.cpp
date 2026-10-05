class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int>scores;
        int score=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                scores.push_back(score);
                score=0;
            }else{
                if(s[i-1]=='('){
                    score=scores.back()+1;
                }
                else{
                    score=scores.back()+2*score;
                }
                scores.pop_back();
            }
        }
        return score;
    }
};