# chap15 微分方程

## 1. 微分方程基本概念

- **微分方程阶数:** 方程中所含未知函数导数的最高阶数.
- **通解:** 含有独立任意常数的个数恰好等于方程阶数的解.
- **特解:** 通过定解条件 (初始条件 $y(x_0) = y_0, y'(x_0) = y'_0$) 唯一确定任意常数后的解.

---

## 2. 一阶微分方程的标准求解模型

#### 1. 可分离变量方程:
$$g(y)dy = f(x)dx \implies \int g(y)dy = \int f(x)dx + C$$

#### 2. 齐次方程 ($\frac{dy}{dx} = \varphi\left(\frac{y}{x}\right)$):
- 令 $u = \frac{y}{x} \implies y = ux, \frac{dy}{dx} = u + x\frac{du}{dx}$
- 代入得: $u + x\frac{du}{dx} = \varphi(u) \implies \frac{du}{\varphi(u) - u} = \frac{dx}{x}$, 分离变量求解.

#### 3. 一阶线性非齐次方程 ($y' + P(x)y = Q(x)$):
- **通解公式 (积分因子法 / 常数变易法):**
  $$y = e^{-\int P(x)dx} \left[ \int Q(x) e^{\int P(x)dx} dx + C \right]$$

#### 4. 伯努利方程 ($y' + P(x)y = Q(x)y^n \ (n \neq 0, 1)$):
1. 两边同除以 $y^n$: $y^{-n}y' + P(x)y^{1-n} = Q(x)$
2. 令新变量 $z = y^{1-n} \implies z' = (1-n)y^{-n}y'$
3. 转化为一阶线性微分方程:
   $$\frac{dz}{dx} + (1-n)P(x)z = (1-n)Q(x)$$

---

## 3. 可降阶的三类高阶微分方程

1. **$y^{(n)} = f(x)$ 型:**
   连续积分 $n$ 次即可求出通解.
2. **$y'' = f(x, y')$ 型 (缺 $y$ 型):**
   令 $p = y' = \frac{dy}{dx} \implies y'' = \frac{dp}{dx} = p'$, 化为关于 $p(x)$ 的一阶方程:
   $$\frac{dp}{dx} = f(x, p)$$
3. **$y'' = f(y, y')$ 型 (缺 $x$ 型):**
   令 $p = y' \implies y'' = \frac{dp}{dx} = \frac{dp}{dy}\frac{dy}{dx} = p\frac{dp}{dy}$, 化为关于 $p(y)$ 的一阶方程:
   $$p\frac{dp}{dy} = f(y, p)$$

---

## 4. 高阶线性微分方程解的结构理论

#### 1. 齐次线性方程 $y'' + P(x)y' + Q(x)y = 0$:
若 $y_1(x), y_2(x)$ 为方程的两个**线性无关特解** ($\frac{y_1}{y_2} \neq \text{常数}$), 则齐次通解为:
$$Y(x) = C_1 y_1(x) + C_2 y_2(x)$$

#### 2. 非齐次线性方程 $y'' + P(x)y' + Q(x)y = f(x)$:
- **解的结构定理:** 非齐次方程通解 $=$ 对应齐次方程通解 $Y(x)$ $+$ 非齐次方程的一个特解 $y^*(x)$:
  $$y(x) = C_1 y_1(x) + C_2 y_2(x) + y^*(x)$$
- **解的叠加原理:** 若非齐次项 $f(x) = f_1(x) + f_2(x)$, 对应特解分别为 $y_1^*(x), y_2^*(x)$, 则原方程特解为 $y^*(x) = y_1^*(x) + y_2^*(x)$.

---

## 5. 常系数线性微分方程求解体系

#### 1. 二阶常系数齐次方程 $y'' + py' + qy = 0$:
列特征方程: $r^2 + pr + q = 0$, 判别式 $\Delta = p^2 - 4q$:

| 特征根 $r_1, r_2$ 的情况 | 齐次方程通解 $Y(x)$ 形式 |
| :--- | :--- |
| 两个不相等实根 $r_1 \neq r_2 \ (\Delta > 0)$ | $Y = C_1 e^{r_1 x} + C_2 e^{r_2 x}$ |
| 两个相等实根 $r_1 = r_2 = r \ (\Delta = 0)$ | $Y = (C_1 + C_2 x)e^{rx}$ |
| 一对共轭复根 $r_{1,2} = \alpha \pm i\beta \ (\Delta < 0)$ | $Y = e^{\alpha x}(C_1 \cos\beta x + C_2 \sin\beta x)$ |

#### 2. 二阶常系数非齐次方程 $y'' + py' + qy = f(x)$ 的待定系数法:
1. **模型 I: $f(x) = P_m(x)e^{\lambda x}$ ($P_m(x)$ 为 $m$ 次多项式):**
   设特解形式为:
   $$y^*(x) = x^k Q_m(x)e^{\lambda x}$$
   其中 $Q_m(x)$ 为待定系数的 $m$ 次一般多项式, $k$ 是 $\lambda$ 作为特征方程根的重数:
   - 若 $\lambda$ 不是特征根 $\implies k = 0$;
   - 若 $\lambda$ 是单特征根 $\implies k = 1$;
   - 若 $\lambda$ 是二重特征根 $\implies k = 2$.
2. **模型 II: $f(x) = e^{\alpha x}[P_l(x)\cos\beta x + Q_n(x)\sin\beta x]$:**
   设特解形式为:
   $$y^*(x) = x^k e^{\alpha x}[R_m(x)\cos\beta x + S_m(x)\sin\beta x]$$
   其中 $m = \max(l, n)$, $k$ 是 $\alpha \pm i\beta$ 作为特征根的重数:
   - 若 $\alpha \pm i\beta$ 不是特征根 $\implies k = 0$;
   - 若 $\alpha \pm i\beta$ 是特征根 $\implies k = 1$.

---

## 6. 欧拉方程 (Euler Equation, 数一/数二)

方程形式: $x^2 \frac{d^2y}{dx^2} + p x \frac{dy}{dx} + q y = f(x) \ (x > 0)$
- **标准变换:** 令 $x = e^t \iff t = \ln x$, 则:
  $$x\frac{dy}{dx} = \frac{dy}{dt}, \quad x^2\frac{d^2y}{dx^2} = \frac{d^2y}{dt^2} - \frac{dy}{dt}$$
- 代入后化为关于 $t$ 的常系数线性微分方程, 解出 $y(t)$ 后将 $t = \ln x$ 反代回即可.

---

## 7. 易错点与典型陷阱总结

1. **缺 $x$ 型降阶链式求导遗漏 $p$:** 误将 $y''$ 算成 $\frac{dp}{dy}$, 正确公式为 $y'' = p\frac{dp}{dy}$.
2. **待定系数法特解重数 $k$ 判定错误:** 必须严格比对 $\lambda$ 或 $\alpha \pm i\beta$ 是否为特征根.
3. **一阶线性通解公式符号记错:** $e^{-\int Pdx}$ 与 $e^{+\int Pdx}$ 的正负号切勿颠倒.
