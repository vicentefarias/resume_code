#include <vector>
using namespace std;
class OddSum {
	public:   
    	int getSum(vector<int> x){
   			int sum = 0;
        	for(int i=0; i<x.size(); i++){
        		if (x[i]%2 != 0)
                	sum += x[i];
     	   }
    		return sum;
    	}
};