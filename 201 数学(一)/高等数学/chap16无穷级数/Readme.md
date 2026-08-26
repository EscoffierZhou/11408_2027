# chap16 无穷级数

## 1. 常数项级数的概念与基本性质

#### 1. 级数收敛的严格定义:
设常数项级数 $\sum_{n=1}^\infty u_n = u_1 + u_2 + \dots + u_n + \dots$, 部分和 $S_n = \sum_{k=1}^n u_k$.
$$\sum_{n=1}^\infty u_n \text{ 收敛} \iff \lim_{n \to \infty} S_n = S \ (\text{有限实数}), \quad \text{此时级数和为 } S$$

#### 2. 级数收敛的核心性质:
1. **必要条件 (发散性快速判据):** 若级数 $\sum_{n=1}^\infty u_n$ 收敛, 则必有 $\lim_{n \to \infty} u_n = 0$.
   >   *逆命题不成立: 通项趋于0级数不一定收敛 (如调和级数 $\sum \frac{1}{n}$ 发散).*
2. **线性性质:** 若 $\sum u_n = A, \sum v_n = B$, 则 $\sum (\alpha u_n + \beta v_n) = \alpha A + \beta B$.
3. **加括号性质:** 收敛级数任意加括号后形成的新级数必收敛且和不变 (加括号后收敛, 原级数不一定收敛).

---

## 2. 正项级数敛散性审敛法全集

#### 1. 比较审敛法与极限形式:
- **基准级数:**
  - $p$-级数: $\sum_{n=1}^\infty \frac{1}{n^p} \implies p > 1 \text{ 收敛}, p \le 1 \text{ 发散}$
  - 几何级数 (等比级数): $\sum_{n=0}^\infty a q^n \implies |q| < 1 \text{ 收敛}, |q| \ge 1 \text{ 发散}$
- **极限形式比较审敛法:**
  设 $\sum u_n, \sum v_n$ 为正项级数, 且 $\lim_{n \to \infty} \frac{u_n}{v_n} = l$:
  1. 若 $0 < l < +\infty \implies \sum u_n$ 与 $\sum v_n$ **同敛散**;
  2. 若 $l = 0$ 且 $\sum v_n$ 收敛 $\implies \sum u_n$ **必收敛**;
  3. 若 $l = +\infty$ 且 $\sum v_n$ 发散 $\implies \sum u_n$ **必发散**.

#### 2. 比值审敛法 (达朗贝尔 D'Alembert) 与根值审敛法 (柯西 Cauchy):
设正项级数 $\sum u_n$, 计算 $\lim_{n \to \infty} \frac{u_{n+1}}{u_n} = \rho$ 或 $\lim_{n \to \infty} \sqrt[n]{u_n} = \rho$:
- 若 $\mathbf{\rho < 1} \implies$ 级数**收敛**
- 若 $\mathbf{\rho > 1} \implies$ 级数**发散**
- 若 $\mathbf{\rho = 1} \implies$ **审敛法失效** (必须改用比较审敛法或积分审敛法)

---

## 3. 交错级数与任意项级数

#### 1. 莱布尼茨定理 (Leibniz Test):
交错级数 $\sum_{n=1}^\infty (-1)^{n-1} u_n \ (u_n > 0)$, 若满足:
1. 单调递减: $u_{n+1} \le u_n \ (\forall n \ge N)$;
2. 通项趋于零: $\lim_{n \to \infty} u_n = 0$;
则该交错级数**必收敛**, 且其余项满足 $|r_n| = |S - S_n| \le u_{n+1}$.

#### 2. 绝对收敛与条件收敛:
- **绝对收敛:** 若正项级数 $\sum |u_n|$ 收敛, 则原级数 $\sum u_n$ 必收敛, 称其为**绝对收敛**.
- **条件收敛:** 若原级数 $\sum u_n$ 收敛, 但 $\sum |u_n|$ 发散, 称原级数为**条件收敛**.

---

## 4. 幂级数理论体系

#### 1. 阿贝尔定理 (Abel):
若幂级数 $\sum a_n x^n$ 在 $x_0 \neq 0$ 处收敛, 则对所有 $|x| < |x_0|$ 的 $x$, 级数绝对收敛;
若在 $x_1$ 处发散, 则对所有 $|x| > |x_1|$ 的 $x$, 级数必发散.

