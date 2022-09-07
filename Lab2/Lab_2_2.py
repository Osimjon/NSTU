def to_rome(num):
    rome_nums={'M':1000,'D':500,'C':100,'L':50,'X':10,'V':5,'I':1}
    rome_lits=['M','D','C','L','X','V','I']
    for lit in rome_lits:
        while num>=rome_nums[lit]:
            print(lit,end='')
            num-=rome_nums[lit]
            
to_rome()
