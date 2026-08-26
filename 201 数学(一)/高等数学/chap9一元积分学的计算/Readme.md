# chap9 一元积分学的计算

## 1. 基本积分表

| 常用被积式 | 不定积分结果 | 常用被积式 | 不定积分结果 |
| :--- | :--- | :--- | :--- |
| $\int 0 dx$ | $C$ | $\int x^\alpha dx \ (\alpha \ne -1)$ | $\frac{x^{\alpha+1}}{\alpha+1} + C$ |
| $\int \frac{1}{x} dx$ | $\ln|x| + C$ | $\int e^x dx$ | $e^x + C$ |
| $\int a^x dx$ | $\frac{a^x}{\ln a} + C$ | $\int \sin x dx$ | $-\cos x + C$ |
| $\int \cos x dx$ | $\sin x + C$ | $\int \sec^2 x dx$ | $\tan x + C$ |
| $\int \csc^2 x dx$ | $-\cot x + C$ | $\int \sec x \tan x dx$ | $\sec x + C$ |
| $\int \csc x \cot x dx$ | $-\csc x + C$ | $\int \sec x dx$ | $\ln|\sec x + \tan x| + C$ |
| $\int \csc x dx$ | $\ln|\csc x - \cot x| + C$ | $\int \tan x dx$ | $-\ln|\cos x| + C$ |
| $\int \frac{1}{a^2+x^2} dx$ | $\frac{1}{a}\arctan\frac{x}{a} + C$ | $\int \frac{1}{a^2-x^2} dx$ | $\frac{1}{2a}\ln\left|\frac{a+x}{a-x}\right| + C$ |
| $\int \frac{1}{\sqrt{a^2-x^2}} dx$ | $\arcsin\frac{x}{a} + C$ | $\int \frac{1}{\sqrt{x^2 \pm a^2}} dx$ | $\ln|x + \sqrt{x^2 \pm a^2}| + C$ |

---

## 2. 第一类换元法 (凑微分法全集)

#### 1. 核心思想:
$$\int f(\varphi(x))\varphi'(x)dx = \int f(\varphi(x))d(\varphi(x)) = F(\varphi(x)) + C$$

#### 2. 常用微元凑配图谱:
1. 幂函数凑微分: $x^{n-1}dx = \frac{1}{n}d(x^n), \quad \frac{1}{\sqrt{x}}dx = 2d(\sqrt{x}), \quad \frac{1}{x^2}dx = -d\left(\frac{1}{x}\right)$
2. 三角函数凑微分: $\sin x dx = -d(\cos x), \quad \cos x dx = d(\sin x), \quad \sec^2 x dx = d(\tan x), \quad \csc^2 x dx = -d(\cot x)$
3. 指数与对数凑微分: $e^x dx = d(e^x), \quad \frac{1}{x}dx = d(\ln x)$
4. 反三角函数凑微分: $\frac{1}{1+x^2}dx = d(\arctan x), \quad \frac{1}{\sqrt{1-x^2}}dx = d(\arcsin x)$

---

## 3. 第二类换元法 (代换消根号)

#### 1. 三大经典三角代换:
1. 被积式含 $\sqrt{a^2 - x^2} \implies$ 令 $x = a\sin t \quad (t \in (-\frac{\pi}{2}, \frac{\pi}{2})) \implies \sqrt{a^2-x^2} = a\cos t, dx = a\cos t dt$
2. 被积式含 $\sqrt{a^2 + x^2} \implies$ 令 $x = a\tan t \quad (t \in (-\frac{\pi}{2}, \frac{\pi}{2})) \implies \sqrt{a^2+x^2} = a\sec t, dx = a\sec^2 t dt$
3. 被积式含 $\sqrt{x^2 - a^2} \implies$ 令 $x = a\sec t \quad (t \in [0, \pi], t \ne \frac{\pi}{2}) \implies \sqrt{x^2-a^2} = a\tan t, dx = a\sec t \tan t dt$

#### 2. 根式代换与倒代换:
- **简单根式代换:** 被积函数含有 $\sqrt[n]{ax+b}$, 令 $t = \sqrt[n]{ax+b} \implies x = \frac{t^n-b}{a}, dx = \frac{n}{a}t^{n-1}dt$
- **倒代换 (适用于分母次数显著高于分子或根号外幂次高):**
  令 $x = \frac{1}{t}, dx = -\frac{1}{t^2}dt$

---

## 4. 分部积分法与表格积分法

