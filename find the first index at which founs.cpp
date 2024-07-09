class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int index=-1;
       // Find position of string s2
    int found = haystack.find(needle);
 
    // Check if position is -1 or not
    if (found != string::npos) {
 
        return found;
    }

       return -1;
    }
};
