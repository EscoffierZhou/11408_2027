# chap1 函数极限与连续

## 1. 函数极限的概念与定义体系

#### 1. 严格 $\varepsilon\text{-}\delta$ 与 $\varepsilon\text{-}X$ 定义:
1. **$x \to x_0$ 时的极限:**
   $$\lim_{x \to x_0} f(x) = A \iff \forall \varepsilon > 0, \exists \delta > 0, \text{ 当 } 0 < |x - x_0| < \delta \text{ 时, 恒有 } |f(x) - A| < \varepsilon$$
   - 去心邻域 $\mathring{U}(x_0, \delta) = (x_0-\delta, x_0) \cup (x_0, x_0+\delta)$: 极限值 $A$ 仅与 $x_0$ 附近的趋势有关, 与 $f(x_0)$ 是否有定义及取值无关
2. **$x \to \infty$ 时的极限:**
   $$\lim_{x \to \infty} f(x) = A \iff \forall \varepsilon > 0, \exists X > 0, \text{ 当 } |x| > X \text{ 时, 恒有 } |f(x) - A| < \varepsilon$$
3. **单侧极限与充要条件:**
   - 左极限: $\lim_{x \to x_0^-} f(x) = f(x_0^-) = A \iff \forall \varepsilon > 0, \exists \delta > 0, \text{ 当 } x_0 - \delta < x < x_0 \text{ 时, } |f(x) - A| < \varepsilon$
   - 右极限: $\lim_{x \to x_0^+} f(x) = f(x_0^+) = A \iff \forall \varepsilon > 0, \exists \delta > 0, \text{ 当 } x_0 < x < x_0 + \delta \text{ 时, } |f(x) - A| < \varepsilon$
   - **核心充要定理:**
     $$\lim_{x \to x_0} f(x) = A \iff \lim_{x \to x_0^+} f(x) = \lim_{x \to x_0^-} f(x) = A$$
   >   **必须分左右极限讨论的4大典型结构:**
   >   - 分段函数在分界点处
   >   - 含有绝对值的式子 $|x-a|$ 在 $x \to a$ 时
   >   - 含有 $e^{\frac{1}{x-a}}$ 的式子 ($x \to a^+$ 时趋于 $+\infty$, $x \to a^-$ 时趋于 $0$)
   >   - 含有 $\arctan\frac{1}{x-a}$ 的式子 ($x \to a^+$ 时趋于 $\frac{\pi}{2}$, $x \to a^-$ 时趋于 $-\frac{\pi}{2}$)

---

## 2. 函数极限的核心性质

#### 1. 唯一性:
若极限 $\lim_{x \to x_0} f(x)$ 存在, 则其极限值必唯一.

#### 2. 局部有界性:
若 $\lim_{x \to x_0} f(x) = A$ (有限实数), 则存在 $\delta > 0$ 及常数 $M > 0$, 使得当 $x \in \mathring{U}(x_0, \delta)$ 时, 恒有 $|f(x)| \le M$.
>   **重要推论:**
>   - 局部有界是极限存在的必要条件而非充分条件 (振荡有界函数如 $\sin\frac{1}{x}$ 有界但极限不存在)
>   - 若函数在去心邻域内无界, 则该点极限必不存在

#### 3. 局部保号性:
1. **正向定理 (严格大于0):**
   若 $\lim_{x \to x_0} f(x) = A > 0$, 则 $\exists \delta > 0$, 当 $x \in \mathring{U}(x_0, \delta)$ 时, 恒有 $f(x) > 0$ (甚至 $f(x) > \frac{A}{2}$).
2. **逆向定理 (弱保号性, 带等号):**
   若在 $\mathring{U}(x_0, \delta)$ 内恒有 $f(x) \ge 0$ (或 $f(x) > 0$), 且 $\lim_{x \to x_0} f(x) = A$ 存在, 则必有 $A \ge 0$.
>   **实战核心应用: 绝对值脱壳法**
>   - 若 $\lim_{x \to 0}\frac{f(x)}{x} = 2 > 0$, 则在 $x=0$ 邻域内 $\frac{f(x)}{x} > 0 \implies f(x)$ 与 $x$ 同号
>   - 当 $x \to 0^+$ 时 $f(x) > 0 \implies |f(x)| = f(x)$; 当 $x \to 0^-$ 时 $f(x) < 0 \implies |f(x)| = -f(x)$

#### 4. 四则运算法则与成立前提:
若 $\lim f(x) = A, \lim g(x) = B$, 则:
$$\lim [f(x) \pm g(x)] = A \pm B, \quad \lim [f(x)g(x)] = AB, \quad \lim \frac{f(x)}{g(x)} = \frac{A}{B} \ (B \ne 0)$$
>   **四则运算致命陷阱:**
>   - **加减拆分死穴:** 拆开后的每一项极限必须均存在, 方可拆开计算.
>   - **乘除提取法则:** 乘除法中极限为非零常数的因子可优先单独计算并提出来.
>   - **单项推导法则:** 若 $\lim [f(x)+g(x)]$ 存在且 $\lim f(x)$ 存在 $\implies \lim g(x)$ 必存在.

