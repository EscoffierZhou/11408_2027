# Chap2.1 函数极限的概念和性质

## 1.函数极限的概念

#### 函数极限的定义(1)$\varepsilon\text{-}\delta$系:

以自变量趋向于有限值$x \to x_0$为例,函数极限的严格定义:

$$\forall \varepsilon > 0, \exists \delta > 0, \text{ 当 } 0 < \vert{}x - x_0\vert{} < \delta \text{ 时,恒有 } \vert{}f(x) - A\vert{} < \varepsilon \implies \lim_{x \to x_0} f(x) = A$$

意义(1):误差再小也能满足

意义(2):去心邻域:极限值A只与$x_0$附近的函数趋势有关($f(x_0)$是否有定义,是多少无关)

意义(3):单侧极限和整体极限:

>$\lim_{x \to x_0} f(x) = A \iff \lim_{x \to x_0^+} f(x) = \lim_{x \to x_0^-} f(x) = A$
>
>遇到分段点、绝对值、含有$e^{\frac{1}{x}}$或$\arctan \frac{1}{x}$的结构,必分左右极限

#### 函数极限的定义(2)超实数系:

运算规则(1):代数化简未完成前保持超实数运算,不可提前取核

运算规则(2):一旦出现有限超实数(非$\frac{无穷小}{无穷小}$),最终结果必须[取核]回归标准实数

## 2.函数极限的性质

#### 函数极限的性质(1):唯一性

**唯一性:若极限存在,则极限值必定唯一**

函数极限存在的充要条件:$\lim_{x \to x_0} f(x) = A \iff \lim_{x \to x_0^+} f(x) = \lim_{x \to x_0^-} f(x) = A$

**极限不存在的4种情况**

极限不存在(1):左右极限存在且并不相等

极限不存在(2):极限两边都趋于无穷(非实数)

极限不存在(3):振荡有界:使用海涅定理判死刑

极限不存在(4):振荡无界

>   推论:函数有界不一定有极限,函数有极限一定局部有界

***

**单侧有极限但是整体没有极限的函数:$$e^x,arctanx,[x]$$**

(1)$\lim_{x \to +\infty} e^x = +\infty$,而$\lim_{x \to -\infty} e^x = 0$；	  $\lim_{x \to 0^+} e^{\frac{1}{x}} = +\infty$,而$\lim_{x \to 0^-} e^{\frac{1}{x}} = 0$；

(1)$\lim_{x \to +\infty} \arctan x = \frac{\pi}{2}$,而$\lim_{x \to -\infty} \arctan x = -\frac{\pi}{2}$	$\lim_{x \to 0^+} \arctan \frac{1}{x} = \frac{\pi}{2}$,而$\lim_{x \to 0^-} \arctan \frac{1}{x} = -\frac{\pi}{2}$

(1)$\lim_{x \to 0^+} [x] = 0$,$\lim_{x \to 0^-} [x] = -1$

(1)$\lim_{x\rightarrow 1}\frac{e^{\frac{1}{x-1}}ln|1+x|}{(e^x-1)(x-2)} = 0$,代入1后只剩$e^{\frac{1}{x-1}}$.令$x=1+\epsilon和x=1-\epsilon$

(2)极值判定核渐近线中,分母极限为0,分子非0,则判定铅直渐近线

(3)$\sin\frac{1}{x}$($x \to 0$)在$[-1, 1]$之间无限次振荡($x_n = \frac{1}{2n\pi}$和$y_n = \frac{1}{2n\pi + \frac{\pi}{2}}$)得到不同极限值

>   但是$\sin\frac{1}{x}$本身不存在极限,使用海涅定理证明

(4)$\frac{1}{x} \sin\frac{1}{x}$($x \to 0$)振幅随着逼近$x_0$趋向无穷大,既无界又无固定极限

#### 函数极限的性质(2):局部有界性[落点附近有界]

==**局部有界性:若$\lim_{x \to x_0} f(x) = A$,则存在$x_0$的去心邻域,在此邻域内$f(x)$有界**==

>解释(1):局部性:离开该领域不一定有界[局部有界]
>
>解释(2):不可逆:有界不能推出极限存在[有界的$\epsilon$固定,极限的$\epsilon$不固定]

**局部有界性的推论:通过函数极限判断有界**

>**推论(1):$lim _{x\rightarrow \cdot}f(x)$存在,则在$x\rightarrow \cdot$时,f(x)有界**
>
>><font color=red>解释:[极限存在则有界],[如果无界,原极限一定不存在]</font>
>
>**推论(2):f(x)在[a,b]为连续函数,则f(x)在[a,b]上有界**
>
>><font color=red>用法(1):[单点直接确定极限:任意一点的极限直接等于函数值]</font>
>>
>>用法(2):闭区间无界,则不可能在该区间连续
>
>**推论(3):f(x)在(a,b)为连续函数,并且f(x)在$lim _{x\rightarrow a^+}f(x)$$lim _{x\rightarrow b^-}f(x)$存在,则f(x)在(a,b)上有界**
>
>>用法(1):正向证明
>>
>>用法(2):开区间无界,则\[内部不连续]\[左端点不存在极限][左端点不存在极限]
>
>**推论(4):f(x)在(a,$+\infty$)为连续函数,并且极限$\lim_{x \to +\infty} f(x) = A$(有限值)存在,则f(x)在(a,$+\infty$)上有界**
>
>>用法(1):正向证明
>>
>>用法(2):开区间无界,则\[内部不连续]\[左端点不存在极限][左端点不存在极限]

