import datetime

today = datetime.date.today()

print(today) # 2024—11—12

print(today.year) # 2024

print(today.month) # 11

print(today.day) # 12

print(today.weekday()) 
print(today.isoweekday())
print(today.isocalendar())
print(today.isoformat()) # 2024-11-12

print(today.ctime()) # Tue Nov 12 00:00:00 2024
print(today.strftime('%Y.%m.%d'))
