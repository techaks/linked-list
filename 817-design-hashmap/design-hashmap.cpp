class MyHashMap {
public:
    vector<pair<int,int>> mp;

    MyHashMap() {}

    void put(int key, int value) {
       
        for (auto &p : mp) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }
        
        
        mp.push_back({key, value});
    }

    int get(int key) {
        for (auto &p : mp) {
            if (p.first == key) {
                return p.second;
            }
        }
        return -1;
    }

    void remove(int key) {
        for (int i = 0; i < mp.size(); i++) {
            if (mp[i].first == key) {
                mp.erase(mp.begin() + i);
                return;
            }
        }
    }
};
