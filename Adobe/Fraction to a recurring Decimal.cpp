class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        std::string ans;
        std::string final_ans; 
        if((numerator<0&&denominator>0) ||(numerator>0&&denominator<0))
        {
        ans.append("-");
        }
        long int d= abs(denominator);
        long int n=abs(numerator);
        
        ans = ans+std::to_string((long int)(n/d));
        std::unordered_map<long,int> m;
        long int remainder = n%d;
        if(remainder!=0)
        {
            ans.append(".");
            while(ans.size()<10001)
            {
                if(remainder ==0 ||m.find(remainder)!=m.end())
                {
                    break;
                }
                m[remainder] = ans.size();
                long int t= (remainder*10)/d;
                ans.append(std::to_string(t));
                remainder = (remainder*10)%d;
            }
            if(m.find(remainder)!=m.end())
            {
                final_ans = ans.substr(0,m[remainder]) 
                + "("+
                ans.substr(m[remainder])
                +")";
            }
            else{
                final_ans = ans;
            }
        }
        else
        final_ans = ans;
        return final_ans;
    }
};
