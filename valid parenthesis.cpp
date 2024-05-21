class Solution {
public:
    bool isValid(string s) {
        char var[s.length()];
        int k=-1;
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && k==-1){
            return false;
            }
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                k++;
                var[k] = s[i]; // Store the first character of the string
            } else {
                switch (var[k]) {
                    case '{':
                        if (s[i] == '}') {
                            k--;
                            break;
                        }
                        return false;
        
                    case '(':
                        if (s[i] == ')') {
                            k--;
                            break;
                        }
                        return false;                    

                    case '[':
                        if (s[i] == ']') {
                            k--;
                            break;
                        }
                        return false;
                    default:
                        return false;

                }
  
            }

        }
    if(k == -1)
        return true;
    else{
        return false;
    }
    }
};