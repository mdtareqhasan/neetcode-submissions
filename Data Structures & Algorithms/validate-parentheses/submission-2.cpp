class Solution {
public:
    bool isValid(string s) {
        bool found = true;

        while(found){
            found = false;

            for(int i=0;i<(int)s.size()-1;i++){
                if((s[i]=='(' && s[i+1]==')') ||
                (s[i]=='{' && s[i+1]=='}') ||
                (s[i]=='[' && s[i+1]==']')){
                    s.erase(i,2);
                    found = true;
                    break;
                }
            }
        }
        return s.empty();
    }
};
