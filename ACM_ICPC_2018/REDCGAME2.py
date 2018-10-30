def min_and_max(L):
    mini = 1000000000
    maxi = 0
    for i in range(len(L)):
        if(L[i] < mini):
            min_index = i
            mini = L[i]
        if(L[i] > maxi):
            max_index = i
            maxi = L[i]
    return (min_index, max_index)

T = int(input())
for t in range(T):
    n, k = map(int, input().split())
    L = list(map(int, input().split()))

    new_n = n
    L.sort(reverse = True)
    answer = sum(L)
    biggest = L.pop(0)
    
    if(biggest <= k):
        print(answer)
        continue

    while(new_n > 1 and L[-1] <= k):
        L.pop()
        new_n -= 1

    while(new_n > 2):
        #print(L)
        min_index, max_index = min_and_max(L)
        subtract_value = L[min_index] - k
        val_to_remove = L[min_index]
        answer -= (subtract_value * 2)
        L[max_index] -= subtract_value
        if(L[max_index] == k):
            L.pop(max_index)
            new_n -= 1
        L.remove(val_to_remove)
        new_n -= 1

    #print(L)
    if(new_n == 2):
        answer -= (2*(L[0]-k))

    print(answer)
        
    
