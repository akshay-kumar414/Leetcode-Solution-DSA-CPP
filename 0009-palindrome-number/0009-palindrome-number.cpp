class Solution {
public:
    bool isPalindrome(int x) {

        int original = x;
        long long int rev = 0;
        while( x > 0){
            int n = x % 10;
            rev = rev * 10 + n;
            x = x/10;
        }
        if(original == rev){
            return true;
        }
        return false;

        
    }
};