class Solution {
public:
    string toGoatLatin(string sentence) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
    int n = sentence.length();
    int i = 0;
    int j = 0;
    int cnt = 1;
    string rar = "a";
    string res;
    while(j<=n){
        while (sentence[j] != ' ' && j <n){
            j++;
        }//until find a space
        string word = sentence.substr(i, j-i);
        if (vowels.count(word[0])){
            word = word + "ma"+ rar;
        }else if (!vowels.count(word[0])){
            word = word.substr(1, word.length()-1) + word[0] +"ma"+ rar;
        }
        if (j != n) res += word + " ";
        else res += word;
        j++;
        i = j;
        rar += "a";
    }
    return res;
    }
};