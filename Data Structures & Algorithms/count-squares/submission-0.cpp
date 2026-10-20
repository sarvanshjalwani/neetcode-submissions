#include <cstdint>
class CountSquares {
private:
    unordered_map<uint64_t , int> ptsCount;
    vector<vector<int>> pts;
public:
    CountSquares() {
    }
    uint64_t getKey(int x, int y) {
    // uint32_t prevents sign extension before shifting/ORing
        uint64_t ux = static_cast<uint32_t>(x);
        uint64_t uy = static_cast<uint32_t>(y);
        return (ux << 32) | uy;
    }
    void add(vector<int> point) {
        uint64_t k = getKey(point[0] , point[1]);
        ptsCount[k]++;
        pts.push_back(point);
    }
    
    int count(vector<int> point) {
        int res = 0;
        int px = point[0] , py = point[1];
        for(const auto& pt : pts){
            int x = pt[0] , y = pt[1];
            if(abs(py - y) != abs(px - x) || (x ==px || y==py) ) continue;
            res+=ptsCount[getKey(x,py)]*ptsCount[getKey(px,y)];
        }
        return res;
    }
};
