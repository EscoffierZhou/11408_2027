# chap4 一元函数微分学的计算

## 1. 基本初等函数求导公式表

| 原函数 $f(x)$ | 导函数 $f'(x)$ | 原函数 $f(x)$ | 导函数 $f'(x)$ |
| :--- | :--- | :--- | :--- |
| $C$ (常数) | $0$ | $x^\alpha$ | $\alpha x^{\alpha-1}$ |
| $a^x \ (a>0, a\ne 1)$ | $a^x \ln a$ | $e^x$ | $e^x$ |
| $\log_a x \ (a>0, a\ne 1)$ | $\frac{1}{x \ln a}$ | $\ln x$ | $\frac{1}{x}$ |
| $\sin x$ | $\cos x$ | $\cos x$ | $-\sin x$ |
| $\tan x$ | $\sec^2 x$ | $\cot x$ | $-\csc^2 x$ |
| $\sec x$ | $\sec x \tan x$ | $\csc x$ | $-\csc x \cot x$ |
| $\arcsin x$ | $\frac{1}{\sqrt{1-x^2}}$ | $\arccos x$ | $-\frac{1}{\sqrt{1-x^2}}$ |
| $\arctan x$ | $\frac{1}{1+x^2}$ | $\text{arccot } x$ | $-\frac{1}{1+x^2}$ |
| $\sinh x$ | $\cosh x$ | $\cosh x$ | $\sinh x$ |

---

## 2. 求导运算法则

#### 1. 线性运算法则:
$$(u \pm v)' = u' \pm v', \quad (Cu)' = C u'$$

#### 2. 乘除法求导法则:
$$(uv)' = u'v + uv', \quad \left(\frac{u}{v}\right)' = \frac{u'v - uv'}{v^2} \ (v \neq 0)$$
- 三项乘积推广: $(uvw)' = u'vw + uv'w + uvw'$

#### 3. 复合函数链式法则 (Chain Rule):
设 $y = f(u), u = g(x)$, 若 $g(x)$ 在点 $x$ 可导, $f(u)$ 在相应点 $u$ 可导, 则复合函数 $y = f(g(x))$ 在点 $x$ 可导:
$$\frac{dy}{dx} = \frac{dy}{du} \cdot \frac{du}{dx} = f'(g(x)) \cdot g'(x)$$

---

## 3. 反函数求导法则

设 $y = f(x)$ 单调可导且 $f'(x) \neq 0$, 其反函数为 $x = f^{-1}(y) = \varphi(y)$:
1. **一阶导数公式:**
   $$\frac{dx}{dy} = \frac{1}{\frac{dy}{dx}} \iff \varphi'(y) = \frac{1}{f'(x)}$$
