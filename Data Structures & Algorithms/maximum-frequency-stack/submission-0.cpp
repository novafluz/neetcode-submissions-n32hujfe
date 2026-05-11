class FreqStack {
private:
vector<int> st;
unordered_map<int, int> freq;

public:
    FreqStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        freq[val]++;
    }
    
    int pop() {
        int maxF = 0;
        for (auto& [val, cnt] : freq) {
            maxF = max(maxF, cnt);
        }
        int i = st.size() - 1;
        while (maxF != freq[st[i]]) i--;
        int val = st[i];
        st.erase(st.begin() + i);
        freq[val]--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */