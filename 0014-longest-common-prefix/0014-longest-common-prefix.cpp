class Solution {
public:
    string longestCommonPrefix(vector<string>& stars) {
        // agar string khalii hai..
        if(stars.empty()){
            return "";
        }
        //pehla string se comparision strt kro..
        for(int i = 0;i<stars[0].size();i++){

            char ch = stars[0][i];

            for(int j =1;j<stars.size();j++){
                if(i >= stars[j].size() || stars[j][i] != ch){
                    return stars[0].substr(0,i);
                }
            }

        }
        return stars[0];
        
    }
};