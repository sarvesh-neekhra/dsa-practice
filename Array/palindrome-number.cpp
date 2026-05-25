class Solution {
public:
    bool isPalindrome(int x) {
        int actualNum = x;
        long reverseNum = 0;
        while( x > 0){
            int rem = x % 10;
            reverseNum = (reverseNum * 10) + rem;
            x = x / 10;
        }
        if(actualNum == reverseNum){
           return true;
        }else{
            return false;
        }
    }
};