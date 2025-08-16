import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("timing_data.txt", skiprows=1)
n = data[:, 0]
case_a = data[:, 1]
case_b = data[:, 2]
avg = data[:, 3]

plt.plot(n, case_a, label="Case A (Most Swaps)", marker='o')
plt.plot(n, case_b, label="Case B (Least Swaps)", marker='o')
plt.plot(n, avg, label="Average Case", marker='o')
plt.xlabel("Input Size (n)")
plt.ylabel("Time (ms)")
plt.legend()
plt.title("Selection Sort Performance (20 Data Points)")
plt.grid(True)
plt.show()