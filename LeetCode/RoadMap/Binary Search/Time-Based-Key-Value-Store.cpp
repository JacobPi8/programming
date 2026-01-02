class TimeMap {
public:
    unordered_map <string, vector<pair<string,int>>> map;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {

        map[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        
        if(!map.contains(key)) return "";

        vector <pair<string,int>>& v = map[key];
        int first = 0, last = v.size() - 1, mid;
        string result = "";

        while(first <= last){

            mid = first + (last - first)/2;
            if(v[mid].second <= timestamp){

                result = v[mid].first;
                first = mid + 1;
            }
            else{

                last = mid - 1;
            }
        }
        return result;
    }
};