class Solution {
public:
    bool isPalindrome(string s) {
        int last = s.size()-1;
        int first = 0;

           while(first < last){

                  while(first < last && !isalnum(s[last])){
                    last--;
                  }

                  while(first < last && !isalnum(s[first])){
                    first++;
                  }

            if(tolower(s[first]) != tolower(s[last])){
                return false;
            }
            first++;
            last--;
           }

           return true;
    }
};
