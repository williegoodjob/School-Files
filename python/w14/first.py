import matplotlib.pyplot as plt
from matplotlib.widgets import Cursor
fig, ax = plt.subplots()
plt.plot([1,2,3],[2,4,4])
cursor = Cursor(ax, useblit=True, color='red', linewidth=1)
plt.show()