#### 1. 分部积分基本公式:
$$\int u dv = uv - \int v du, \quad \int_a^b u dv = [uv]_a^b - \int_a^b v du$$
- **选取 $u(x)$ 优先顺序口诀: “反、对、幂、指、三”**
  - 反三角函数 > 对数函数 > 幂函数 > 指数函数 > 三角函数
  - 排在前面的选为 $u$ (求导降阶), 排在后面的凑成 $dv$ (容易积分).

#### 2. 表格积分法 (Tabular Integration 极速秒杀):
适用于形如 $\int P_n(x)e^{ax}dx$, $\int P_n(x)\sin ax dx$, $\int P_n(x)\cos ax dx$ ($P_n(x)$ 为多项式):

| 符号 | $u(x)$ 及其连续导数 | $v'(x)$ 及其连续原函数 |
| :---: | :---: | :---: |
| $+$ | $P_n(x)$ | $g(x)$ |
| $-$ | $P_n'(x)$ | $G_1(x) = \int g(x)dx$ |
| $+$ | $P_n''(x)$ | $G_2(x) = \int G_1(x)dx$ |
| $\dots$ | $\dots \to 0$ | $\dots$ |

>   **结果等于对角线相乘之代数和:** $\int u dv = (+1) \cdot u \cdot G_1 + (-1) \cdot u' \cdot G_2 + (+1) \cdot u'' \cdot G_3 + \dots$

---

## 5. 有理函数积分与三角有理式积分

#### 1. 有理函数分解真分式:
对真分式 $\frac{P(x)}{Q(x)}$:
- 单实根因式 $(x-a) \implies \frac{A}{x-a}$
- 重实根因式 $(x-a)^k \implies \frac{A_1}{x-a} + \frac{A_2}{(x-a)^2} + \dots + \frac{A_k}{(x-a)^k}$
- 二次不可约因式 $(x^2+px+q) \implies \frac{Bx+C}{x^2+px+q}$

#### 2. 三角有理式万能代换 (Weierstrass Substitution):
令 $t = \tan\frac{x}{2}$, 则:
$$\sin x = \frac{2t}{1+t^2}, \quad \cos x = \frac{1-t^2}{1+t^2}, \quad \tan x = \frac{2t}{1-t^2}, \quad dx = \frac{2}{1+t^2}dt$$

---

## 6. 定积分计算的四大神技

#### 1. 对称区间奇偶化简:
$$\int_{-a}^a f(x)dx = \begin{cases} 2\int_0^a f(x)dx, & f(x) \text{ 为偶函数} \\ 0, & f(x) \text{ 为奇函数} \end{cases}$$

#### 2. 区间再现公式 (King's Property):
$$\int_a^b f(x)dx = \int_a^b f(a+b-x)dx$$
- **经典推论 1:** $\int_0^\pi x f(\sin x)dx = \frac{\pi}{2}\int_0^\pi f(\sin x)dx$
- **经典推论 2:** $\int_0^{\pi/2} \frac{f(\sin x)}{f(\sin x) + f(\cos x)}dx = \frac{\pi}{4}$

#### 3. 华里士公式 (Wallis / 点火公式):
$$I_n = \int_0^{\pi/2} \sin^n x dx = \int_0^{\pi/2} \cos^n x dx = \begin{cases} \frac{n-1}{n}\frac{n-3}{n-2}\dots\frac{1}{2}\cdot\frac{\pi}{2}, & n \text{ 为正偶数} \\ \frac{n-1}{n}\frac{n-3}{n-2}\dots\frac{2}{3}\cdot 1, & n \text{ 为正奇数} \end{cases}$$
- 周期推广: $\int_0^\pi \sin^n x dx = 2I_n, \quad \int_0^{2\pi} |\sin^n x| dx = 4I_n$

#### 4. 周期函数平移不变性:
设 $f(x)$ 以 $T$ 为周期, 则对任意实数 $a$:
$$\int_a^{a+T} f(x)dx = \int_0^T f(x)dx, \quad \int_0^{nT} f(x)dx = n\int_0^T f(x)dx \ (n \in \mathbb{N}^*)$$

---

## 7. 易错点与典型陷阱总结

1. **第二类换元法定积分换元漏换上下限:** 定积分换元必须同时换限, 且新变量区间内代换函数必须单调可导.
2. **三角代换辅助三角形反代漏根号:** 不定积分求出 $t$ 的表达式后, 必须画直角三角形准确反代回 $x$.
3. **有理分式假分式未先化为带余真分式:** 分子次数 $\ge$ 分母次数时, 必须先用多项式长除法分离整式部分.
