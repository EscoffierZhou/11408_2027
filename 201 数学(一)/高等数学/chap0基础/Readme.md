# chap0 基础

## 1. 逻辑关系与数学命题

#### 逻辑命题的基本分类:
1. **充分条件:** 若 $P \implies Q$, 则称 $P$ 是 $Q$ 的充分条件 ($P$ 成立则 $Q$ 必成立)
2. **必要条件:** 若 $Q \implies P$, 则称 $P$ 是 $Q$ 的必要条件 ($Q$ 成立必须有 $P$ 成立; 等价于 $\neg P \implies \neg Q$)
3. **充要条件:** 若 $P \iff Q$, 则称 $P$ 与 $Q$ 互为充要条件 (逻辑等价)
4. **逆否命题同真假:** 原命题 $P \implies Q \iff$ 逆否命题 $\neg Q \implies \neg P$

>   **易错警示:**
>   - " $A$ 是 $B$ 的必要条件" $\implies B \implies A$, 切勿写反为 $A \implies B$
>   - 证明 " $A \iff B$ " 必须双向证明: 先证充分性 ($A \implies B$), 再证必要性 ($B \implies A$)

---

## 2. 常用代数恒等式与因式分解

#### 1. 幂差与幂和公式:
- 平方差公式: $a^2 - b^2 = (a-b)(a+b)$
- 立方差公式: $a^3 - b^3 = (a-b)(a^2 + ab + b^2)$
- 立方和公式: $a^3 + b^3 = (a+b)(a^2 - ab + b^2)$
- 高阶幂差公式 ($n \in \mathbb{N}^*$):
  $$a^n - b^n = (a-b)(a^{n-1} + a^{n-2}b + a^{n-3}b^2 + \dots + ab^{n-2} + b^{n-1})$$
- 高阶幂和公式 ($n$ 为奇数):
  $$a^n + b^n = (a+b)(a^{n-1} - a^{n-2}b + a^{n-3}b^2 - \dots - ab^{n-2} + b^{n-1})$$

#### 2. 二项式定理:
$$(a+b)^n = \sum_{k=0}^n C_n^k a^{n-k}b^k = C_n^0 a^n + C_n^1 a^{n-1}b + \dots + C_n^n b^n$$
其中组合数 $C_n^k = \frac{n!}{k!(n-k)!}$, 满足 $C_n^k = C_n^{n-k}$, $C_{n+1}^k = C_n^k + C_n^{k-1}$

#### 3. 裂项相消常用恒等式:
- $\frac{1}{n(n+1)} = \frac{1}{n} - \frac{1}{n+1}$
- $\frac{1}{n(n+k)} = \frac{1}{k}\left(\frac{1}{n} - \frac{1}{n+k}\right)$
- $\frac{1}{(2n-1)(2n+1)} = \frac{1}{2}\left(\frac{1}{2n-1} - \frac{1}{2n+1}\right)$
- $\frac{1}{n(n+1)(n+2)} = \frac{1}{2}\left[\frac{1}{n(n+1)} - \frac{1}{(n+1)(n+2)}\right]$

---

## 3. 核心不等式体系

#### 1. 均值不等式链 (对任意正实数 $a, b > 0$):
$$\frac{2}{\frac{1}{a} + \frac{1}{b}} \le \sqrt{ab} \le \frac{a+b}{2} \le \sqrt{\frac{a^2+b^2}{2}}$$
$$\text{调和平均 } (H) \le \text{几何平均 } (G) \le \text{算术平均 } (A) \le \text{平方平均 } (Q)$$
>   **等号成立条件:** 当且仅当 $a = b$ 时等号成立
>   $n$ 元推广: 对正数 $x_1, x_2, \dots, x_n > 0$, 有 $\sqrt[n]{x_1 x_2 \dots x_n} \le \frac{x_1 + x_2 + \dots + x_n}{n}$

#### 2. 绝对值三角不等式:
$$||a| - |b|| \le |a \pm b| \le |a| + |b|$$
- 左侧等号成立条件: $ab \ge 0$ 且 $|a| \ge |b|$ (同号放缩)
- 右侧等号成立条件: $ab \ge 0$ (同号)

#### 3. 柯西-施瓦茨不等式 (Cauchy-Schwarz):
- **离散形式:** 对任意实数 $a_i, b_i$:
  $$\left(\sum_{i=1}^n a_i b_i\right)^2 \le \left(\sum_{i=1}^n a_i^2\right) \left(\sum_{i=1}^n b_i^2\right)$$
  等号成立条件: $\frac{a_1}{b_1} = \frac{a_2}{b_2} = \dots = \frac{a_n}{b_n}$
