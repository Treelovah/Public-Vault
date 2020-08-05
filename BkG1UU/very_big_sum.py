def a_very_big_sum(ar):
    sum = 0
    
    for i in ar:
        sum+=i

    print(sum)

list = [1000000001, 1000000002, 1000000003, 1000000004, 1000000005]
a_very_big_sum(list)