import csv
with open ("data.csv",mode="r",newline="") as file:
    reader=csv.reader(file)
    header = next(reader)
    for row in reader:
        temp = float(row[2]) - float(row[3])
        print([row[0], row[1], temp])