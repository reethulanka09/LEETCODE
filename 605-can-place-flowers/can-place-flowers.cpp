class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() ==1){
            if(flowerbed[0]==1 and n==1){
                return false;
            }
            else{
                return true;
            }
        }
        if(flowerbed.size() > 1 and flowerbed[0]==0 and flowerbed[1]!=1){
            n--;
             flowerbed[0]=1;
        } 
        for(int i=1;i<flowerbed.size();i++){
           if(i==flowerbed.size()-1){
            if(flowerbed[i]==0 and flowerbed[i-1]!=1){
                n--;
                flowerbed[i]=1;
            }
           }
           else{
              if(flowerbed[i]==0 and flowerbed[i-1] != 1 and flowerbed[i+1] != 1){
                n--;
                flowerbed[i]=1;
              }
           }
        }
        if(n>0) return false;
        else return true;
    }
};