**(Oth)非局部有界性的推论:通过函数/导数判断有界**

>**有界函数的和差积仍有界,商$\frac{f(x)}{g(x)}$不一定有界**
>
>>用法(1):秒选择题
>>
>>用法(2):f(x)+g(x)无界,f(x)有界,g(x)绝对无界
>
>**拉格朗日中值定理:导数有界推导出函数有界的关系**
>
>>若$f'(x)$在有限区间$(a,b)$上有界,则$f(x)$在$(a,b)$上必有界
>
>**复合函数有界性的传导**
>
>>若$u = g(x)$在$D$上有界(值域为$I$),且外层函数$f(u)$在区间$I$上有界,则复合函数$f(g(x))$在$D$上有界

#### 函数极限的性质(3):局部保号性(看是否大于0)

**局部保号性定理(1):**[最终落点是A,所有有限超实数都逼近A]

>   **若$\lim_{x \to x_0} f(x) = A > 0$,则存在$\delta > 0$,当$0 < \vert{}x - x_0\vert{} < \delta$时,恒有$f(x) > 0$
>   若$\lim_{x \to x_0} f(x) = A < 0$,则存在$\delta > 0$,当$0 < \vert{}x - x_0\vert{} < \delta$时,恒有$f(x) < 0$**
>
>   题目描述Eg:题目已知极限值$\lim_{x \to 0} \frac{f(x)}{x} = 2$$\rightarrow$​结论邻域内恒有:$\frac{f(x)}{x} > 0$

**局部保号性定理(2):**[算出来的极限大小无法决定落点,最终落点可能是下界]

>   **若在$x_0$的去心邻域内恒有$f(x) > 0$(或$f(x) \ge 0$),且极限$\lim_{x \to x_0} f(x) = A$存在,则必有$A \ge 0$**
>
>   函数f(x)在x=0处连续,且在局部去心邻域内满足f(x)>0,则必定推导出$lim_{x\rightarrow 0}f(x)>0$是错误的,是$\geq$
>
>   题目描述Eg:题目已知在邻域内$\frac{f(x)}{x} > 0$且极限存在$\rightarrow$结论:$\lim_{x \to 0} \frac{f(x)}{x} \ge 0$

**考法:绝对值脱壳**

>   Eg:$lim_{x\rightarrow 0}\frac{f(x)}{x}=2$时,2>0,根据局部保号性,$\frac{f(x)}{x}>0$,分子分母同号:
>
>   $x\rightarrow 0^+$时,x>0,分子分母同号,所以|f(x)|=f(x);
>
>   $x\rightarrow 0^-$时,x<0,分子分母同号,所以|f(x)|=-f(x)
>
>   >   目的:进一步的考可导性
>   >
>   >   $$\lim_{x \to 0^+} \frac{\vert{}f(x)\vert{}}{x} = \lim_{x \to 0^+} \frac{f(x)}{x} = 2$$;$$\lim_{x \to 0^-} \frac{\vert{}f(x)\vert{}}{x} = \lim_{x \to 0^-} \frac{-f(x)}{x} = -2$$
>   >
>   >   左右极限不相等,因此$\lim_{x \to 0} \frac{\vert{}f(x)\vert{}}{x}$不存在
>   >
>   >   若已知$f(0)=0$,则直接得出$\vert{}f(x)\vert{}$在$x=0$处不可导(且该点为尖点)

#### 函数极限的性质(4):四则运算

$\lim(f \pm g) = A \pm B$,$\lim(f \cdot g) = A \cdot B$,$\lim\frac{f}{g} = \frac{A}{B}\ (B \ne 0)$

**死法(1):[加减法]必须各部分极限均存在,加减法不可随意拆分->[解决方法:整体同分]**

**死法(2):[乘除法]不能部分带入极限值,必须整体带入**

**死法(3):[乘除法]分母极限为0,除法直接失效,应该进行$\frac{0}{0}$或$\frac{A}{0}$的未定式/无穷大判定**

技巧(1):[提取公因子]乘除法中极限不为0的因子方可提前提出来计算

技巧(2):[单项传导法]$\lim f(x) = A$存在,$\lim [f(x) + g(x)] = C$存在,	 [则必能反推$\lim g(x) = C - A$必定存在]

​		$\lim \frac{f(x)}{g(x)} = A$存在,$\lim f(x) = 0$且$A \neq 0$,    	[则必有分母$\lim g(x) = 0$]

**加减乘除视角下的极限是否存在:**

1.$limf$和$limg$中有一个不存在:

