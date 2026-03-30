class Solution {
public:
    bool isValid(string st) {
        stack<char> s;
        unordered_map <char,int> m = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

        for(auto bracket : st){
            if(m[bracket] < 0){
                s.push(bracket);
            }else{
                if(s.empty()) return false;
                char top = s.top();
                s.pop();

                if(m[top] + m[bracket] != 0) return false;
            }
        }

       if(s.empty()) return true;
       else return false;
    }
};