- **连续积分形式:** 设 $f(x), g(x)$ 在 $[a,b]$ 上可积, 则:
  $$\left(\int_a^b f(x)g(x)dx\right)^2 \le \left(\int_a^b f^2(x)dx\right) \left(\int_a^b g^2(x)dx\right)$$

#### 4. 伯努利不等式 (Bernoulli):
- 对任意 $x > -1$, 当 $\alpha \ge 1$ 或 $\alpha \le 0$ 时: $(1+x)^\alpha \ge 1 + \alpha x$
- 当 $0 \le \alpha \le 1$ 时: $(1+x)^\alpha \le 1 + \alpha x$

---

## 4. 函数的四大核心特性

#### 1. 单调性:
- **严格单调增:** $\forall x_1 < x_2 \implies f(x_1) < f(x_2)$
- **微积分判据:** 若在区间 $I$ 上 $f'(x) \ge 0$ 且在任意子区间内不恒为0, 则 $f(x)$ 在 $I$ 上严格单调递增

#### 2. 奇偶性:
- **奇函数:** 定义域关于原点对称, 满足 $f(-x) = -f(x)$, 必有 $f(0) = 0$ (若在 $x=0$ 处有定义); 图形关于原点中心对称
- **偶函数:** 定义域关于原点对称, 满足 $f(-x) = f(x)$; 图形关于 $y$ 轴对称
- **重要运算性质:**
  - 奇 $\times$ 奇 $=$ 偶, 奇 $\times$ 偶 $=$ 奇, 偶 $\times$ 偶 $=$ 偶
  - 奇函数求导 $\implies$ 偶函数; 偶函数求导 $\implies$ 奇函数
  - 连续奇函数的变上限积分 $\int_0^x f(t)dt \implies$ 偶函数
  - 连续偶函数的变上限积分 $\int_0^x f(t)dt \implies$ 奇函数 (必须以下限0为起点!)

#### 3. 周期性:
- **基本定义:** 若存在常数 $T > 0$, 使得 $\forall x \in D$, 恒有 $f(x+T) = f(x)$, 则称 $f(x)$ 为周期函数, 最小正周期为 $T$
- **常见推论与对称性导出周期:**
  - 若 $f(x+a) = -f(x)$, 则 $T = 2a$
  - 若 $f(x)$ 图形关于直线 $x=a$ 和 $x=b$ ($a \neq b$) 均对称, 则 $T = 2|a-b|$
  - 若 $f(x)$ 图形关于点 $(a,0)$ 和点 $(b,0)$ 均中心对称, 则 $T = 2|a-b|$
  - 若 $f(x)$ 图形关于直线 $x=a$ 轴对称, 且关于点 $(b,0)$ 中心对称, 则 $T = 4|a-b|$
- **周期函数的积分性质:**
  - 若 $f(x)$ 以 $T$ 为周期且连续, 则对任意实数 $a$:
    $$\int_a^{a+T} f(x)dx = \int_0^T f(x)dx \quad (\text{积分值与积分区间起点无关})$$
  - 设 $f(x)$ 连续且以 $T$ 为周期, 则原函数 $F(x) = \int_0^x f(t)dt$ 为周期函数 $\iff \int_0^T f(t)dt = 0$

#### 4. 有界性:
- **定义:** $\exists M > 0, \forall x \in D, |f(x)| \le M$
- **判定准则:**
  - 闭区间连续函数必有界 (最值定理)
  - 开区间连续函数有界 $\iff$ 区间两个端点的单侧极限均存在且为有限实数

---

## 5. 初等函数与三角函数公式大观

#### 1. 和差角公式:
- $\sin(\alpha \pm \beta) = \sin\alpha\cos\beta \pm \cos\alpha\sin\beta$
- $\cos(\alpha \pm \beta) = \cos\alpha\cos\beta \mp \sin\alpha\sin\beta$
- $\tan(\alpha \pm \beta) = \frac{\tan\alpha \pm \tan\beta}{1 \mp \tan\alpha\tan\beta}$

#### 2. 倍角与降幂公式:
- $\sin 2\alpha = 2\sin\alpha\cos\alpha$
- $\cos 2\alpha = \cos^2\alpha - \sin^2\alpha = 2\cos^2\alpha - 1 = 1 - 2\sin^2\alpha$
- 降幂公式: $\sin^2\alpha = \frac{1 - \cos 2\alpha}{2}, \quad \cos^2\alpha = \frac{1 + \cos 2\alpha}{2}$
- $\tan 2\alpha = \frac{2\tan\alpha}{1 - \tan^2\alpha}$