>   [1]$\lim(f \pm g) = A \pm B$   $A\pm不存在=不存在$	Eg:$lim_{x\rightarrow 0}(\frac{sinx}{x}+sin\frac{1}{x})=1+振荡=不存在$
>
>   [2]$\lim(f \cdot g) = A \cdot B$	$A\cdot不存在=不存在$       Eg:$lim_{x\rightarrow}xsin\frac{1}{x}=0\cdot振荡=0$
>
>    {注意:对于振荡有没有无穷小}	               Eg:$lim_{x\rightarrow}xsin\frac{1}{x^2}=0\cdot振荡=0$

2.$limf$和$limg$都不存在:

>[1]$\lim(f \pm g) = A \pm B$   $不存在\pm不存在=???$       Eg:$lim_{x\rightarrow 0}(\frac{1}{x}-\frac{1}{x})=0$,$lim_{x\rightarrow 0}(\frac{2}{x}-\frac{1}{x})=\infty$
>
>[2]$\lim(f \cdot g) = A \cdot B$	$不存在\cdot不存在=???$	 Eg:$lim_{x\rightarrow 0}sin\frac{1}{x}cos\frac{1}{x}=\frac{1}{2}sin\frac{2}{x}不存在$

**复合函数极限运算法则**

$\lim_{x \to x_0} g(x) = u_0$且$\lim_{u \to u_0} f(u) = A\Rightarrow\lim_{x \to x_0} f(g(x)) = A$

>   成立条件[1]:[外层连续]外层函数$f(u)$在点$u_0$处连续即($A = f(u_0)$)
>
>   成立条件[2]:[内层不踩]存在$x_0$的去心邻域,在此邻域内恒有$g(x) \neq u_0$

Eg:设$g(x) = 0$,$f(u) = \begin{cases} 1, & u \neq 0 \\ 0, & u = 0 \end{cases}$.当$x \to 0$时,$g(x) \to 0$;而当$u \to 0$时,$\lim_{u \to 0} f(u) = 1$

若直接换元会误以为$\lim_{x \to 0} f(g(x)) = 1$；但实际复合函数$f(g(x)) = f(0) \equiv 0$

