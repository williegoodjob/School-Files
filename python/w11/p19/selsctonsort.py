def selection_sort(num):
    n = len(num)
    for i in range(n-1):
        min_idx = i
        for j in range(i+1, n):
            if num[j] < num[min_idx]:
                min_idx = j
        num[i], num[min_idx] = num[min_idx], num[i]

num = [5,4,3,2,1]
print("before: %s" % num)
selection_sort(num)
print("after : %s" % num)