import csv
with open ("data1.csv",mode="w",newline="") as file:
    writer=csv.writer(file)
    writer.writerow([1,2,3])
    writer.writerow([4,5,6])
    writer.writerow([7,8,9])