(原因:外层$f$在0处不连续,且内层$g(x)$恒等于0踩中了中心点,双条件全破

## 3.函数的无穷小

定义(1):若$\lim_{x \to x_0} f(x) = 0$,则称$f(x)$为当$x \to x_0$时的无穷小量

定义(2):若$\lim_{x \to \infty} f(x) = 0$,则称$f(x)$为当$x \to \infty$时的无穷小量

定义(3):$\lim f(x) = A \iff f(x) = A + \alpha(x)$,其中$\alpha(x)$是无穷小量

***

无穷小的性质(1):**有限个**无穷小的和/差/积仍为无穷小,无穷个会转换为**定积分/级数**

无穷小的性质(2):有界量$\times$无穷小量$$=$$无穷小量

无穷小的性质(3):无穷小和无穷大是倒数关系

***

**对于当$x \to x_0$时,$\alpha(x)$和$\beta(x)$均为无穷小,且$\beta(x) \ne 0$,对于$lim\frac{\alpha(x)}{\beta(x)}$:**

**<font color=red>(并不是$lim\frac{\alpha(x)}{\beta(x)}$都能比阶,$lim\frac{\alpha(x)}{\beta(x)}$的化简后的极限要存在!!)</font>**

无穷小的比阶(1):$lim\frac{\alpha(x)}{\beta(x)}=0$	$\alpha$是比$\beta$高阶的无穷小

无穷小的比阶(2):$lim\frac{\alpha(x)}{\beta(x)}=\infty$	$\alpha$是比$\beta$低阶的无穷小

无穷小的比阶(3):$lim\frac{\alpha(x)}{\beta(x)}=C\not=0$$\alpha$是比$\beta$同阶的无穷小

无穷小的比阶(4):$lim\frac{\alpha(x)}{\beta(x)}=1$  $\alpha$是比$\beta$等价的无穷小

## 4.函数极限的计算

#### 1.关键要点

两个关键公式[1]:$lim_{u\rightarrow 0}\frac{sinu}{u}=1$

两个关键公式[2]:$lim_{u\rightarrow 0}(1+u)^{\frac{1}{u}}=e$	$lim_{u\rightarrow 0}(1+\frac{1}{u})^u=e$

无穷大增长体系:$$\ln^a x \ll x^b \ll c^x \ll x^x \quad (a > 0, b > 0, c > 1)$$

>[对数函数<幂函数]$\lim_{x \to +\infty} \frac{\ln^a x}{x^b} = 0$
>
>[幂函数<指数函数]$\lim_{x \to +\infty} \frac{x^b}{c^x} = 0$
>
>[无穷大不是数]\(严禁出现$\infty - \infty = 0$或$\frac{\infty}{\infty} = 1$)确定因子,提取最高阶主部

极限计算的体系(1):加减法[皮亚诺余项]:展开为多项式,确定劫数

极限计算的体系(2):乘除法[柯西体系]:  等价无穷小,柯西定理

#### 2.整体解法

[代数]\:[可以提取非0因子],[可以进行等价代换],[需要参数反推]

[微分]\:[$\frac{0}{0}, \frac{\infty}{\infty}, 0 \cdot \infty, \infty - \infty, 1^\infty, 0^0, \infty^0$]

[降维]\:[出现f(b)-f(a)结构],[出现变上限积分结构]

[夹逼]\:[递推数列],[无法求和的n项和],[振荡函数],[$$[x]$$函数]

#### 3.具体解法

###### **解法[1]:[代数]四则运算**

(0)有非0因子应该直接提出,或者考虑凑未定型(看结果是不是0)

(1)$\lim[kf(x) \pm lg(x)] = kA \pm lB$

(2)$\lim[f(x) \cdot g(x)] = A \cdot B$		

(3)$\lim\frac{f(x)}{g(x)} = \frac{A}{B}\ (B \ne 0)$(分母不为0)

(4)对有限实数n,$lim[f(x)]^n = lim[f(x)\cdots f(x)]$

###### **解法[2]:[代数]柯西体系比阶[需要趋于0]**

前提:$x \to x_0$或$x \to 0$,$\lim f(x) = 0$且$\lim g(x) = 0$(一般是$x \to 0$,但也可以通过代换$t = x - x_0$使$t \to 0$)

**[用法1]根据极限结果凑部分:**

>   凑分子:若$\lim \frac{f(x)}{g(x)} = A$(同阶无穷小),已知$\lim g(x) = 0$,	则$\lim f(x) = 0$
>
>   凑分母:若$\lim \frac{f(x)}{g(x)} = A\ (A \neq 0)$(同阶无穷小),已知$\lim f(x) = 0$, 则$\lim g(x) = 0$

**[用法2]比阶($x \to 0$时):**

>$\lim \frac{f(x)}{g(x)} = A \neq 0$:    $f(x)$与$g(x)$为同阶无穷小
>
>$\lim \frac{f(x)}{g(x)} = 0$:	$f(x)$为$g(x)$的高阶无穷小
>
>$\lim \frac{f(x)}{g(x)} = \infty$:	$f(x)$为$g(x)$的低阶无穷小

###### **解法[3]:[代数]等价无穷小比阶**

<font color=red>重要前提[1]:必须自变量趋于0:</font>		      需要$x \to 0$或通过代换$t = x - x_0 \to 0$

<font color=red>重要前提[2]:使用等价无穷小前,看好次数再代入:</font>	如果次数不同考虑开泰勒

<font color=red>重要前提[3]:上下同阶,可以放小:</font>		    取幂次最低的($x \to 0$时,$x+x^2$可以忽略$x^2$)

​						取幂次最高的($x \to \infty$时,$x+x^2$可以忽略$x$)

**等价无穷小公式:**

>   一阶等价:	$x \sim \sin x \sim \tan x \sim \arcsin x \sim \arctan x \sim (e^x - 1) \sim \ln(1+x)$
>
>   ​		==$\sim \ln(x+\sqrt{1+x^2}) \sim \sqrt{1+x} - \sqrt{1-x} \sim e^x - \cos x$==	

>   二阶等价:	$\frac{1}{2}x^2 \sim (1 - \cos x) \sim [x - \ln(1+x)] \sim (e^x - 1 - x) \sim (\sec x - 1)$

>   三阶等价:	$\frac{1}{6}x^3$系:$(x - \sin x) \sim (\arcsin x - x) \sim (\sin x - \arctan x) \sim \frac{1}{6}x^3$
>
>   ​			(负数变形:$- \frac{1}{6}x^3 \sim \sin x - x \sim x - \arcsin x \sim \arctan x - \sin x$)
>
>   ​		$\frac{1}{3}x^3$系:$\tan x - x \sim x - \arctan x \sim \frac{1}{3}x^3$
>
>   ​			(负数变形:$- \frac{1}{3}x^3 \sim x - \tan x \sim \arctan x - x$)
>
>   ​		$\frac{1}{2}x^3$系:$\tan x - \sin x \sim \frac{1}{2}x^3$
>
>   ​			(负数变形:$\sin x - \tan x \sim - \frac{1}{2}x^3$)

>   指数/对数:     $(1+x)^a - 1 \sim a x\ (a \neq 0)$
>
>   ​		$a^x - 1 \sim x \ln a$
>
>   ​		$\log_a(1+x) \sim \frac{x}{\ln a}$

>   代换变形:	$u \sim \ln(1+u) \to u+1 \sim \ln(1+u)+1$(退化) 
>
>   ​		<font color=deeppink>$u-1 \sim \ln u$</font>

**三阶不等式链:** 

$\arctan x < \sin x < x < \arcsin x < \tan x$

>   $$\frac{1}{6}x^3$$系:[相隔0个]$\arctan x < \sin x < x < \arcsin x < \tan x$
>
>   $$\frac{1}{3}x^3$$系:[相隔1个]$\arctan x < x  < \tan x$;	$sinx<arcsinx$
>
>   $$\frac{1}{2}x^3$$系:[相隔2个]$\sin x < \tan x$;	   $arctanx<arcsinx$
>
>   $$\frac{2}{3}x^3$$系:[相隔3个]$\arctan x <\tan x$
>
>   注:仅三阶成立,并且在$x \to 0\ (x \to 0^+)$时成立,<font color=deeppink>$x < 0\ (x \to 0^-)$时反向</font>

###### **解法[4]:[微分]洛必达法则**

重要前提[1]分式形式:$x \to a$/$x \to 0$/$x \to \infty$时,[函数$f(x)$及$F(x)$都趋于$0\ (\frac{0}{0})$]或[函数$f(x)$及$F(x)$都趋于无穷大$(\frac{\infty}{\infty})$]

重要前提[2]导数存在:$f(x)$及$F(x)$在点$a$的某去心邻域内存在导数[导数能算],且$F'(x) \neq 0$(分母不为$0$) (或在趋于无穷的时候也有导数)

重要前提[3]极限存在:$\lim \frac{f'(x)}{F'(x)}$存在或为无穷大,则$\lim \frac{f(x)}{F(x)} = \lim \frac{f'(x)}{F'(x)}$

***

注意要求[1]:反复使用:若一直满足条件,则法则可复用

注意要求[2]:恒0才不能用:$F'(x) \neq 0$不包括周期性归零(如包含$\sin x, \cos x$的震荡函数)

注意要求[3]:致命缺陷:使用切线模拟时,如果在微观上**导数震荡不存在(极限不存在)**,但原极限实际是存在的,

>   此时不能直接下结论极限不存在,必须改用**泰勒展开**或**夹逼定理**

###### **解法[5]:[微分]泰勒公式**

核心:使用多项式表示任意函数

>   (注:极限章节只用麦克劳林(在0处展开)+皮亚诺余项，拉格朗日泰勒是微分中证明中值等式的)

主要内容:设$f(x)$在$x=0$处$n$阶可导，则存在$x=0$的一个邻域，对该邻域内任一点$x$，有:

```math
f(x) = f(0) + f'(0)x + \frac{f''(0)}{2!}x^2 + \frac{f ({(3)}(0)}{3!}x)3 + \frac{f ({(4)}(0)}{4!}x)4 + \frac{f ({(5)}(0)}{5!}x)5 + o(x^5)
```

注意事项[1]:[在0处展开]$x \to a$时严禁现场手推，而是令$t = x - a$，在麦克劳林处用

注意事项[2]:[抽象函数]:$f(x) = f(x_0) + f'(x_0)(x - x_0) + \frac{f''(x_0)}{2!}(x - x_0)^2 + \frac{f^{(3)}(x_0)}{3!}(x - x_0)^3 + \dots + \frac{f^{(n)}(x_0)}{n!}(x - x_0)^n + o((x - x_0)^n)$

注意事项[3]:[展开的深度]:分母的最高次幂

注意事项[3]:[展开的深度]:加减法的非$0$主成分

注意事项[4]:[复合嵌套深度]:$f(g(x))$展开时，内层$g(x)$的展开阶数不能低于外层

注意事项[5]:[皮亚诺余项公式]:

[加减误差主导在低精度]$o(x^m) \pm o(x^n) = o(x^L)$，其中$L$是$\min\{m, n\}$，以低阶为大

>   Eg1:[o(x^3^)+o(x^5^),主要误差在x^3^上]	
>
>   Eg2:[o(x^3^)-o(x^3^),结果却等于o(x^3^),而非0]

[乘除误差会升阶]$o(x^m) \cdot o(x^n) = o(x^{m+n})$，$x^m \cdot o(x^n) = o(x^{m+n})$

>Eg1:[$x^2 \cdot o(x^3) = o(x^5)$,升阶]
>
>Eg2:[$o(x^2) \cdot o(x^3) = o(x^5)$,升阶]

[常数倍率可忽略]$o(c x^m) = o(k x^m) = k \cdot o(x^m) = o(x^m)$（$k \neq 0$且为常数）

>   Eg1:[$5 \cdot o(x^3) = o(x^3)$]\[$o(5x^3) = o(x^3)$

**泰勒公式[1]:麦克劳林公式+皮亚诺余项**

```math
f(x) = \sum_{k=0}^{n} \frac{f^{(k)}(0)}{k!} x^k + o(x^n)
```

[1]$e^x = e^0 + \frac{e^0}{1!}x + \frac{e^0}{2!}x^2 + \frac{e^0}{3!}x^3 + \frac{e^0}{4!}x^4 + \frac{e^0}{5!}x^5 + o(x^5)$		$\Rightarrow e^x = 1 + x + \frac{x^2}{2} + \frac{x^3}{6} + \frac{x^4}{24} + \frac{x^5}{120} + o(x^5)$

[2]$\sin x = \sin 0 + \frac{\cos 0}{1!}x + \frac{-\sin 0}{2!}x^2 + \frac{-\cos 0}{3!}x^3 + \frac{\sin 0}{4!}x^4 + \frac{\cos 0}{5!}x^5 + o(x^5)$ $\Rightarrow \sin x = x - \frac{x^3}{6} + \frac{x^5}{120} + o(x^5)$

[3]$\cos x = \cos 0 + \frac{-\sin 0}{1!}x + \frac{-\cos 0}{2!}x^2 + \frac{\sin 0}{3!}x^3 + \frac{\cos 0}{4!}x^4 + \frac{-\sin 0}{5!}x^5 + o(x^5)$$\Rightarrow \cos x = 1 - \frac{x^2}{2} + \frac{x^4}{24} + o(x^5)$

[4]$(1+x)^a = 1^a + \frac{a(1+0)^{a-1}}{1!}x + \frac{a(a-1)(1+0)^{a-2}}{2!}x^2 + \frac{a(a-1)(a-2)(1+0)^{a-3}}{3!}x^3$    $\Rightarrow (1+x)^a = 1 + ax + \frac{a(a-1)}{2!}x^2 + \frac{a(a-1)(a-2)}{3!}x^3$

   (Eg:$\sqrt{1+x} = (1+x)^{\frac{1}{2}}$					$\Rightarrow \sqrt{1+x} \sim 1+\frac{x}{2}$)

**泰勒公式[2]:等比级数:**

基本原理:$\frac{1}{1-q} = 1 + q + q^2 + q^3 + \dots + q^n$[等价于求和公式]

>当$|q|<1$时$\lim = \frac{1}{1-q}$，
>
>当$|q|>1$时$lim=\infty$不存在，
>
>当$q=-1$震荡

[5]$\frac{1}{1-x} \Rightarrow$令$q=x$，		 $\Rightarrow \frac{1}{1-x} = 1 + x + x^2 + x^3 + x^4 + x^5 + o(x^5)$

[6]$\frac{1}{1+x} \Rightarrow$令$q=-x$，		$\Rightarrow \frac{1}{1+x} = 1 - x + x^2 - x^3 + x^4 - x^5 + o(x^5)$

[7]$a^x = e^{x \ln a} \Rightarrow[令X = x \ln a]$} 	$\Rightarrow a^x = 1 + (x \ln a) + \frac{(x \ln a)^2}{2!} + \frac{(x \ln a)^3}{3!} + \frac{(x \ln a)^4}{4!} + \frac{(x \ln a)^5}{5!} + o(x^5)$

**泰勒公式[3]:积分法**

$ln(1+x) = \int_{0}^{x} \frac{1}{1+t} dt = \int_{0}^{x} (1 - t + t^2 - t^3 + t^4 - t^5 \dots) dt$ 	$\Rightarrow \ln(1+x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \frac{x^4}{4} + \dots$

{$\because\frac{d}{dx}(\arctan x) = \frac{1}{1+x^2} \Rightarrow$令$q=-t^2$（$\frac{1}{1+t^2} = 1 - t^2 + t^4 + o(t^4)\Rightarrow \arctan x = \int_{0}^{x} (1 - t^2 + t^4) dt$}

>   [8]$\Rightarrow \arctan x = x - \frac{x^3}{3} + \frac{x^5}{5} + o(x^5)$

{$\because\frac{d}{dx}(\arcsin x) = \frac{1}{\sqrt{1-x^2}} = (1-x^2)^{-\frac{1}{2}}$[代入$(1+x)^a$，令$x = -x^2, a = -\frac{1}{2} \Rightarrow 1 + \frac{1}{2}x^2 + \frac{3}{8}x^4 + \frac{5}{16}x^6 \dots ]\Rightarrow \int_{0}^{x} \frac{1}{\sqrt{1-t^2}} dt(再积分)$}

>   [9]$\Rightarrow \arcsin x = x + \frac{x^3}{6} + \frac{3x^5}{40} + o(x^5)$

{$\because\arcsin x + \arccos x = \frac{\pi}{2}$}

>   $[10]\Rightarrow \arccos x = \frac{\pi}{2} - x - \frac{x^3}{6} - \frac{3x^5}{40} + o(x^5)$

**泰勒公式[4]:多项式长除法&待定系数法**

基本原理:$\tan x = \frac{\sin x}{\cos x}$，$\cot x = \frac{\cos x}{\sin x}$，$\sec x = \frac{1}{\cos x}$，$\csc x = \frac{1}{\sin x}$

>   已知$\sin x = x - \frac{x^3}{6} + \frac{x^5}{120} + o(x^5)$，$\cos x = 1 - \frac{x^2}{2} + \frac{x^4}{24} + o(x^4)$)}

