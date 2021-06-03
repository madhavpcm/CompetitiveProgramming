void makelps(string& pat, int M, vector<int>& lps){
    int len = 0;
    lps[0] = 0; 
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }else{
            if (len != 0) {
                len = lps[len - 1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}
size_t kmps(string& pat, string& txt)
{
    int M = pat.size();
    int N = txt.size();
    size_t res=0;
    vector<int> lps(M);

    makelps(pat, M, lps);
  
    int i = 0; 
    int j = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
  
        if (j == M) {
            res++;
            j = lps[j - 1];
        }

        else if (i < N && pat[j] != txt[i]) {

            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

