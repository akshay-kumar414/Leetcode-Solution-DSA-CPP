class Solution {
public:
    string removeStars(string s) {

        // using string 
        string ans;
        for(char ch : s){
            if(ch == '*'){
                ans.pop_back();
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};