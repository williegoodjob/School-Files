with open("data3.txt",mode="w") as file:
    file.write("中文測試") 
with open("data3.txt",mode="r") as file:
    data = file.read()
print(data)