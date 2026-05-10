class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int end = s.length() - 1;
        while(front < end){
            while(front < end && !std::isalnum(s[front])){
                front++;
            }
            while(front < end && !std::isalnum(s[end])){
                end--;
            }
            if(tolower(s[front]) != tolower(s[end])){
                return false;
            }
            front++;
            end--;
        }
        return true;
    }
};
