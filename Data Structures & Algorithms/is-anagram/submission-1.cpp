class Solution {
public:
    bool isAnagram(string s, string t) {

        /*
    Create dictionaries (maps) to count the frequency of letters in each string 
    then check both maps against eachother to see if the frequencies are the same 
    then if they are anagram if not then not anagram

    besides counting you could sort them and compare the sorted things.
        
        */

        // dictionary for s
        unordered_map<char, int> countS;

        //dictionary for t
        unordered_map<char, int> countT;

        for (char c : s) {
            countS[c]++;
        }
        for (char ch : t) {
            countT[ch]++;
        }

        if (countS == countT) {
            return true;
        }
        return false;

        
    }
};
