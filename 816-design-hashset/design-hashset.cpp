class MyHashSet {
public:
vector<int> arr;
    MyHashSet() {  }

    void add(int key) { arr.push_back(key); }

    void remove(int key) { erase(arr, key); }

    bool contains(int key) {

        for (int num : arr) {
            if (num == key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */