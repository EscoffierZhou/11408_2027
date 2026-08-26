# chap28 附录: k次齐次函数与欧拉公式

## 1. 齐次函数的数学定义与性质

#### 1. 严格定义:
设函数 $f(x, y)$ 在锥形区域内有定义. 若存在常数 $k$, 使得对任意 $t > 0$, 恒有:
$$f(tx, ty) = t^k f(x, y)$$
则称 $f(x, y)$ 为 **$k$ 次齐次函数**.

#### 2. 核心导数性质:
若 $f(x, y)$ 为 $k$ 次齐次函数, 则其一阶偏导数 $f_x(x, y), f_y(x, y)$ 为 **$k-1$ 次齐次函数**.

---

## 2. 欧拉齐次函数定理 (Euler's Theorem)

#### 1. 一阶欧拉公式:
若 $f(x, y)$ 是可微的 $k$ 次齐次函数, 则恒满足偏微分恒等式:
$$x\frac{\partial f}{\partial x} + y\frac{\partial f}{\partial y} = k f(x, y)$$

#### 2. 二阶欧拉公式推广:
$$x^2\frac{\partial^2 f}{\partial x^2} + 2xy\frac{\partial^2 f}{\partial x \partial y} + y^2\frac{\partial^2 f}{\partial y^2} = k(k - 1)f(x, y)$$

---

## 3. 实战秒杀应用

若题干要求计算 $x f_x + y f_y$, 先检验齐次性:
- 例: $f(x, y) = \frac{x^3 + y^3}{x + y}$ 是 2 次齐次函数 ($k=2$), 则无需复杂求导, 直接由欧拉定理得 $x f_x + y f_y = 2f(x, y)$.
