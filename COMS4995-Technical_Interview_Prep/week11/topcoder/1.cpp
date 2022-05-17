#include <string>
using namespace std;
class DoubleLetterCount {
	public:   
    	int count(string s){
   		    int count = 0;
            for(int i=1; i<s.size(); i++){
                if (s[i]==s[i-1]) count++;
            }
            return count;     
    	}
};