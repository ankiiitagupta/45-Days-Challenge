//buy and sell stock II

int maxProfit(vector<int>& prices) {
        int sum=0;
        int max=0;
        if(prices.size()==1 || prices.size()==0){
            return 0;
        }
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                    max=prices[i+1];
            }
            
            if(prices[i]<max && prices[i+1]>prices[i] ){
                sum=sum+ (max-prices[i]);
            }
        }
        return sum;
    }