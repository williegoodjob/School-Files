# 蔡宇崴 5B1G0028 BMI?
height = float(input("請輸入身高（公分）："))
weight = float(input("請輸入體重（公斤）："))
bmi = weight / (height / 100) ** 2
print("BMI：{:.2f}".format(bmi))