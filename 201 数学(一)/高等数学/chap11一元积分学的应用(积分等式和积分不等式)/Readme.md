# chap11 一元积分学的应用(积分等式和积分不等式)

## 1. 变限积分函数求导与微分方程转化

#### 1. 复杂变限积分求导通用法则:
设 $F(x) = \int_{\alpha(x)}^{\beta(x)} f(x, t) dt$, 其求导公式为:
$$F'(x) = f(x, \beta(x))\beta'(x) - f(x, \alpha(x))\alpha'(x) + \int_{\alpha(x)}^{\beta(x)} \frac{\partial f(x, t)}{\partial x} dt$$

#### 2. 积分方程转化为微分方程的标准步骤:
1. **定初值:** 令 $x = a$ (通常取使积分上下限相同的点), 求得 $y(a)$ 或 $F(a)$ 的初始数值.
2. **消积分:** 若式中含有 $x$ 与 $t$ 的乘积项 (如 $(x-t)f(t)$), 必须先展开提公因子或通过换元令 $u = x - t$, 再两边关于 $x$ 求导.
3. **解微分方程:** 转化为一阶或二阶微分方程求解.

---

## 2. 积分等式证明的四大核心技巧

1. **构造辅助变上限积分函数法:**
   - 证明 $\int_a^b f(x)dx = G(a,b)$: 构造 $\Phi(x) = \int_a^x f(t)dt - g(x)$, 证明 $\Phi(a) = 0$ 且 $\Phi'(x) \equiv 0 \implies \Phi(b) = 0$.
2. **区间再现变换法 ($x \to a+b-x$):**
   - 令 $x = a+b-t$, 建立 $I = C - I \implies I = \frac{C}{2}$.
3. **积分第一中值定理配合微分中值定理:**
   - 先对积分使用中值定理 $\int_a^b f(x)dx = f(\xi)(b-a)$, 再与端点值联立应用拉格朗日或柯西中值定理.
4. **分部积分循环与消项法:**
   - 涉及高阶导数的定积分等式, 通过连续分部积分将导数项降阶或转移到另一乘积因子上.

---

## 3. 经典积分不等式证明全套路

#### 1. 变限积分单调性法 (最通用):
- 证明在 $[a,b]$ 上 $\int_a^x f(t)dt \ge \int_a^x g(t)dt$:
  构造 $\Phi(x) = \int_a^x [f(t) - g(t)]dt \implies \Phi(a) = 0, \Phi'(x) = f(x) - g(x) \ge 0 \implies \Phi(x)$ 单调递增 $\implies \Phi(x) \ge 0$.

#### 2. 柯西-施瓦茨积分不等式 (Cauchy-Schwarz):
设 $f(x), g(x)$ 在 $[a,b]$ 上可积, 则:
$$\left(\int_a^b f(x)g(x)dx\right)^2 \le \left(\int_a^b f^2(x)dx\right) \left(\int_a^b g^2(x)dx\right)$$
- **实战放缩模板:**
  - 取 $g(x) = 1 \implies \left(\int_a^b f(x)dx\right)^2 \le (b-a)\int_a^b f^2(x)dx$
  - 取 $g(x) = \frac{1}{\sqrt{f(x)}} \implies \left(\int_a^b \sqrt{f(x)}dx\right)^2 \le (b-a)\int_a^b f(x)dx$

#### 3. 琴生积分不等式 (Jensen 凸函数不等式):
若 $f''(x) > 0$ (下凸/凹函数), 则对任意可积函数 $g(x)$:
$$f\left(\frac{1}{b-a}\int_a^b g(x)dx\right) \le \frac{1}{b-a}\int_a^b f(g(x))dx$$

#### 4. 泰勒公式展开积分法:
涉及高阶导数 $f''(x)$ 或端点导数的积分不等式, 将函数在端点或中点处按泰勒展开至二阶, 对不等式两边同时取定积分.
