import matplotlib.pyplot as plt
plt.rc("font", family="Microsoft JhengHei")

import csv

file = open("pi-chart.csv", encoding="utf-8")

reader = csv.reader(file)

header = next(reader)

x = []
labels = []

for row in reader:
    labels.append(row[0])
    x.append(int(row[1]))
print(x)
print(labels)

plt.xlabel(header[0])
plt.ylabel(header[1])
plt.bar(labels, x,width=0.5, color=['red', 'blue', 'green', 'yellow', 'purple', 'orange', 'pink', 'brown', 'black', 'gray'])
# plt.legend()

plt.title("這是一個標題")

total = sum(x)
for i, value in enumerate(x):
    plt.text(i, value, f"{value / total:.2%}", ha='center', va='bottom')

plt.show()
