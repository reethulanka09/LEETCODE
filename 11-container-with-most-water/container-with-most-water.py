class Solution:
    def maxArea(self, height: List[int]) -> int:
        a=[]
        i=0
        j=len(height)-1
        while(i<=j):
            r=min(height[i],height[j])
            k=j-i
            a.append(r*k)
            if(height[i]<height[j]):
                i=i+1
            else:
                j=j-1
        return max(a)