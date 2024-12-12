import matplotlib.pyplot as plt
from matplotlib.widgets import Cursor

plt.plot([0,1,2,3],[3,8,0.2,10],linestyle = 'dotted',marker = 'x')

fig, ax = plt.subplots()
cursor = Cursor(ax, useblit=True, color='red', linewidth=1)

plt.show()