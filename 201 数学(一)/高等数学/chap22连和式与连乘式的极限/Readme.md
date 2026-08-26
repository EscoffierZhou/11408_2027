# chap22 附录: 连和式与连乘式的极限

## 1. 连和式极限三大通道选择模型

1. **通道一: 夹逼准则 (分母或根号内项数不齐次):**
   $$\frac{n}{\text{最大项}} \le \sum_{k=1}^n a_k \le \frac{n}{\text{最小项}}$$
2. **通道二: 定积分定义 (可提出 $\frac{1}{n}$, 内部为 $\frac{k}{n}$ 齐次函数):**
   $$\lim_{n \to \infty} \frac{1}{n}\sum_{k=1}^n f\left(\frac{k}{n}\right) = \int_0^1 f(x)dx$$
3. **通道三: 泰勒展开求和法 (级数近似):**
   当通项含有 $\sin\frac{k}{n^2}, \ln(1+\frac{k}{n^2})$ 时, 展开为 $\frac{k}{n^2} - \frac{k^3}{6n^6} + \dots$, 利用自然数幂和公式 $\sum k = \frac{n(n+1)}{2}, \sum k^2 = \frac{n(n+1)(2n+1)}{6}$ 精确计算.

---

## 2. 连乘式极限与斯特林公式

#### 1. 取对数化和法:
$$P_n = \prod_{k=1}^n \left(1 + \frac{k}{n}\right)^{\frac{1}{n}} \implies \ln P_n = \frac{1}{n}\sum_{k=1}^n \ln\left(1+\frac{k}{n}\right) \to \int_0^1 \ln(1+x)dx = 2\ln 2 - 1 \implies P_n \to \frac{4}{e}$$

#### 2. 斯特林公式 (Stirling Formula):
$$n! \sim \sqrt{2\pi n} \left(\frac{n}{e}\right)^n \quad (n \to \infty)$$
