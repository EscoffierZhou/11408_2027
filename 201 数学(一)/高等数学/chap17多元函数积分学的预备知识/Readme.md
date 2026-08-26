# chap17 多元函数积分学的预备知识

## 1. 空间向量代数与几何运算体系

#### 1. 向量的基本运算与坐标表示:
设 $\vec{a} = (a_x, a_y, a_z), \vec{b} = (b_x, b_y, b_z)$:
1. **模长与方向余弦:**
   $$|\vec{a}| = \sqrt{a_x^2 + a_y^2 + a_z^2}, \quad \cos\alpha = \frac{a_x}{|\vec{a}|}, \cos\beta = \frac{a_y}{|\vec{a}|}, \cos\gamma = \frac{a_z}{|\vec{a}|} \implies \cos^2\alpha + \cos^2\beta + \cos^2\gamma = 1$$
2. **数量积 (点积 $\vec{a} \cdot \vec{b}$):**
   $$\vec{a} \cdot \vec{b} = |\vec{a}||\vec{b}|\cos\theta = a_x b_x + a_y b_y + a_z b_z$$
   - **垂直充要条件:** $\vec{a} \perp \vec{b} \iff \vec{a} \cdot \vec{b} = 0 \iff a_x b_x + a_y b_y + a_z b_z = 0$
3. **向量积 (叉积 $\vec{a} \times \vec{b}$):**
   $$\vec{a} \times \vec{b} = \begin{vmatrix} \vec{i} & \vec{j} & \vec{k} \\ a_x & a_y & a_z \\ b_x & b_y & b_z \end{vmatrix} = (a_y b_z - a_z b_y)\vec{i} - (a_x b_z - a_z b_x)\vec{j} + (a_x b_y - a_y b_x)\vec{k}$$
   - **平行充要条件:** $\vec{a} \parallel \vec{b} \iff \vec{a} \times \vec{b} = \vec{0} \iff \frac{a_x}{b_x} = \frac{a_y}{b_y} = \frac{a_z}{b_z}$
   - 几何意义: $|\vec{a} \times \vec{b}|$ 表示以 $\vec{a}, \vec{b}$ 为邻边的平行四边形面积.
4. **混合积 ($[\vec{a}\vec{b}\vec{c}] = (\vec{a} \times \vec{b}) \cdot \vec{c}$):**
   $$[\vec{a}\vec{b}\vec{c}] = \begin{vmatrix} a_x & a_y & a_z \\ b_x & b_y & b_z \\ c_x & c_y & c_z \end{vmatrix}$$
   - **三向量共面充要条件:** $[\vec{a}\vec{b}\vec{c}] = 0$
   - 几何意义: $|[\vec{a}\vec{b}\vec{c}]|$ 为以 $\vec{a}, \vec{b}, \vec{c}$ 为棱的平行六面体体积.

---

## 2. 空间平面与空间直线方程

#### 1. 空间平面方程:
1. **点法式:** $A(x - x_0) + B(y - y_0) + C(z - z_0) = 0 \quad (\text{法向量 } \vec{n} = (A, B, C))$
2. **一般式:** $Ax + By + Cz + D = 0$
3. **截距式:** $\frac{x}{a} + \frac{y}{b} + \frac{z}{c} = 1$
4. **平面束方程:** $A_1 x + B_1 y + C_1 z + D_1 + \lambda (A_2 x + B_2 y + C_2 z + D_2) = 0$

#### 2. 空间直线方程:
1. **对称式 (点向式):** $\frac{x - x_0}{m} = \frac{y - y_0}{n} = \frac{z - z_0}{p} \quad (\text{方向向量 } \vec{s} = (m, n, p))$
2. **参数式:** $\begin{cases} x = x_0 + mt \\ y = y_0 + nt \\ z = z_0 + pt \end{cases}$
3. **一般式 (两平面交线):** $\begin{cases} A_1 x + B_1 y + C_1 z + D_1 = 0 \\ A_2 x + B_2 y + C_2 z + D_2 = 0 \end{cases} \implies \vec{s} = \vec{n}_1 \times \vec{n}_2$

#### 3. 常见距离公式:
- 点 $P_0(x_0, y_0, z_0)$ 到平面 $Ax+By+Cz+D=0$ 的距离:
  $$d = \frac{|A x_0 + B y_0 + C z_0 + D|}{\sqrt{A^2 + B^2 + C^2}}$$
- 点 $P_0$ 到直线 $L$ (过点 $P_1$, 方向向量 $\vec{s}$) 的距离:
  $$d = \frac{|\vec{P_1 P_0} \times \vec{s}|}{|\vec{s}|}$$

---

## 3. 多元微分学的几何应用

