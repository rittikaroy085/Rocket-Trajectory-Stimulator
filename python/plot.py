import pandas as pd
import matplotlib.pyplot as plt
data = pd.read_csv('cpp\\trajectory.csv')

print(data)

x = data["X"]
y = data["Y"]

print(x)
print(y)

max_height = y.max()
max_height_index = y.idxmax()

max_x = x[max_height_index]

print("Maximum Height:", max_height, "m")
print("Maximum Height occurs at X =", max_x, "m")

plt.plot(x, y)

plt.scatter(max_x, max_height)

plt.annotate(
    f"Max Height = {max_height:.2f} m",
    (max_x, max_height)
)

range_distance = x.iloc[-1]

print("Horizontal Range:", range_distance, "m")
plt.xlabel("Horizontal Distance (m)")
plt.ylabel("Height (m)")
plt.title("Rocket Trajectory")

plt.grid()
plt.show()