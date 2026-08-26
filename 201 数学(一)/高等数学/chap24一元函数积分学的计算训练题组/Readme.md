# chap24 附录: 一元函数积分学的计算训练题组

## 1. 经典综合大题题型分类

1. **区间再现变换法 ($x = a+b-t$):**
   $$I = \int_a^b f(x)dx = \int_a^b f(a+b-x)dx \implies I = \frac{1}{2}\int_a^b [f(x) + f(a+b-x)]dx$$
2. **分部积分与点火公式无缝串联:**
   $$I_n = \int_0^{\pi/2} \sin^n x dx = \begin{cases} \frac{n-1}{n}\dots\frac{1}{2}\frac{\pi}{2}, & n \text{ 偶数} \\ \frac{n-1}{n}\dots\frac{2}{3}\cdot 1, & n \text{ 奇数} \end{cases}$$
3. **费曼积分法 (积分号下求导法 Parameter Differentiation):**
   $$I(a) = \int_0^{+\infty} \frac{e^{-x} - e^{-ax}}{x} dx \implies I'(a) = \int_0^{+\infty} e^{-ax} dx = \frac{1}{a} \implies I(a) = \ln a + C$$

---

## 2. 典型真题综合解析

- **例题 1:** 计算 $I = \int_0^{\pi} \frac{x\sin x}{1+\cos^2 x} dx$.
  - *解:* 由区间再现公式 $x \to \pi - x$, 得:
    $$I = \frac{\pi}{2}\int_0^\pi \frac{\sin x}{1+\cos^2 x}dx = \pi \int_0^{\pi/2} \frac{\sin x}{1+\cos^2 x}dx = \pi [-\arctan(\cos x)]_0^{\pi/2} = \frac{\pi^2}{4}$$
