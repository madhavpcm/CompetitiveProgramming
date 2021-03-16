/*
used with ranges [l,r]

for eg [5,19]

sum of digits between this limits is x. for x = 7
7, 16 is an answer

usually very large ranges are involved

https://codeforces.com/blog/entry/77096
https://codeforces.com/blog/entry/53960

l<r<10^18

s <  500

brute force this shit is ez, but will obvioulsy take 10^18 cycles at worst r*log(r)

Recursion

F(k,s ) = Sigma (0,9) F(k-1, s-d)

BAse:
    if k==0 && s==0
        return 1
    elif k==0 && s!=0
        return 0
    
10^k complexity recursion only

recusrsion(current_position, is_still_equal, remaining sum){
    if current_position ==0 
        return if rem_sum=0
    elif
}
*/