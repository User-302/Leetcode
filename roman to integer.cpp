class Solution {
public:
    int romanToInt(string s) {
        // int j = -1;
        int amount = 0;
        // vector<char> array(s.begin(), s.end());
        for (int i=0; i<s.length(); i++){
            // j++;
            // array[i] = s[i];
            switch(s[i]){
                case 'I':
                amount+=1;
                break;
                case 'V':
                if((i!=0) && s[i-1]=='I'){
                    amount+=3;
                }
                else{
                    amount += 5;
                }
                break;
                case 'X':
                if((i!=0) && s[i-1]=='I'){
                    amount+=8;
                }
                else{
                    amount += 10;
                }
                break;
                case 'L':
                if((i!=0) && s[i-1]=='X'){
                    amount+=30;
                }
                else{
                    amount += 50;
                }
                break;
                case 'C':
                if((i!=0) && s[i-1]=='X'){
                    amount+=80;
                }
                else{
                    amount += 100;
                }
                break;
                case 'D':
                if((i!=0) && s[i-1]=='C'){
                    amount+=300;
                }
                else{
                    amount += 500;
                }
                break;                
                case 'M':
                if((i!=0) && s[i-1]=='C'){
                    amount+=800;
                }
                else{
                    amount += 1000;
                }
                break;
            }
        }
    return amount;
    }
};