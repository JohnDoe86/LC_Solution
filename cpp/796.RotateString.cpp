class Solution{
public:
    bool rotateString(string s, string goal){
        //corner case
        if (s.length() != goal.length()) return false;
        s = s+s;
        if(s.find(goal) == string::npos) return false;
        return true;
    }
}

//find朴素匹配，找不到就返回一个npos（no position）