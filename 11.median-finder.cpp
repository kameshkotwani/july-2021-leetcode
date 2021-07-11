class MedianFinder {
public:
    vector<int> nums;
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(nums.size()==0)
            nums.emplace_back(num);
        else{
            auto it = upper_bound(nums.cbegin(),nums.cend(),num);
            nums.insert(it,num);
        }
    }
    
    double findMedian() {
       int n=nums.size();
        if(!n) return 0;
        double m = 0.0;
        if(n%2==0)
            return (double)(nums.at(n/2-1)+nums.at(n/2))/2;
        else
            return (double)nums.at((n/2));
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
