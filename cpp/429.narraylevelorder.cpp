/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        //corner case
        if(!root) return {};
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> level;
            int cnt = q.size();
            for(int i =0; i<cnt; i++){
                Node* cur = q.front();
                q.pop();
                for(auto child : cur->children){
                    level.push_back(child->val);
                    q.push(child);
                }
                res.push_back(level);
            }
        }
        return res;
    }
};