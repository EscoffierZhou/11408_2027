# chap12 一元积分学的应用(物理和经济)

## 1. 物理应用中的微元法全模型

#### 1. 变力沿直线做功 ($W = \int F(x)dx$):
1. **弹簧弹性力做功:** $W = \int_{x_1}^{x_2} kx dx = \frac{1}{2}k(x_2^2 - x_1^2)$
2. **万有引力做功 / 逃逸功:** $W = \int_R^{+\infty} G\frac{Mm}{r^2}dr = \frac{GMm}{R}$
3. **抽水做功 (重力提升液体):**
   设液体密度为 $\rho$, 容器高度 $H$, 在高 $y$ 处横截面积为 $A(y)$, 将水全部抽至容器顶部 ($y=H$):
   $$dW = \rho g A(y) dy \cdot (H - y) \implies W = \rho g \int_0^H (H - y)A(y) dy$$

#### 2. 静水侧压力 (液体侧压力 $P = \int \rho g h dA$):
在深度 $h$ 处的静水压强 $p = \rho g h$.
若平板竖直浸入水中, 深度范围为 $h \in [a, b]$, 在深度 $h$ 处水平宽度为 $b(h)$, 则:
$$dP = \rho g h \cdot b(h) dh \implies P = \rho g \int_a^b h \cdot b(h) dh$$

#### 3. 质心、形心与转动惯量:
1. **平面薄板形心坐标 ($\rho = 1$):**
   $$\bar{x} = \frac{M_y}{S} = \frac{\int_a^b x[y_2(x) - y_1(x)]dx}{\int_a^b [y_2(x) - y_1(x)]dx}, \quad \bar{y} = \frac{M_x}{S} = \frac{\frac{1}{2}\int_a^b [y_2^2(x) - y_1^2(x)]dx}{\int_a^b [y_2(x) - y_1(x)]dx}$$
2. **平面曲线弧形心坐标:**
   $$\bar{x} = \frac{\int_L x ds}{L}, \quad \bar{y} = \frac{\int_L y ds}{L}$$
3. **转动惯量 (Moment of Inertia):**
   - 绕 $x$ 轴转动惯量: $I_x = \iint_D \rho y^2 dxdy$
   - 绕 $y$ 轴转动惯量: $I_y = \iint_D \rho x^2 dxdy$
   - 绕原点极转动惯量: $I_0 = I_x + I_y = \iint_D \rho (x^2 + y^2) dxdy$

---

## 2. 经济学中的积分应用

1. **总成本与总收益还原:**
   $$C(Q) = C_0 + \int_0^Q MC(t)dt, \quad R(Q) = \int_0^Q MR(t)dt$$
2. **消费者剩余 (CS) 与生产者剩余 (PS):**
   市场均衡价格为 $P_0$, 均衡需求量为 $Q_0$:
   $$CS = \int_0^{Q_0} [P(Q) - P_0] dQ, \quad PS = \int_0^{Q_0} [P_0 - S(Q)] dQ$$
3. **连续收入流的现值 (Present Value):**
   设年收入流率为 $f(t)$, 连续年利率为 $r$, 则 $T$ 年内的总现值为:
   $$PV = \int_0^T f(t) e^{-rt} dt$$
