import matplotlib.pyplot as plt

plt.rc("font",family="Microsoft JhengHei")
plt.plot([2,3,4], [[4,2],[6,3],[8,4]],label = ['第一組','第二組'])
plt.xlabel('X軸的標題')
plt.ylabel('Y軸的標題')
plt.legend()
plt.show()