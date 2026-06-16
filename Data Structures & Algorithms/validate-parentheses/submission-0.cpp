#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        // Continue looping as long as we can find a matching pair
        bool found = true;
        while (found) {
            found = false;
            // Iterate through the string looking for adjacent matching pairs
            for (int i = 0; i < (int)s.length() - 1; ++i) {
                if ((s[i] == '(' && s[i + 1] == ')') ||
                    (s[i] == '[' && s[i + 1] == ']') ||
                    (s[i] == '{' && s[i + 1] == '}')) {
                    
                    // Remove the pair of brackets found
                    s.erase(i, 2);
                    found = true;
                    // Break to restart the scan from the beginning of the modified string
                    break; 
                }
            }
        }
        
        // If the string is empty, all brackets were correctly matched and removed
        return s.empty();
    }
};