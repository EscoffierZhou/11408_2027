# chap23 附录: 反常积分敛散性的综合判别法

## 1. 审敛基准与比较审敛法

1. **无穷限反常积分基准 ($p$-积分):**
   $$\int_a^{+\infty} \frac{1}{x^p} dx \ (a > 0) \implies \begin{cases} p > 1, & \text{收敛} \\ p \le 1, & \text{发散} \end{cases}$$
2. **瑕积分基准 (瑕点 $x=a$):**
   $$\int_a^b \frac{1}{(x-a)^p} dx \implies \begin{cases} p < 1, & \text{收敛} \\ p \ge 1, & \text{发散} \end{cases}$$

---

## 2. 阿贝尔判别法与狄利克雷判别法

1. **阿贝尔判别法 (Abel):**
   若 $\int_a^{+\infty} f(x)dx$ 收敛, 且 $g(x)$ 在 $[a, +\infty)$ 上单调有界, 则 $\int_a^{+\infty} f(x)g(x)dx$ 必收敛.
2. **狄利克雷判别法 (Dirichlet):**
   若 $F(A) = \int_a^A f(x)dx$ 在 $[a, +\infty)$ 上有界, 且 $g(x)$ 当 $x \to +\infty$ 时单调趋于 0, 则 $\int_a^{+\infty} f(x)g(x)dx$ 必收敛.

---

## 3. 伽马函数 ($\Gamma$) 与贝塔函数 ($\mathrm{B}$)

#### 1. 伽马函数:
$$\Gamma(s) = \int_0^{+\infty} x^{s-1}e^{-x}dx \ (s > 0)$$
- 递推公式: $\Gamma(s+1) = s\Gamma(s), \quad \Gamma(n+1) = n!, \quad \Gamma(1/2) = \sqrt{\pi}$

#### 2. 贝塔函数与联系公式:
$$\mathrm{B}(p, q) = \int_0^1 x^{p-1}(1-x)^{q-1}dx = 2\int_0^{\pi/2} \sin^{2p-1}\theta\cos^{2q-1}\theta d\theta = \frac{\Gamma(p)\Gamma(q)}{\Gamma(p+q)}$$
