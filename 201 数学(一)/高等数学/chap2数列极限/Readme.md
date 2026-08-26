# chap2 数列极限

## 1. 数列极限的概念与定义体系

#### 1. 严格 $\varepsilon\text{-}N$ 定义:
设 $\{x_n\}$ 为实数列, $a$ 为常数.
$$\lim_{n \to \infty} x_n = a \iff \forall \varepsilon > 0, \exists N \in \mathbb{N}^*, \text{ 当 } n > N \text{ 时, 恒有 } |x_n - a| < \varepsilon$$
>   **几何与代数内涵:**
>   - $\varepsilon > 0$ 表示预先给定的任意小正误差容限
>   - $N$ 是依赖于 $\varepsilon$ 的序号阈值
>   - 几何意义: 对任意小开区间 $(a-\varepsilon, a+\varepsilon)$, 数列 $\{x_n\}$ 中落在该区间之外的项至多只有有限个 (前 $N$ 项), 区间内聚集了无限多项.

#### 2. 数列极限与函数极限的区别与联系:
- **离散性:** 数列 $n \in \mathbb{N}^*$, 趋向只有 $n \to +\infty$, 无 $n \to -\infty$ 或连续趋近的概念
- **导数不可用:** 无法对数列项直接关于 $n$ 求导 (不能对数列直接使用洛必达法则, 需借助海涅定理转化为连续函数)

---

## 2. 数列极限的核心性质

#### 1. 唯一性:
若数列极限存在, 则极限值必定唯一.

#### 2. 有界性:
收敛数列必定有界, 即 $\lim_{n \to \infty} x_n = a \implies \exists M > 0, \forall n \in \mathbb{N}^*, |x_n| \le M$.
>   **逆命题不成立:** 有界数列不一定收敛 (如 $x_n = (-1)^n$ 有界但在 $\pm 1$ 间振荡发散).

#### 3. 保号性:
1. 若 $\lim_{n \to \infty} x_n = a > 0$, 则 $\exists N \in \mathbb{N}^*$, 当 $n > N$ 时, 恒有 $x_n > 0$ (甚至 $x_n > \frac{a}{2}$).
2. 若 $\exists N, \forall n > N, x_n \ge 0$, 且 $\lim_{n \to \infty} x_n = a$ 存在, 则 $a \ge 0$.

#### 4. 子数列收敛性定理:
1. **定理一:** 数列 $\{x_n\}$ 收敛于 $a \iff$ 其任意子数列 $\{x_{n_k}\}$ 均收敛且极限同为 $a$.
2. **定理二 (奇偶子列判定法):**
   $$\lim_{n \to \infty} x_n = a \iff \lim_{k \to \infty} x_{2k} = a \quad \text{且} \quad \lim_{k \to \infty} x_{2k-1} = a$$
   >   **实战破局点:** 若能找到两个子数列收敛于不同极限, 或某子数列发散, 则原数列必发散.

---

## 3. 数列极限的核心判定准则

#### 1. 夹逼定理 (Squeeze Theorem):
若存在数列 $\{y_n\}, \{z_n\}$, 满足:
1. 存在 $N_0$, 当 $n > N_0$ 时, 恒有 $y_n \le x_n \le z_n$;
2. $\lim_{n \to \infty} y_n = \lim_{n \to \infty} z_n = a$;
则原数列 $\{x_n\}$ 必收敛, 且 $\lim_{n \to \infty} x_n = a$.

#### 2. 单调有界收敛准则 (Monotone Convergence Theorem):
- **单调递增且有上界** 的数列必收敛;
- **单调递减且有下界** 的数列必收敛.
>   **实战核心应用: 递推数列 $x_{n+1} = f(x_n)$ 的通解三步法:**
>   - **Step 1: 证有界性:** 利用数学归纳法或函数值域证明 $a \le x_n \le b$
>   - **Step 2: 证单调性:**
>     - 差值法: 计算 $x_{n+1} - x_n$ 判断符号
>     - 导数法: 若 $f'(x) > 0$, 则数列单调性与第一项大小关系 $x_2 - x_1$ 严格同向
>   - **Step 3: 令极限求值:** 设 $\lim_{n \to \infty} x_n = L$, 两边取极限解方程 $L = f(L)$, 结合有界性排除不合题意的根.