#### 2. 收敛半径 $R$ 与收敛域求法:
$$\rho = \lim_{n \to \infty} \left|\frac{a_{n+1}}{a_n}\right| \quad \text{或} \quad \rho = \lim_{n \to \infty} \sqrt[n]{|a_n|} \implies R = \frac{1}{\rho}$$
- 收敛区间为 $(-R, R)$.
- **求收敛域必须单独代入端点 $x = \pm R$ 进行数项级数审敛!**

#### 3. 幂级数的逐项求导与求积性质:
和函数 $S(x) = \sum_{n=0}^\infty a_n x^n$ 在收敛区间 $(-R, R)$ 内:
$$S'(x) = \sum_{n=1}^\infty n a_n x^{n-1}, \quad \int_0^x S(t)dt = \sum_{n=0}^\infty \frac{a_n}{n+1}x^{n+1}$$
*(逐项微积分后所得新幂级数的收敛半径 $R$ 保持不变)*

---

## 5. 常见麦克劳林展开公式表与求和函数

| 展开函数 $f(x)$ | 麦克劳林级数展开式 | 收敛域 |
| :--- | :--- | :--- |
| $\frac{1}{1-x}$ | $\sum_{n=0}^\infty x^n = 1 + x + x^2 + \dots$ | $(-1, 1)$ |
| $\frac{1}{1+x}$ | $\sum_{n=0}^\infty (-1)^n x^n = 1 - x + x^2 - \dots$ | $(-1, 1)$ |
| $e^x$ | $\sum_{n=0}^\infty \frac{x^n}{n!} = 1 + x + \frac{x^2}{2!} + \dots$ | $(-\infty, +\infty)$ |
| $\sin x$ | $\sum_{n=0}^\infty (-1)^n \frac{x^{2n+1}}{(2n+1)!} = x - \frac{x^3}{3!} + \dots$ | $(-\infty, +\infty)$ |
| $\cos x$ | $\sum_{n=0}^\infty (-1)^n \frac{x^{2n}}{(2n)!} = 1 - \frac{x^2}{2!} + \dots$ | $(-\infty, +\infty)$ |
| $\ln(1+x)$ | $\sum_{n=1}^\infty (-1)^{n-1} \frac{x^n}{n} = x - \frac{x^2}{2} + \dots$ | $(-1, 1]$ |
| $\arctan x$ | $\sum_{n=0}^\infty (-1)^n \frac{x^{2n+1}}{2n+1} = x - \frac{x^3}{3} + \dots$ | $[-1, 1]$ |

---

## 6. 傅里叶级数 (Fourier Series, 数一专属)

#### 1. 狄利克雷收敛定理:
周期为 $2l$ 的函数 $f(x)$ 展开为傅里叶级数:
$$f(x) \sim \frac{a_0}{2} + \sum_{n=1}^\infty \left( a_n \cos\frac{n\pi x}{l} + b_n \sin\frac{n\pi x}{l} \right)$$
在连续点处级数收敛于 $f(x)$; 在间断点处级数收敛于 $\frac{f(x^+) + f(x^-)}{2}$.

#### 2. 傅里叶系数公式:
$$a_n = \frac{1}{l}\int_{-l}^l f(x)\cos\frac{n\pi x}{l}dx \ (n \ge 0), \quad b_n = \frac{1}{l}\int_{-l}^l f(x)\sin\frac{n\pi x}{l}dx \ (n \ge 1)$$
- 奇函数 (奇延拓) $\implies a_n = 0$, 展开为**正弦级数**;
- 偶函数 (偶延拓) $\implies b_n = 0$, 展开为**余弦级数**.

---

## 7. 易错点与典型陷阱总结

1. **缺项幂级数收敛半径套公式错误:** 如 $\sum a_n x^{2n}$, 不能直接令 $R = \lim |\frac{a_n}{a_{n+1}}|$, 必须由比值审敛法直接求 $|x|^2 < R^2 \implies |x| < R$.
2. **莱布尼茨定理忽略单调递减验证:** 仅验证 $u_n \to 0$ 不够, 必须确认 $u_n$ 单调递减.
3. **求和函数端点未验证:** 和函数在收敛区间端点处若级数收敛, 由阿贝尔第二定理可直接代入端点求值.