$\tan x = \frac{\sin x}{\cos x} \Rightarrow$设$\tan x = ax + bx^3 + cx^5$(注:奇函数,无偶次项)

>   $\therefore tanxcosx = (ax + bx^3 + cx^5)(1 - \frac{x^2}{2} + \frac{x^4}{24}) = x - \frac{x^3}{6} + \frac{x^5}{120}$
>
>   展开:$ax - \frac{a}{2}x^3 + \frac{a}{24}x^5 + bx^3 - \frac{b}{2}x^5 + cx^5 = ax + (b-\frac{a}{2})x^3 + (c-\frac{b}{2}+\frac{a}{24})x^5$*(注:少了系数d和7阶项)*
>
>   比较系数得$a=1,\ b-\frac{1}{2}=-\frac{1}{6} \Rightarrow b=\frac{1}{3},\ c-\frac{1}{6}+\frac{1}{24}=\frac{1}{120} \Rightarrow c=\frac{2}{15}$

[11,奇函数]$\therefore \tan x = x + \frac{x^3}{3} + \frac{2x^5}{15} + o(x^5)$

[12,奇函数]$\cot x(0)$不存在$\Rightarrow (\cot x = \frac{1}{x} - \frac{x}{3} - \frac{x^3}{45} + o(x^3))$