#### 3. 柯西收敛准则:
数列 $\{x_n\}$ 收敛 $\iff \forall \varepsilon > 0, \exists N \in \mathbb{N}^*$, 当 $m, n > N$ 时, 恒有 $|x_n - x_m| < \varepsilon$.

---

## 4. 数列与函数的桥梁与进阶定理

#### 1. 海涅定理 (Heine 归结原则):
$$\lim_{x \to x_0} f(x) = A \iff \text{对任意满足 } x_n \to x_0 \ (x_n \neq x_0) \text{ 的数列 } \{x_n\}, \text{ 恒有 } \lim_{n \to \infty} f(x_n) = A$$
>   **主要用途:**
>   - 将数列极限转化为求连续函数极限 (以便使用洛必达法则和泰勒展开)
>   - 证明函数极限不存在: 构造两个趋于 $x_0$ 的子序列 $x_n, y_n$, 使得 $f(x_n) \neq f(y_n)$.

#### 2. Stolz 定理 (离散型洛必达法则):
1. **$\frac{*}{\infty}$ 型 Stolz 定理:**
   设数列 $\{y_n\}$ 严格单调递增且 $\lim_{n \to \infty} y_n = +\infty$, 若:
   $$\lim_{n \to \infty} \frac{x_n - x_{n-1}}{y_n - y_{n-1}} = L \implies \lim_{n \to \infty} \frac{x_n}{y_n} = L$$
2. **$\frac{0}{0}$ 型 Stolz 定理:**
   设 $\lim x_n = 0, \lim y_n = 0$, 且 $\{y_n\}$ 严格单调递减, 若:
   $$\lim_{n \to \infty} \frac{x_n - x_{n+1}}{y_n - y_{n+1}} = L \implies \lim_{n \to \infty} \frac{x_n}{y_n} = L$$

---

## 5. 常见数列极限计算题型与套路

#### 1. $n$ 项和数列极限的两种核心判别通道:
1. **通道 A: 夹逼定理 (各项主体不同, 无法提取 $\frac{1}{n}$ 标准化):**
   - 典型特征: 分母中常出现 $n^2+k, \sqrt{n^2+k}$ 等项
   - 放缩法则: 将所有分母统一放缩为最小分母 (上界) 和最大分母 (下界)
     $$\frac{n}{\text{最大分母}} \le \sum_{k=1}^n \frac{1}{\text{分母}_k} \le \frac{n}{\text{最小分母}}$$
2. **通道 B: 定积分定义 (各项主体结构相同, 可提取 $\frac{1}{n}$ 并凑出 $\frac{k}{n}$):**
   $$\lim_{n \to \infty} \sum_{k=1}^n \frac{1}{n} f\left(\frac{k}{n}\right) = \int_0^1 f(x)dx$$

#### 2. $n$ 项乘积型数列极限:
- 取对数化和: $\ln\left(\prod_{k=1}^n a_k\right) = \sum_{k=1}^n \ln a_k$, 将乘积转化为求和数列极限, 算完后套回 $e^L$.

#### 3. 根式差与有理化:
- 遇到 $\sqrt{n+a} - \sqrt{n+b}$ 结构, 优先分子有理化或提公因式利用 $(1+x)^\alpha - 1 \sim \alpha x$.

---

## 6. 易错点与典型陷阱剖析

1. **未证明数列极限存在即直接设 $L$ 解方程:** 递推数列必须先用单调有界准则证明极限存在, 否则可能求出不存在的伪极限.
2. **无限项加减错误应用四则运算法则:** $\lim \sum_{k=1}^n x_k \neq \sum_{k=1}^n \lim x_k$, 四则运算仅适用于有限项.
3. **放缩过度导致夹逼定理失效:** 上下界放缩过粗导致两端极限不相等 (需保留核心主部, 仅放缩次要部分).
