import random
answer = random.randint(1,20)
guess = int(input("請輸入一個數字1-20:"))
while guess != answer:
    if guess>answer:
        print("太大了")
    else:
        print("太小了")
    guess = int(input("請輸入一個數字1-20:"))
print("猜對了，數字是:",answer)