2. **二阶导数公式 (链式推导):**
   $$\frac{d^2x}{dy^2} = \frac{d}{dy}\left(\frac{1}{y'_x}\right) = \frac{d}{dx}\left(\frac{1}{y'_x}\right) \cdot \frac{dx}{dy} = -\frac{y''_{xx}}{(y'_x)^2} \cdot \frac{1}{y'_x} = -\frac{y''_{xx}}{(y'_x)^3}$$

---

## 4. 隐函数求导法

设方程 $F(x, y) = 0$ 确定了隐函数 $y = y(x)$:
#### 1. 直接求导法:
两边关于 $x$ 求导, 遇到含有 $y$ 的项时视 $y$ 为复合函数的中间变量 (运用链式法则 $\frac{d}{dx}g(y) = g'(y)\frac{dy}{dx}$), 整理求出 $y'$.

#### 2. 偏导数公式法 (多元微积分结论):
$$\frac{dy}{dx} = -\frac{F_x}{F_y} \quad (F_y \neq 0)$$
二阶导数可通过对一阶导数表达式继续求导并回代 $y'$ 得到.

---

## 5. 参数方程确定的函数求导

设参数方程为 $\begin{cases} x = \varphi(t) \\ y = \psi(t) \end{cases}$, 且 $\varphi'(t) \neq 0$:
1. **一阶导数:**
   $$\frac{dy}{dx} = \frac{\frac{dy}{dt}}{\frac{dx}{dt}} = \frac{\psi'(t)}{\varphi'(t)}$$
2. **二阶导数 (切记分母再次除以 $\varphi'(t)$):**
   $$\frac{d^2y}{dx^2} = \frac{d}{dx}\left(\frac{dy}{dx}\right) = \frac{\frac{d}{dt}\left(\frac{\psi'(t)}{\varphi'(t)}\right)}{\frac{dx}{dt}} = \frac{\psi''(t)\varphi'(t) - \psi'(t)\varphi''(t)}{[\varphi'(t)]^3}$$

---

## 6. 对数求导法与幂指函数求导

#### 1. 适用场景:
- 多项连乘、连除、高次开方函数 (如 $y = \frac{(x+1)^3 \sqrt{x-2}}{(x+3)^4}$)
- 幂指函数 $y = u(x)^{v(x)} \ (u(x) > 0)$

#### 2. 计算步骤:
1. 两边取自然对数: $\ln y = v(x) \ln u(x)$
2. 两边同时关于 $x$ 求导:
   $$\frac{y'}{y} = v'(x)\ln u(x) + v(x)\frac{u'(x)}{u(x)}$$
3. 移项回代 $y$:
   $$y' = u(x)^{v(x)} \left[ v'(x)\ln u(x) + v(x)\frac{u'(x)}{u(x)} \right]$$

---

## 7. 高阶导数计算方法体系

#### 1. 常见初等函数的 $n$ 阶导数公式:
1. $(e^{ax})^{(n)} = a^n e^{ax}$
2. $(\sin ax)^{(n)} = a^n \sin\left(ax + n\frac{\pi}{2}\right)$
3. $(\cos ax)^{(n)} = a^n \cos\left(ax + n\frac{\pi}{2}\right)$
4. $\left(\frac{1}{ax+b}\right)^{(n)} = \frac{(-1)^n n! a^n}{(ax+b)^{n+1}}$
5. $[\ln(ax+b)]^{(n)} = \frac{(-1)^{n-1} (n-1)! a^n}{(ax+b)^n} \ (n \ge 1)$
6. $(x^m)^{(n)} = \begin{cases} m(m-1)\dots(m-n+1)x^{m-n}, & n < m \\ m!, & n = m \\ 0, & n > m \end{cases}$

#### 2. 莱布尼茨公式 (Leibniz Formula):
$$(uv)^{(n)} = \sum_{k=0}^n C_n^k u^{(n-k)} v^{(k)} = C_n^0 u^{(n)}v + C_n^1 u^{(n-1)}v' + C_n^2 u^{(n-2)}v'' + \dots + C_n^n uv^{(n)}$$
>   **实战技巧:** 选求导有限次即变为0的多项式项作为 $v(x)$ (如 $v(x) = x^2 \implies v'' = 2, v^{(3)} = 0$, 展开只需算前三项).

#### 3. 泰勒展开法反求 $n$ 阶导数:
若求 $f^{(n)}(0)$, 可先将 $f(x)$ 展开为麦克劳林级数 $\sum_{k=0}^\infty a_k x^k$. 由麦克劳林展开唯一性:
$$a_n = \frac{f^{(n)}(0)}{n!} \implies f^{(n)}(0) = n! \cdot a_n$$

---

## 8. 易错点与典型陷阱总结

1. **参数方程二阶导数漏除 $x'(t)$:** 误将 $\frac{d^2y}{dx^2}$ 算成 $\frac{y''(t)}{x''(t)}$ (极其致命!).
2. **对数求导法漏乘 $y$:** 计算出 $\frac{y'}{y}$ 后忘记在等号右侧乘回原函数 $y$.
3. **反函数二阶导数符号搞反:** 二阶导数公式分子带负号 $-\frac{y''}{(y')^3}$.
