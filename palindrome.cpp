class Solution {
public:
    bool isPalindrome(int x) {
        int i = to_string(x).length() -1;
        int j=0;
        do{
            if(to_string(x)[j] != to_string(x)[i]){
                return false;
            }
            j++;
            i--;
        }while(j<=i);
    return true;
    }
};