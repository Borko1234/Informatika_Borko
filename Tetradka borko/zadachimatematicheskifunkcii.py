import math as m
from matplotlib import pyplot as plt
import numpy as np

# 1)
x1 = np.arange(-5, 5.1, 0.1)
y1_1 = x1
y1_2 = 2 * x1
y1_3 = 3 * x1
y1_4 = -x1

x2 = np.arange(-5, 5.1, 0.1)
y2_1 = x2
y2_2 = x2 ** 2
y2_3 = x2 ** 3
y2_4 = x2 ** 4

x3 = np.arange(1, 10.1, 0.1)
y3_1 = 1 / x3
y3_2 = 2 / x3
y3_3 = 3 / x3
y3_4 = 4 / x3

fig1 = plt.figure(figsize=(15, 5))

plt.subplot(131)
plt.plot(x1, y1_1, label="f(x)=x", color='r')
plt.plot(x1, y1_2, label="f(x)=2x", color='g')
plt.plot(x1, y1_3, label="f(x)=3x", color='b')
plt.plot(x1, y1_4, label="f(x)=-x", color='m')
plt.legend()

plt.subplot(132)
plt.plot(x2, y2_1, label="f(x)=x", color='r')
plt.plot(x2, y2_2, label="f(x)=x^2", color='g')
plt.plot(x2, y2_3, label="f(x)=x^3", color='b')
plt.plot(x2, y2_4, label="f(x)=x^4", color='m')
plt.legend()

plt.subplot(133)
plt.plot(x3, y3_1, label="f(x)=1/x", color='r')
plt.plot(x3, y3_2, label="f(x)=2/x", color='g')
plt.plot(x3, y3_3, label="f(x)=3/x", color='b')
plt.plot(x3, y3_4, label="f(x)=4/x", color='m')
plt.legend()

plt.show()

# 2)
x1 = np.arange(-10, 10.1, 0.1)
y1_1 = [m.exp(x) for x in x1]
y1_2 = [2 ** x for x in x1]
y1_3 = [3 ** x for x in x1]
y1_4 = [4 ** x for x in x1]

x2 = np.arange(-2, 2.1, 0.1)
y2_1 = [m.sin(x) for x in x2]
y2_2 = [m.cos(x) for x in x2]
y2_3 = [m.tan(x) if m.cos(x) != 0 else None for x in x2]
y2_4 = [1 / m.tan(x) if m.sin(x) != 0 else None for x in x2]

x3 = np.arange(-1, 1.1, 0.1)
y3_1 = [m.asin(x) if -1 <= x <= 1 else None for x in x3]
y3_2 = [m.acos(x) if -1 <= x <= 1 else None for x in x3]
y3_3 = [m.atan(x) for x in x3]

fig2 = plt.figure(figsize=(15, 5))

plt.subplot(131)
plt.plot(x1, y1_1, label="f(x)=e^x", color='r')
plt.plot(x1, y1_2, label="f(x)=2^x", color='g')
plt.plot(x1, y1_3, label="f(x)=3^x", color='b')
plt.plot(x1, y1_4, label="f(x)=4^x", color='m')
plt.legend()

plt.subplot(132)
plt.plot(x2, y2_1, label="f(x)=sin(x)", color='r')
plt.plot(x2, y2_2, label="f(x)=cos(x)", color='g')
plt.plot(x2, y2_3, label="f(x)=tg(x)", color='b')
plt.plot(x2, y2_4, label="f(x)=cotg(x)", color='m')
plt.legend()

plt.subplot(133)
plt.plot(x3, y3_1, label="f(x)=arcsin(x)", color='r')
plt.plot(x3, y3_2, label="f(x)=arccos(x)", color='g')
plt.plot(x3, y3_3, label="f(x)=arctg(x)", color='b')
plt.legend()

plt.show()

# 3)
x = np.arange(-10, 10.1, 0.1)
y1_1 = [(m.exp(x) - m.exp(-x)) / (m.exp(x) + m.exp(-x)) for x in x]
y1_2 = [1 / (1 + m.exp(-x)) for x in x]
y1_3 = [0 if x <= 0 else 1 for x in x]
y1_4 = [1 if x > 0 else -1 if x < 0 else 0 for x in x]

y2_1 = [0 if x <= 0 else x for x in x]
y2_2 = [x if x == 0 else 0 for x in x]
y2_3 = [0.1 * x if x <= 0 else x for x in x]

fig3 = plt.figure(figsize=(10, 5))

plt.subplot(121)
plt.plot(x, y1_1, label="f(x)=(e^x - e^-x) / (e^x + e^-x)", color='r')
plt.plot(x, y1_2, label="f(x)=1/(1+e^-x)", color='g')
plt.plot(x, y1_3, label="f(x)=step(x)", color='b')
plt.plot(x, y1_4, label="f(x)=sign(x)", color='m')
plt.legend()

plt.subplot(122)
plt.plot(x, y2_1, label="f(x)=piecewise1", color='r')
plt.plot(x, y2_2, label="f(x)=piecewise2", color='g')
plt.plot(x, y2_3, label="f(x)=piecewise3", color='b')
plt.legend()

plt.show()
