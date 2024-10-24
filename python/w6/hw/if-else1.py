# 輸入成績
score = int(input("請輸入成績: "))

# 判斷成績等第
if score > 90:
    grade = 'A'
elif score > 80:
    grade = 'B'
elif score > 70:
    grade = 'C'
else:
    grade = 'D'

# 輸出成績等第
print(f"成績等第: {grade}")