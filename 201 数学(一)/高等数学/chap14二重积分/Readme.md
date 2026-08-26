# chap14 二重积分

## 1. 二重积分的概念、性质与几何意义

#### 1. 严格黎曼定义与体积诠释:
$$\iint_D f(x, y) d\sigma = \lim_{\lambda \to 0} \sum_{i=1}^n f(\xi_i, \eta_i) \Delta \sigma_i$$
- 几何意义: $f(x, y) \ge 0$ 时表示以 $D$ 为底、曲面 $z = f(x, y)$ 为顶的曲顶柱体体积.

#### 2. 积分中值定理与估值定理:
$$m S_D \le \iint_D f(x, y) d\sigma \le M S_D \implies \iint_D f(x, y) d\sigma = f(\xi, \eta) S_D \quad ((\xi, \eta) \in D)$$

---

## 2. 二重积分对称性神技 (化简大杀器)

#### 1. 普通对称性 (奇零偶倍):
1. **关于 $y$ 轴对称 ($D$ 左右对称):**
   $$\iint_D f(x, y) dxdy = \begin{cases} 0, & f(-x, y) = -f(x, y) \ (x \text{ 奇函数}) \\ 2\iint_{D_1} f(x, y) dxdy, & f(-x, y) = f(x, y) \ (x \text{ 偶函数}) \end{cases}$$
2. **关于 $x$ 轴对称 ($D$ 上下对称):**
   $$\iint_D f(x, y) dxdy = \begin{cases} 0, & f(x, -y) = -f(x, y) \ (y \text{ 奇函数}) \\ 2\iint_{D_1} f(x, y) dxdy, & f(x, -y) = f(x, y) \ (y \text{ 偶函数}) \end{cases}$$

#### 2. 轮换对称性 (变量对调交换法):
若区域 $D$ 关于直线 $y = x$ 对称 (即 $x, y$ 互换后区域 $D$ 保持不变):
$$\iint_D f(x, y) dxdy = \iint_D f(y, x) dxdy = \frac{1}{2}\iint_D [f(x, y) + f(y, x)] dxdy$$
- **实战秒杀题型:**
  $$\iint_D \frac{x}{x+y} dxdy = \frac{1}{2}\iint_D \frac{x+y}{x+y} dxdy = \frac{1}{2} S_D$$
  $$\iint_D (x^2 + y) dxdy = \iint_D (y^2 + x) dxdy \implies \iint_D (x^2 - y^2) dxdy = 0$$

---

## 3. 直角坐标与累次积分次序交换

#### 1. 投影穿线积分法则:
- **X 型区域 ($a \le x \le b, y_1(x) \le y \le y_2(x)$):** $\int_a^b dx \int_{y_1(x)}^{y_2(x)} f(x, y) dy$
- **Y 型区域 ($c \le y \le d, x_1(y) \le x \le x_2(y)$):** $\int_c^d dy \int_{x_1(y)}^{x_2(y)} f(x, y) dx$

#### 2. 交换次序的三步法:
1. 由累次积分限写出不等式组 $\to$ 2. 画出几何平面区域 $D \to$ 3. 换向投影确定新积分限.

---

## 4. 极坐标系下的计算全解

#### 1. 坐标变换公式与微元:
$$x = r\cos\theta, \quad y = r\sin\theta, \quad dxdy = r dr d\theta$$
$$\iint_D f(x, y) dxdy = \iint_D f(r\cos\theta, r\sin\theta) r dr d\theta$$

#### 2. 极坐标三大穿线区域模型:
1. **极点 $O$ 在区域外部:** $\int_\alpha^\beta d\theta \int_{r_1(\theta)}^{r_2(\theta)} f(r\cos\theta, r\sin\theta) r dr$
2. **极点 $O$ 在区域边界上 (圆 $x^2+y^2=2Rx \iff r=2R\cos\theta$):** $\int_{-\pi/2}^{\pi/2} d\theta \int_0^{2R\cos\theta} f(r\cos\theta, r\sin\theta) r dr$
3. **极点 $O$ 在区域内部 (圆 $x^2+y^2 \le R^2$):** $\int_0^{2\pi} d\theta \int_0^R f(r\cos\theta, r\sin\theta) r dr$

---

## 5. 高斯反常积分与变量代换 (雅可比行列式)

#### 1. 泊松-高斯积分推导 (Poisson-Gauss Integral):
$$I = \int_0^{+\infty} e^{-x^2} dx \implies I^2 = \left(\int_0^{+\infty} e^{-x^2}dx\right)\left(\int_0^{+\infty} e^{-y^2}dy\right) = \iint_{D} e^{-(x^2+y^2)} dxdy = \int_0^{\pi/2} d\theta \int_0^{+\infty} e^{-r^2} r dr = \frac{\pi}{4} \implies I = \frac{\sqrt{\pi}}{2}$$
$$\int_{-\infty}^{+\infty} e^{-x^2} dx = \sqrt{\pi}$$

#### 2. 一般变量代换公式:
$$\iint_D f(x, y) dxdy = \iint_{D'} f(x(u,v), y(u,v)) |J| dudv, \quad J = \frac{\partial(x, y)}{\partial(u, v)} = \det\begin{pmatrix} x_u & x_v \\ y_u & y_v \end{pmatrix}$$