[13,奇函数]$\csc x(0)$不存在$\Rightarrow (\csc x = \frac{1}{x} + \frac{x}{6} + \frac{7x^3}{360} + o(x^3))$

[14,偶函数]$\sec x$偶$\sec 0 \neq 0$,$a + bx^2 + cx^4 \Rightarrow \sec x = 1 + \frac{x^2}{2} + \frac{5x^4}{24} + o(x^4)$

###### **解法[6]:[微分]7种未定式计算**

未定式类型前提:$\frac{0}{0}$，$\frac{\infty}{\infty}$，$0 \cdot \infty$，$\infty - \infty$，$\infty^0$，$0^0$，$1^\infty$

题型:直接计算极限，求式中参数，已知极限(组合极限)求另一极限，无穷小比阶:

**步骤(1):化简优先**(拆项,合并,同除最高次幂)

操作[1]:提取因式:提出极限不为$0$的因式（实数）: 以后标为恒定数部分，直接提出来:

操作[2]:加减禁用:等价无穷小（整体等价无穷小）替换:$\Rightarrow$ 严格加减禁用（除非确保主部不抵消)

操作[3]:恒等变形（形式相同的提取公因式）:

>   Eg:$e^{\sin x} - e^{\tan x} = e^{\tan x}(e^{\sin x - \tan x} - 1) \sim \sin x - \tan x$	(利用了$e^u - 1 \sim u$的整体替换)

