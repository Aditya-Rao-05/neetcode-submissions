class Solution {
public:
    bool isAnagram(string s, string t) {

        // create dictionaries that store each character in s and t
        /*
        count how many times a character appears
        compare the counts between dictionaries
        return true or false.
        */

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for (char c : s) {
            countS[c]++;
        }


        for (char c2 : t) {
            countT[c2]++;
        }

        if (countT == countS) {
            return true;
        }
        return false;
    }
};
