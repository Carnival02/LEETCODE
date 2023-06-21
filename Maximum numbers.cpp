//Question no.2114

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n= sentences.size();
        int spc=0;
        for(int i =0;i<n;i++)
        {
            int count=0;
        
            string temp = sentences[i];
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j]==' ')
                {
                    count++;
                }
                
            }
            spc = max(spc,count);
        }

        return spc+1;
    }
};