操作[4]:换元法:$\to$极限偏移,整体无穷小替换:

>   Eg:只要有幂指函数，一律化为$a^b = e^{b \ln a}$，无论什么型！

**步骤(2):判断运算类型和计算方法**

(1)$\frac{0}{0}$型:

>   \[思路]:化简后优先泰勒/洛必达:
>
>   \[思路]:等价无穷小尽量别乱用（分子可用，加减不用）:
>
>   \[思路]:连续型直接带值
>
>   \[思路]:遇事不决洛

(2)$\frac{\infty}{\infty}$型: 抓大头&洛必达

>   [思路]多项式抓大头:$\frac{an^m}{bn^n}$:[$m=n$取系数]；[若$m>n$,分子高趋于$\infty$]；[若$n<m$,分母高趋于$0$]
>
>   [思路]抓常数:$\sqrt{H x^2} \to x^2 \to x$（$x \to +\infty$）
>
>   [思路]无穷大比阶:$\ln^\alpha x \ll x^\beta \ll a^x \ll x! \ll x^x$($x \to +\infty, \alpha,\beta>0, a>1$):
>
>   注意:三角函数可能干扰($x\to \infty$一直在震荡),不能直接洛! $\to$转换成代数[振荡+有界=0]
>
>   注意:无穷大比阶别上头，遇事不决洛！

(3)$0 \cdot \infty$型: 转化为$\frac{0}{0}$或$\frac{\infty}{\infty}$

>   [思路]下放一个因子变成$\frac{0}{\frac{1}{\infty}} = \frac{0}{0}$或$\frac{\infty}{\frac{1}{0}} = \frac{\infty}{\infty}$$\to$洛必达:
>
>   下放策略（谁好导谁留上面）:
>
>   $\arcsin x, \arctan x, \ln x \to$放到分子$\to$直接导（求导简单，超越式）:
>
>   $x^a, e^{\beta x}, \sin(rx) \to$放到分母$\to$变为$x^{-a}, e^{-\beta x}, \frac{1}{\sin(rx)}$:

④$\infty - \infty$型: 

核心思路:通分 / 有理化$\to$转化为$\frac{0}{0}$型再用泰勒:

技巧:倒代换$t = \frac{1}{x}$，转换极限目标:

⑤$\infty^0$和$0^0$型: 

核心思路:进入幂指恒等式$a^b = e^{\ln(a^b)} = e^{b \ln a}$:

做法:去求$b \ln a$的极限，算完别忘了套回$e$的指数上:

⑥$1^\infty$型:

核心思路:进入特殊幂指$a^b = e^{\ln(a^b)} = e^{b \ln a}$:

核心公式: 因为$a \to 1$，所以$\ln a \sim a - 1$$\Rightarrow$极限直接转化为$e^{b(a-1)}$:

做法:去干$b(a-1)$的极限，别忘了套回$e$:

警告: 慎用整体无穷小:如果$(a-1)b = nx$，带有$x$无法化简的，禁止用:

