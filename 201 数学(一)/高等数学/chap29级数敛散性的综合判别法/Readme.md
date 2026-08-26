# chap29 附录: 级数敛散性的综合判别法

## 1. 抽象数项级数审敛高级准则

#### 1. 正项级数与任意项级数收敛性对照:
1. 若 $\sum a_n$ 为**正项级数**且 $\sum a_n$ 收敛 $\implies \sum a_n^2$ 必收敛.
2. 若 $\sum a_n$ 为**任意项级数**且收敛 $\implies \sum a_n^2$ **不一定收敛**!
   *(经典反例: $a_n = \frac{(-1)^n}{\sqrt{n}}$, $\sum a_n$ 收敛但 $\sum a_n^2 = \sum \frac{1}{n}$ 发散).*
3. 若 $\sum a_n^2$ 收敛 $\implies \sum \frac{a_n}{n}$ 必绝对收敛.
   *(证明: 由柯西不等式 $\left(\sum \frac{|a_n|}{n}\right)^2 \le \left(\sum a_n^2\right)\left(\sum \frac{1}{n^2}\right) < +\infty$).*

---

## 2. 常见反例与经典真题陷阱集锦

1. $\lim u_n = 0$ 不能推出级数收敛 (调和级数 $\sum \frac{1}{n}$).
2. $\sum u_n$ 条件收敛, 其重排级数可收敛于任意实数或发散 (黎曼级数重排定理).
3. 柯西乘积级数收敛需要至少一个级数绝对收敛 (梅滕斯定理 Mertens).
