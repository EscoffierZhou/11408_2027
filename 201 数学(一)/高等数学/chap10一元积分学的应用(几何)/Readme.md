# chap10 一元积分学的应用(几何)

## 1. 平面图形的面积计算全谱

#### 1. 直角坐标系下的面积计算:
1. **X 型区域 ($a \le x \le b, y_1(x) \le y \le y_2(x)$):**
   $$S = \int_a^b [y_2(x) - y_1(x)] dx$$
2. **Y 型区域 ($c \le y \le d, x_1(y) \le x \le x_2(y)$):**
   $$S = \int_c^d [x_2(y) - x_1(y)] dy$$
3. **分段与相交区域:** 必须联立方程求出全部交点坐标, 分段积分取绝对值 $\int |f(x) - g(x)| dx$.

#### 2. 参数方程确定的平面图形面积:
设封闭曲线由 $\begin{cases} x = x(t) \\ y = y(t) \end{cases} \ (\alpha \le t \le \beta)$ 给出:
$$S = \int_\alpha^\beta y(t)|x'(t)| dt \quad \text{或由格林公式 } S = \frac{1}{2}\oint_L (x dy - y dx) = \frac{1}{2}\int_\alpha^\beta [x(t)y'(t) - y(t)x'(t)] dt$$

#### 3. 极坐标系下的面积计算:
1. **单一极坐标曲线 $r = r(\theta) \ (\alpha \le \theta \le \beta)$ 与极径围成的扇形面积:**
   $$S = \frac{1}{2}\int_\alpha^\beta r^2(\theta) d\theta$$
2. **双曲线区域 $r_1(\theta) \le r \le r_2(\theta)$:**
   $$S = \frac{1}{2}\int_\alpha^\beta [r_2^2(\theta) - r_1^2(\theta)] d\theta$$

---

## 2. 旋转体体积与已知截面面积立体体积

#### 1. 直角坐标系下的旋转体体积:
1. **绕 $x$ 轴旋转体体积 (截面圆盘法):**
   $$V_x = \pi \int_a^b y^2(x) dx$$
   - 两曲线 $y_1(x) \le y \le y_2(x)$ 围成图形绕 $x$ 轴旋转 (垫圈法 Washer Method):
     $$V_x = \pi \int_a^b [y_2^2(x) - y_1^2(x)] dx$$
2. **绕 $y$ 轴旋转体体积 (柱壳法 / 积分筒法 Shell Method):**
   $$V_y = 2\pi \int_a^b x |y(x)| dx$$
   >   **柱壳法微元原理:** 取宽度为 $dx$ 的坚直窄条, 绕 $y$ 轴旋转形成薄壁圆筒, 半径为 $x$, 高为 $y(x)$, 厚度为 $dx$, 其微元体积为 $dV = 2\pi x \cdot y(x) dx$.
3. **绕平行于坐标轴的直线旋转:**
   - 绕水平直线 $y = c$ 旋转: $V = \pi \int_a^b [y(x) - c]^2 dx$
   - 绕铅直直线 $x = d$ 旋转: $V = 2\pi \int_a^b |x - d| |y(x)| dx$

#### 2. 参数方程确定的旋转体体积:
曲线 $\begin{cases} x = x(t) \\ y = y(t) \end{cases} \ (\alpha \le t \le \beta)$:
- 绕 $x$ 轴旋转体积: $V_x = \pi \int_\alpha^\beta y^2(t) |x'(t)| dt$
- 绕 $y$ 轴旋转体积: $V_y = 2\pi \int_\alpha^\beta x(t) y(t) |x'(t)| dt$

#### 3. 平行截面面积已知的立体体积:
若立体在点 $x$ 处垂直于 $x$ 轴的截面面积已知为 $A(x) \ (a \le x \le b)$, 则体积为:
$$V = \int_a^b A(x) dx$$

---

## 3. 平面曲线的弧长计算体系

#### 1. 弧微分 $ds$ 的三大坐标形式:
1. **直角坐标 ($y = f(x)$):** $ds = \sqrt{1 + [f'(x)]^2} dx$
2. **参数方程 ($\begin{cases} x=x(t), y=y(t) \end{cases}$):** $ds = \sqrt{[x'(t)]^2 + [y'(t)]^2} dt$
3. **极坐标 ($r = r(\theta)$):** $ds = \sqrt{r^2(\theta) + [r'(\theta)]^2} d\theta$

#### 2. 弧长积分计算公式:
$$L = \int_L ds = \int_a^b \sqrt{1 + y'^2} dx = \int_\alpha^\beta \sqrt{x'^2 + y'^2} dt = \int_\alpha^\beta \sqrt{r^2 + r'^2} d\theta$$

---

## 4. 旋转曲面的侧面积计算全解

设曲线弧段绕轴旋转生成曲面:
#### 1. 绕 $x$ 轴旋转曲面的侧面积:
- **直角坐标:** $S_x = 2\pi \int_a^b |y(x)| \sqrt{1 + [y'(x)]^2} dx$
- **参数方程:** $S_x = 2\pi \int_\alpha^\beta |y(t)| \sqrt{[x'(t)]^2 + [y'(t)]^2} dt$
- **极坐标:** $S_x = 2\pi \int_\alpha^\beta r(\theta)\sin\theta \sqrt{r^2(\theta) + [r'(\theta)]^2} d\theta$

#### 2. 绕 $y$ 轴旋转曲面的侧面积:
- **直角坐标:** $S_y = 2\pi \int_a^b x \sqrt{1 + [y'(x)]^2} dx$
- **参数方程:** $S_y = 2\pi \int_\alpha^\beta x(t) \sqrt{[x'(t)]^2 + [y'(t)]^2} dt$
- **极坐标:** $S_y = 2\pi \int_\alpha^\beta r(\theta)\cos\theta \sqrt{r^2(\theta) + [r'(\theta)]^2} d\theta$

---

## 5. 易错点与经典避坑指南

1. **绕 $y$ 轴旋转体积系数误写:** 柱壳法带有 $2\pi$ (即 $V_y = 2\pi \int x y dx$), 误写为 $\pi$.
2. **旋转曲面微元漏掉弧微分:** 侧面积微元是 $dS = 2\pi y ds$, 严禁直接写为 $2\pi y dx$.
3. **极坐标弧微分求导遗漏原函数平方项:** 极坐标 $ds = \sqrt{r^2 + (r')^2} d\theta$, 易错漏掉 $r^2$.