#### 5. 复合函数极限运算法则:
设 $\lim_{x \to x_0} g(x) = u_0$, 且 $\lim_{u \to u_0} f(u) = A$. 若满足下列条件之一:
1. 外层函数 $f(u)$ 在 $u = u_0$ 处连续 ($A = f(u_0)$);
2. 存在 $\mathring{U}(x_0, \delta)$, 在该去心邻域内恒有 $g(x) \neq u_0$;
则 $\lim_{x \to x_0} f(g(x)) = A$.

---

## 3. 无穷小量与无穷大量体系

#### 1. 无穷小的定义与性质:
- 若 $\lim f(x) = 0$, 则称 $f(x)$ 为无穷小量.
- **极限与无穷小的关系:** $\lim f(x) = A \iff f(x) = A + \alpha(x)$, 其中 $\alpha(x)$ 为无穷小量.
- **基本性质:**
  - 有限个无穷小的和、差、积仍为无穷小
  - 有界函数 $\times$ 无穷小量 $=$ 无穷小量 (如 $\lim_{x \to 0} x \sin\frac{1}{x} = 0$)
  - 无穷小的倒数是无穷大量 (在去心邻域内不为0的前提下)

#### 2. 无穷小的阶与比阶准则 ($x \to 0$ 时, $\alpha(x) \to 0, \beta(x) \to 0$):
1. **高阶无穷小:** $\lim \frac{\alpha(x)}{\beta(x)} = 0 \implies \alpha(x) = o(\beta(x))$
2. **低阶无穷小:** $\lim \frac{\alpha(x)}{\beta(x)} = \infty \implies \beta(x) = o(\alpha(x))$
3. **同阶无穷小:** $\lim \frac{\alpha(x)}{\beta(x)} = C \neq 0 \implies \alpha(x) = O(\beta(x))$
4. **等价无穷小:** $\lim \frac{\alpha(x)}{\beta(x)} = 1 \implies \alpha(x) \sim \beta(x)$
5. **$k$ 阶无穷小:** $\lim \frac{\alpha(x)}{\beta^k(x)} = C \neq 0 \ (C \text{ 为常数}, k > 0)$

#### 3. 常用等价无穷小公式集锦 (当 $x \to 0$ 时):
- **一阶等价:**
  $$x \sim \sin x \sim \tan x \sim \arcsin x \sim \arctan x \sim e^x - 1 \sim \ln(1+x) \sim \ln(x+\sqrt{1+x^2})$$
  $$(1+x)^\alpha - 1 \sim \alpha x, \quad a^x - 1 \sim x\ln a, \quad \log_a(1+x) \sim \frac{x}{\ln a}$$
- **二阶等价:**
  $$1 - \cos x \sim \frac{1}{2}x^2, \quad x - \ln(1+x) \sim \frac{1}{2}x^2, \quad e^x - 1 - x \sim \frac{1}{2}x^2, \quad \sec x - 1 \sim \frac{1}{2}x^2$$
- **三阶等价 (三阶不等式链体系):**
  $$x - \sin x \sim \frac{1}{6}x^3, \quad \arcsin x - x \sim \frac{1}{6}x^3, \quad \tan x - x \sim \frac{1}{3}x^3$$
  $$x - \arctan x \sim \frac{1}{3}x^3, \quad \tan x - \sin x \sim \frac{1}{2}x^3, \quad \sin x - \arctan x \sim \frac{1}{6}x^3$$
>   **三阶不等式链 ($x > 0$ 充分小时):**
>   $$\arctan x < \sin x < x < \arcsin x < \tan x$$

---

## 4. 函数极限的计算方法全解

