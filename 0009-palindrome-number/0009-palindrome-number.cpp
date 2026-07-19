class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)  return false;

        vector<int> arr;
        while(x>0){
         arr.push_back(x % 10);
         x = x /10;
        }
        vector<int>arr1;
        for(int i = arr.size() - 1; i >= 0; i--){
            arr1.push_back(arr[i]);
        }
        bool flag = true;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == arr1[i]){
                continue;
            }
            else{
                flag = false;
                break;
            }

            
        }

        if(flag == true){
                return true;
            }
            else{
                return false;
            }
    }
};