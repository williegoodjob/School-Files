with open("data3.txt",mode="w",encoding="utf-8") as file:
    file.write("55\n33")
sum=0
with open("data3.txt",mode="r",encoding="utf—8") as file:
    for line in file:
        sum+=int(line)  
print(sum)