#### 1. 麦克劳林展开公式法 (泰勒展开求极限利器):
当 $x \to 0$ 时常用展开式 (带皮亚诺余项 $o(x^n)$):
1. $e^x = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \dots + \frac{x^n}{n!} + o(x^n)$
2. $\sin x = x - \frac{x^3}{3!} + \frac{x^5}{5!} + \dots + (-1)^{m-1}\frac{x^{2m-1}}{(2m-1)!} + o(x^{2m})$
3. $\cos x = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} + \dots + (-1)^m \frac{x^{2m}}{(2m)!} + o(x^{2m+1})$
4. $\ln(1+x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \frac{x^4}{4} + \dots + (-1)^{n-1}\frac{x^n}{n} + o(x^n)$
5. $(1+x)^\alpha = 1 + \alpha x + \frac{\alpha(\alpha-1)}{2!}x^2 + \dots + \frac{\alpha(\alpha-1)\dots(\alpha-n+1)}{n!}x^n + o(x^n)$
6. $\tan x = x + \frac{x^3}{3} + \frac{2x^5}{15} + o(x^5)$
7. $\arcsin x = x + \frac{x^3}{6} + \frac{3x^5}{40} + o(x^5)$
8. $\arctan x = x - \frac{x^3}{3} + \frac{x^5}{5} + o(x^5)$

>   **展开原则 (泰勒展开深度判断):**
>   - 上下同阶原则: 展开到分母的最低次幂 (或分子展开后相抵消后留下的最低次非零项) 为止
>   - 加减法展开必须同阶, 严禁展开深度不一致导致高阶主部丢失

#### 2. 7种未定式计算全套路:
1. **$\frac{0}{0}$ 型:** 优先化简 (提非零因子、等价替换) $\to$ 泰勒展开 $\to$ 洛必达法则
2. **$\frac{\infty}{\infty}$ 型:** 抓大头 (分子分母同除以最高阶无穷大) $\to$ 洛必达法则
   - 无穷大比阶链: $\ln^a x \ll x^b \ll c^x \ll x^x \ (a, b > 0, c > 1)$
3. **$0 \cdot \infty$ 型:** 下放因子化为分式 $\frac{0}{1/\infty} = \frac{0}{0}$ 或 $\frac{\infty}{1/0} = \frac{\infty}{\infty}$
   - 下放原则: 容易求导的超越函数 ($\ln x, \arcsin x, \arctan x$) 留在分子, 幂函数/指数函数下放分母
4. **$\infty - \infty$ 型:**
   - 分式形式: 通分化为 $\frac{0}{0}$
   - 根式形式: 分子有理化或提公因式化为 $(1+u)^\alpha - 1$
   - 倒代换: 令 $t = \frac{1}{x} \to 0$
5. **$1^\infty$ 型 (三大破解套路):**
   - **公式法 (最快):** 若 $\lim u(x) = 1, \lim v(x) = \infty$, 则:
     $$\lim [u(x)]^{v(x)} = e^{\lim [u(x)-1]v(x)}$$
   - 对数恒等式法: $[u(x)]^{v(x)} = e^{v(x)\ln u(x)}$
   - 重要极限标准型: $\lim [1 + \alpha(x)]^{\frac{1}{\alpha(x)}} = e$
6. **$0^0$ 与 $\infty^0$ 型:**
   - 化为指数形式: $u(x)^{v(x)} = e^{v(x)\ln u(x)}$, 进而转化为计算 $0 \cdot \infty$ 型极限 $\lim v(x)\ln u(x)$

---

## 5. 函数的连续性与间断点

#### 1. 连续性的数学定义:
- **单点连续:** $f(x)$ 在 $x_0$ 处连续 $\iff \lim_{x \to x_0} f(x) = f(x_0) \iff \lim_{\Delta x \to 0} \Delta y = 0$
- **充要条件:** 左连续且右连续, 即 $f(x_0^-) = f(x_0^+) = f(x_0)$

#### 2. 间断点的分类与判定体系:
设 $f(x)$ 在 $x_0$ 的去心邻域内有定义, 但在 $x_0$ 处不连续:
1. **第一类间断点 (左右极限均存在):**
   - **可去间断点:** $\lim_{x \to x_0^-} f(x) = \lim_{x \to x_0^+} f(x) = A \neq f(x_0)$ (或 $f(x_0)$ 无定义)
   - **跳跃间断点:** $\lim_{x \to x_0^-} f(x) \neq \lim_{x \to x_0^+} f(x)$ (跳跃度 $J = |f(x_0^+) - f(x_0^-)|$)
2. **第二类间断点 (左右极限至少有一个不存在):**
   - **无穷间断点:** 至少一侧极限为 $\infty$ (如 $y = \frac{1}{x}$ 在 $x=0$)
   - **振荡间断点:** 极限在某范围内无限振荡 (如 $y = \sin\frac{1}{x}$ 在 $x=0$)

#### 3. 闭区间连续函数的四大核心定理:
1. **有界性定理:** $f(x) \in C[a,b] \implies \exists M > 0, \forall x \in [a,b], |f(x)| \le M$
2. **最大值与最小值定理:** $f(x) \in C[a,b] \implies \exists \xi_1, \xi_2 \in [a,b]$, 使得 $f(\xi_1) = \min f(x), f(\xi_2) = \max f(x)$
3. **介值定理:** 设 $m \le M$ 为最小值与最大值, $\forall \mu \in [m, M], \exists \xi \in [a,b]$, 使得 $f(\xi) = \mu$
4. **零点存在定理:** $f(x) \in C[a,b]$ 且 $f(a)f(b) < 0 \implies \exists \xi \in (a,b)$, 使得 $f(\xi) = 0$

---

## 6. 易错点与典型陷阱剖析

1. **洛必达法则盲目连用导致死循环或错误:** 每次使用洛必达法则前必须重新检验是否仍满足 $\frac{0}{0}$ 或 $\frac{\infty}{\infty}$ 型, 导数极限振荡不存在时洛必达失效 (应改用泰勒或夹逼)
2. **非零因式过早代入加减式中:** 乘法因式非零可先算, 加减法中的项不可单独代入极限值
3. **间断点只找无定义点:** 忽略了分段函数的分界点虽然有定义但左右极限不相等的跳跃间断点
