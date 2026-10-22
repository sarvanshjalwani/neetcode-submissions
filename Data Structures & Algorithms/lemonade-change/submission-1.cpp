class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> umap;
        int n = bills.size();
        for(int i=0 ; i<n;  i++){
            int money = bills[i];
            if(money==5){
                umap[5]++;
            }
            else if(money==10){
                if(umap.find(5)!=umap.end() && umap[5]>0){
                    umap[10]++;
                    umap[5]--;
                }
                else{
                    return false;
                }
            }
            else if(money==20){
                if(umap.find(10)!=umap.end() && umap[10]>0 && umap.find(5)!=umap.end() && umap[5]>0){
                    umap[20]++;
                    umap[10]--;
                    umap[5]--;
                }
                else if(umap.find(5)!=umap.end() && umap[5]>2){
                    umap[5] = umap[5] - 3;
                    umap[20]++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};