###### **解法[7]:[降维]微分/积分中值定理**



###### **解法[8]:[夹逼]夹逼定理**



###### **解法[9]:[夹逼]单调有界准则**



###### **解法[10]:[夹逼]定积分定义**

## 5.解题技巧

(1)自转换三角不等式:已知$\lim_{x \to x_0} f(x) = A$

>(1)取阈值:极限定义,对任意$\varepsilon > 0$均成立,特取$\varepsilon = 1$
>
>(2)做差:  恒有$$\vert{}f(x) - A\vert{} < 1$$	[$\delta > 0$,当$0 < \vert{}x - x_0\vert{} < \delta$时]
>
>(3)不等式:$$\vert{}f(x)\vert{} = \vert{}(f(x) - A) + A\vert{} \ \le \vert{}f(x) - A\vert{} + \vert{}A\vert{} \ < 1 + \vert{}A\vert{}$$
>
>(4)上界:$M = 1 + \vert{}A\vert{}$,则有$\vert{}f(x)\vert{} < M$
>
>取$\epsilon=1,|f(x)|\leq 1+|A| = M$(M是确定的数)

(2)**<font color=deeppink>综合题:人为构造$\epsilon$,利用局部保号性压住分母</font>**

>   设函数$f(x)$在点$x_0$的去心邻域内有定义,已知$\lim_{x \to x_0} f(x) = A > 0$
>
>   **证**:存在$\delta > 0$,使得当$0 < \vert{}x - x_0\vert{} < \delta$时,恒有$f(x) > \frac{A}{2}$
>
>   [定义极限为A,则无论什么正数$\varepsilon$,$\vert{}f(x) - A\vert{} < \varepsilon \iff A - \varepsilon < f(x) < A + \varepsilon$
>
>   **目标**:$f(x) > \frac{A}{2}$,所以$$A - \varepsilon = \frac{A}{2} \implies \varepsilon = \frac{A}{2}$$]
>
>   **解**:因为$\lim_{x \to x_0} f(x) = A > 0$,$$\vert{}f(x) - A\vert{} < \varepsilon \iff A - \varepsilon < f(x) < A + \varepsilon$$
>
>   取$\varepsilon = \frac{A}{2} > 0$,当$0 < \vert{}x - x_0\vert{} < \delta$时,$$f(x) > A - \varepsilon = A - \frac{A}{2} = \frac{A}{2}$$,
>
>   在去心邻域$0 < \vert{}x - x_0\vert{} < \delta$内恒有$f(x) > \frac{A}{2} > 0$证毕

## 题型

(1.15):计算极限,去除实数部分

(1.16):复合分段函数,带入后分左右讨论,左右极限不相等,极限不存在

(1.17):证明函数的有界**开**区间:不能直接利用**[连续函数在闭区间上的有界性定理]**

>   做法:在没有定义的点上求极限
>
>   判定方式:在定点存在极限,则定点间有界[定点A,定点B],[定点A,$A+\delta$]

(1.18):根据局部保号性去掉lim,然后讨论分子分母正负,去心邻域前后一致

>   **坑:分式中的分母是否需要讨论($x \in (-\delta, 0)$和$x \in (\delta, 0)$)**
>
>   本题1-cosx在$0^+$和$0^-$恒为正

(1.19):通过三角函数在指数函数e中构造-1,然后等价无穷小代换,联系x^3^

(1.20):通过极限的四则运算证明等式成立

(1.21):为了避免sinx的极限为0导致和最终非0结果相悖,所以设置分母的极限也为0

## 错误思想

(1)为了好求,求了一个好求的点,然后用$\delta=N$来转移

>绝对不能,极限是局部点态性质;只有函数具有全局刚性约束才可以转移
>
>1.微分中值定理:f(x1)>0,x2>x2,函数单调递增,f(x2)>0
>
>2.连续函数的保号性:连续无零点,求出f(x0)>0,整个函数区间都>0
>
>3.周期性/对称性的平移

(2)对$\epsilon$和$\delta$理解错误

>   $\epsilon$:源于Error,是y上的误差容忍度	
>
>   [极限值是A,函数值f(x)必须落在区间($$A-\epsilon,A+\epsilon$$)上]
>
>   $\delta$:源于Distance,是x上的去心领域半径
>
>   [为了让函数值落在误差带上,自变量x必须限制在一个很近的范围]

(3)$$\forall \varepsilon > 0, \ \exists \delta > 0, \ \text{当 } 0 < \vert{}x - x_0\vert{} < \delta \text{ 时,恒有 } \vert{}f(x) - A\vert{} < \varepsilon$$

>确定误差:[自动确认/人工确认],比如$\varepsilon = 0.0001$
>
>(如果极限真的等于$A$,系统必定能找到一个足够小的响应半径$\delta$)
>
>结果验证:只要自变量x进入这个$\delta$控制半径内(且$x \neq x_0$)
>
>>   算出来的所有函数值$f(x)$与$A$的差距必定被锁死在$\varepsilon$之内

,,,,
