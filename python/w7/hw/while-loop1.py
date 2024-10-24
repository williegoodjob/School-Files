start = int(input("請輸入第一個數字: "))
end = int(input("請輸入第二個數字: "))

total_sum = 0
for num in range(start, end + 1):
    total_sum += num

print(f"從 {start} 到 {end} 的總和是: {total_sum}")