#### 1. 空间曲线的切线与法平面:
1. **参数形式 $\begin{cases} x = x(t) \\ y = y(t) \\ z = z(t) \end{cases}$:**
   - 切向量: $\vec{T} = (x'(t_0), y'(t_0), z'(t_0))$
   - 切线方程: $\frac{x - x_0}{x'(t_0)} = \frac{y - y_0}{y'(t_0)} = \frac{z - z_0}{z'(t_0)}$
   - 法平面方程: $x'(t_0)(x - x_0) + y'(t_0)(y - y_0) + z'(t_0)(z - z_0) = 0$
2. **交线形式 $\begin{cases} F(x,y,z) = 0 \\ G(x,y,z) = 0 \end{cases}$:**
   - 切向量: $\vec{T} = \nabla F \times \nabla G$

#### 2. 空间曲面的切平面与法线:
1. **隐式方程 $F(x, y, z) = 0$:**
   - 法向量: $\vec{n} = (F_x, F_y, F_z)$
   - 切平面方程: $F_x(x - x_0) + F_y(y - y_0) + F_z(z - z_0) = 0$
   - 法线方程: $\frac{x - x_0}{F_x} = \frac{y - y_0}{F_y} = \frac{z - z_0}{F_z}$
2. **显式方程 $z = f(x, y)$:**
   - 法向量: $\vec{n} = (f_x, f_y, -1)$
   - 切平面方程: $z - z_0 = f_x(x - x_0) + f_y(y - y_0)$

---

## 4. 方向导数与梯度 (场论核心)

#### 1. 方向导数的定义与计算:
- **定义:** 函数 $u = f(x,y,z)$ 沿方向 $\vec{l} = (\cos\alpha, \cos\beta, \cos\gamma)$ 的变化率:
  $$\frac{\partial u}{\partial \vec{l}} = \lim_{t \to 0^+} \frac{f(x_0+t\cos\alpha, y_0+t\cos\beta, z_0+t\cos\gamma) - f(x_0,y_0,z_0)}{t}$$
- **计算公式:**
  $$\frac{\partial u}{\partial \vec{l}} = \frac{\partial u}{\partial x}\cos\alpha + \frac{\partial u}{\partial y}\cos\beta + \frac{\partial u}{\partial z}\cos\gamma = \operatorname{grad} u \cdot \vec{l}^0$$

#### 2. 梯度 (Gradient):
- **定义:** $\operatorname{grad} u = \nabla u = \left(\frac{\partial u}{\partial x}, \frac{\partial u}{\partial y}, \frac{\partial u}{\partial z}\right)$
- **物理与几何内涵:**
  - 梯度的方向是函数增长最快的方向 (最大增加率方向)
  - 梯度的模长 $|\operatorname{grad} u| = \sqrt{u_x^2 + u_y^2 + u_z^2}$ 是方向导数的最大值
  - 梯度 $\nabla u$ 处处垂直于等值面 $u(x,y,z) = C$ (等值面的法向量)

---

## 5. 散度与旋度 (向量场特征)

设向量场 $\vec{A}(x, y, z) = P\vec{i} + Q\vec{j} + R\vec{k}$:
#### 1. 散度 (Divergence, 标量):
$$\operatorname{div} \vec{A} = \nabla \cdot \vec{A} = \frac{\partial P}{\partial x} + \frac{\partial Q}{\partial y} + \frac{\partial R}{\partial z}$$
- 物理意义: 单位体积向外辐射的通量净源泉密度 ($\operatorname{div}\vec{A} > 0$ 为正源, $<0$ 为汇).

#### 2. 旋度 (Curl, 向量):
$$\operatorname{rot} \vec{A} = \nabla \times \vec{A} = \begin{vmatrix} \vec{i} & \vec{j} & \vec{k} \\ \frac{\partial}{\partial x} & \frac{\partial}{\partial y} & \frac{\partial}{\partial z} \\ P & Q & R \end{vmatrix} = \left(\frac{\partial R}{\partial y} - \frac{\partial Q}{\partial z}\right)\vec{i} + \left(\frac{\partial P}{\partial z} - \frac{\partial R}{\partial x}\right)\vec{j} + \left(\frac{\partial Q}{\partial x} - \frac{\partial P}{\partial y}\right)\vec{k}$$
- **保守场 (无旋场 / 有势场):** $\operatorname{rot}\vec{A} = \vec{0} \iff \exists u, \vec{A} = \nabla u$.

---

## 6. 易错点与典型陷阱总结

1. **方向余弦归一化遗漏:** 计算方向导数时, 方向向量 $\vec{l}$ 必须先单位化为 $\vec{l}^0 = \frac{\vec{l}}{|\vec{l}|}$, 严禁直接代入非单位向量坐标.
2. **切平面与法线符号对应错误:** 显式曲面 $z = f(x,y)$ 的法向量为 $(f_x, f_y, -1)$, 勿将 $-1$ 漏写或写错符号.
