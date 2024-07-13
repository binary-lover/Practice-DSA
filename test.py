
def maximumGain( s, x, y):
    """
    :type s: str
    :type x: int
    :type y: int
    :rtype: int
    """
    score = 0
    if x>y:
        maxm = ["ab",x];
        minm = ["ba",y];
    else:
        maxm=["ba",y];
        minm=["ab",x];
    print(s)
    while(maxm[0] in s or minm[0] in s):
        if(maxm[0] in s):
            score+=maxm[1]
            # s = s = s[:s.find(maxm[0])]+s[s.find(maxm[0])+2:]
            s = s.replace(maxm[0],"",1)
        else:
            score+=minm[1]
            # s = s = s[:s.find(minm[0])]+s[s.find(minm[0])+2:]
            s = s.replace(minm[0],"",1)
            
    print(s)
    return score

x = 4
y = 5
gain = maximumGain("cdbcbbaaabab",x,y)
print(gain)