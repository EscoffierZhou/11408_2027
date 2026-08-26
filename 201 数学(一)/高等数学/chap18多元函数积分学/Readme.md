# chap18 多元函数积分学

## 1. 三重积分的计算全谱

#### 1. 直角坐标计算法:
1. **“先一后二” (投影穿线法):**
   $$\iiint_\Omega f(x, y, z) dV = \iint_{D_{xy}} dxdy \int_{z_1(x,y)}^{z_2(x,y)} f(x, y, z) dz$$
2. **“先二后一” (截面法):**
   $$\iiint_\Omega f(x, y, z) dV = \int_{c_1}^{c_2} dz \iint_{D_z} f(x, y, z) dxdy$$

#### 2. 柱面坐标变换 ($dV = r dr d\theta dz$):
$$x = r\cos\theta, \quad y = r\sin\theta, \quad z = z \implies \iiint_\Omega f(x,y,z)dV = \iiint_\Omega f(r\cos\theta, r\sin\theta, z) r dr d\theta dz$$

#### 3. 球面坐标变换 ($dV = r^2\sin\varphi dr d\varphi d\theta$):
$$x = r\sin\varphi\cos\theta, \quad y = r\sin\varphi\sin\theta, \quad z = r\cos\varphi$$
- 角度范围: $r \ge 0, \ 0 \le \varphi \le \pi$ (与正 $z$ 轴夹角), \ $0 \le \theta \le 2\pi$
- 球面坐标体积微元: $dV = r^2\sin\varphi dr d\varphi d\theta$.

---

## 2. 第一型曲线与曲面积分 (对弧长/面积的积分)

#### 1. 第一型曲线积分 (对弧长 $\int_L f ds$):
- **性质:** 与方向无关 ($\int_{L^-} = \int_{L^+}$).
- **直角坐标:** $ds = \sqrt{1 + y'^2} dx \implies \int_L f(x, y) ds = \int_a^b f(x, y(x))\sqrt{1 + y'^2} dx$.
- **参数方程:** $ds = \sqrt{x'^2 + y'^2 + z'^2} dt$.

#### 2. 第一型曲面积分 (对面积 $\iint_\Sigma f dS$):
- **性质:** 与曲面侧向无关.
- **投影计算公式 (一投二代三换元):**
  曲面 $z = z(x, y) \implies dS = \sqrt{1 + z_x^2 + z_y^2} dxdy$:
  $$\iint_\Sigma f(x, y, z) dS = \iint_{D_{xy}} f(x, y, z(x, y)) \sqrt{1 + z_x^2 + z_y^2} dxdy$$

---

## 3. 第二型曲线积分与格林公式 (Green)

#### 1. 第二型曲线积分 ($\int_L P dx + Q dy$):
- **性质:** 反向变号 $\int_{L^-} = -\int_{L^+}$.
- **参数计算:** $\int_L P dx + Q dy = \int_\alpha^\beta [P(x(t), y(t))x'(t) + Q(x(t), y(t))y'(t)] dt$.

#### 2. 格林公式 (Green's Theorem):
$$\oint_L P dx + Q dy = \iint_D \left(\frac{\partial Q}{\partial x} - \frac{\partial P}{\partial y}\right) dxdy$$
- **补线法与挖奇点法:** 区域非闭补线封闭; 内部有奇点挖小圆周 $C_\varepsilon$ (顺时针).

#### 3. 平面第二型曲线积分与路径无关的四个等价条件:
1. $\frac{\partial Q}{\partial x} = \frac{\partial P}{\partial y}$ 在单连通区域内恒成立;
2. $\oint_C P dx + Q dy = 0$ 沿任意闭曲线为 0;
3. $\int_L P dx + Q dy$ 仅与起点和终点有关, 与路径无关;
4. $P dx + Q dy = du$ 为某势函数 $u(x, y)$ 的全微分.
   - **势函数公式:** $u(x, y) = \int_{x_0}^x P(t, y_0)dt + \int_{y_0}^y Q(x, t)dt$.

---

## 4. 第二型曲面积分与高斯公式 (Gauss)

#### 1. 第二型曲面积分 ($\iint_\Sigma P dydz + Q dzdx + R dxdy$):
- **投影法 (一投二代三定号):** 上侧取 $+$, 下侧取 $-$.

#### 2. 高斯公式 (Gauss's Theorem):
$$\oiint_\Sigma P dydz + Q dzdx + R dxdy = \iiint_\Omega \left(\frac{\partial P}{\partial x} + \frac{\partial Q}{\partial y} + \frac{\partial R}{\partial z}\right) dV = \iiint_\Omega \operatorname{div}\vec{A} dV$$

---

## 5. 斯托克斯公式与线面积分联系

#### 1. 斯托克斯公式 (Stokes's Theorem):
$$\oint_\Gamma P dx + Q dy + R dz = \iint_\Sigma \begin{vmatrix} dydz & dzdx & dxdy \\ \frac{\partial}{\partial x} & \frac{\partial}{\partial y} & \frac{\partial}{\partial z} \\ P & Q & R \end{vmatrix} = \iint_\Sigma \operatorname{rot}\vec{A} \cdot \vec{n}^0 dS$$

#### 2. 两类线/面积分联系公式:
- $\int_L P dx + Q dy + R dz = \int_L (P\cos\alpha + Q\cos\beta + R\cos\gamma) ds$
- $\iint_\Sigma P dydz + Q dzdx + R dxdy = \iint_\Sigma (P\cos\alpha + Q\cos\beta + R\cos\gamma) dS$