#### 3. 辅助角公式:
$$a\sin x + b\cos x = \sqrt{a^2+b^2}\sin(x + \varphi), \quad \text{其中 } \cos\varphi = \frac{a}{\sqrt{a^2+b^2}}, \sin\varphi = \frac{b}{\sqrt{a^2+b^2}}$$

#### 4. 积化和差与和差化积公式:
- **积化和差:**
  $$\sin\alpha\cos\beta = \frac{1}{2}[\sin(\alpha+\beta) + \sin(\alpha-\beta)]$$
  $$\cos\alpha\cos\beta = \frac{1}{2}[\cos(\alpha+\beta) + \cos(\alpha-\beta)]$$
  $$\sin\alpha\sin\beta = -\frac{1}{2}[\cos(\alpha+\beta) - \cos(\alpha-\beta)]$$
- **和差化积:**
  $$\sin x + \sin y = 2\sin\frac{x+y}{2}\cos\frac{x-y}{2}$$
  $$\sin x - \sin y = 2\cos\frac{x+y}{2}\sin\frac{x-y}{2}$$
  $$\cos x + \cos y = 2\cos\frac{x+y}{2}\cos\frac{x-y}{2}$$
  $$\cos x - \cos y = -2\sin\frac{x+y}{2}\sin\frac{x-y}{2}$$

#### 5. 万能代换公式 (令 $t = \tan\frac{x}{2}$):
$$\sin x = \frac{2t}{1+t^2}, \quad \cos x = \frac{1-t^2}{1+t^2}, \quad \tan x = \frac{2t}{1-t^2}, \quad dx = \frac{2}{1+t^2}dt$$

#### 6. 反三角函数核心恒等式:
- $\arcsin x + \arccos x = \frac{\pi}{2} \quad (x \in [-1, 1])$
- $\arctan x + \text{arccot } x = \frac{\pi}{2} \quad (x \in \mathbb{R})$
- $\arctan x + \arctan\frac{1}{x} = \begin{cases} \frac{\pi}{2}, & x > 0 \\ -\frac{\pi}{2}, & x < 0 \end{cases}$

#### 7. 双曲函数与反双曲函数:
- 双曲正弦: $\sinh x = \frac{e^x - e^{-x}}{2}$, 奇函数
- 双曲余弦: $\cosh x = \frac{e^x + e^{-x}}{2}$, 偶函数
- 恒等式: $\cosh^2 x - \sinh^2 x = 1, \quad 1 - \tanh^2 x = \text{sech}^2 x$
- 反双曲正弦: $\text{arsh } x = \ln(x + \sqrt{x^2+1})$
- 反双曲余弦: $\text{arch } x = \ln(x + \sqrt{x^2-1}) \quad (x \ge 1)$

---

## 6. 坐标系与几何变换

#### 1. 极坐标与直角坐标转换:
$$x = r\cos\theta, \quad y = r\sin\theta, \quad x^2 + y^2 = r^2, \quad \tan\theta = \frac{y}{x}$$
- 面积微元: $d\sigma = dx dy = r dr d\theta$
- 极坐标曲线弧长微元: $ds = \sqrt{r^2 + (r')^2} d\theta$

#### 2. 参数方程表示法:
$$\begin{cases} x = x(t) \\ y = y(t) \end{cases} \implies \frac{dy}{dx} = \frac{y'(t)}{x'(t)}, \quad ds = \sqrt{[x'(t)]^2 + [y'(t)]^2} dt$$

---

## 7. 易错点与典型陷阱总结

1. **忽视函数的自然定义域:** 在化简分式、对数真数、分母时未保留原有定义域限制
2. **反三角函数主值域混淆:** $\arcsin x \in [-\frac{\pi}{2}, \frac{\pi}{2}]$, $\arccos x \in [0, \pi]$, $\arctan x \in (-\frac{\pi}{2}, \frac{\pi}{2})$
3. **周期函数原函数的周期性:** 误以为周期函数的原函数必定是周期函数, 忽略了充要条件 $\int_0^T f(t)dt = 0$
4. **绝对值脱壳正负号丢失:** 根式开方 $\sqrt{x^2} = |x|$, 当 $x < 0$ 时必须为 $-x$
