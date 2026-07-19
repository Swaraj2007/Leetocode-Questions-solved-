class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        for(int i = 1; i < 31; i++){
            if(pow(4,i) == n){
                return true;
            }
        }
        return false;
    }
};