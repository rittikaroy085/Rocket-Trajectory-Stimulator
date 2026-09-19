# 🚀 Rocket Trajectory Simulator

A physics-based rocket trajectory simulator built using **C++ and Python**.

This project simulates the motion of a rocket under ideal projectile-motion conditions and uses Python for data analysis and trajectory visualization.

This is **Version 1 (V1)** of the project and serves as the foundation for developing a more advanced aerospace simulation.

---

## 🎯 Project Objective

The main objective of this project is to understand how physics and mathematical equations can be translated into a computational simulation.

The simulator:

- Takes initial velocity and launch angle as input
- Calculates horizontal and vertical velocity components
- Simulates the rocket's position over time
- Calculates maximum altitude
- Calculates flight time
- Calculates horizontal range
- Stores trajectory data in a CSV file
- Uses Python to analyze and visualize the trajectory

---

## 🧠 Physics Used

V1 assumes:

- Constant gravitational acceleration
- No air resistance
- Flat-Earth approximation
- Constant initial velocity
- Launch and landing at the same altitude

### Horizontal Velocity

```text
Vx = V₀ × cos(θ)
