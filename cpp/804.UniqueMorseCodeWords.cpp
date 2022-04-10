const static string mose[] = {".-","-...","-.-.","-..",".",
        "..-.","--.","....","..",".---","-.-",".-..",
        "--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
};

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> res;
        for(auto &word : words){
            string temp;
            for (auto singleAlphabet : word){
                temp += mose[singleAlphabet - 'a'];
            }
            res.insert(temp);
        }
        return res.size();
    }        
};