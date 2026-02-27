# Chap2 队列

## 1.队列的基本概念

###### **1.队列的定义**

队列(Queue)也称作队,是**操作受限的线性表**,仅允许在表的一端进行插入,表的另一端删除

>   队列的操作特性为FIFO先进先出

###### **2.队列的基本操作**

```C++
InitQueue(&Q):	// 初始化队列
QueueEmpty(&Q):	// 判断队空
EnQueue(&Q,x):	// 入队操作,若队列未满,将x加入队尾
DeQueue(&Q,&x):	// 出队操作,若队列非空,删除队首元素
GetHead(Q,&x):	// 读取队首元素但不出队
```

## 2.队列的顺序存储结构

**队首指针指向队首元素,队尾指针指向队尾元素的下一个位置**

```C++
#define MaxSize 50
typedef struct{
  	ElemType data[MaxSize];
  	int front,rear;
}SqQueue;
```

>   **<font color=red>初始化:`Q.font = Q.rear =0`</font>**
>
>   **入队操作:当队列未满时,先将元素存入队尾,然后队尾指针+1**
>
>   **出队操作:当队列未空时,先取出队首元素,然后队首指针+1**
>
>   (队列只能判空(`Q.front = Q.rear = 0`)无法判满,可以假溢出)

## 3.循环队列

普通队列已经从物理上判死刑了(避免假溢出),所以引入循环队列(取模运算`%`)

###### **1.循环队列的ADT**

```C++
"初始状态":		Q.font = Q.rear = 0;
"队首指针进1":  Q.font = (Q.font + 1) % MaxSize;
"队尾指针进1":  Q.rear = (Q.rear + 1) % MaxSize;
"队列长度":		(Q.rear+MaxSize-Q.front) % MaxSize;
"出入队操作":	"目前统一按照顺时针方向移动"
```

**Q:循环队列中使用`Q.front == Q.rear`无法确定队空/队满**

Solution(1):牺牲一个存储单元作为头结点

>   队空:`Q.front == Q.rear;`
>
>   队满:`(Q.rear + 1) % MaxSize == Q.front;`
>
>   队列中元素个数:`(Q.rear - Q.front + MaxSize) % MaxSize`

Solution(2):计数(最简单)

>   队空:`Q.size = 0`
>
>   队满:`Q.size = MaxSize;`
>
>   队列中元素个数:`Q.size`

Solution(3):增加标志位(最简单)

>   队空:如果`flag==0`(无入队)并且`Q.front == Q.rear`
>
>   队满:如果`flag==1`(有入队)并且`Q.front == Q.rear`

###### **2.循环队列的基本运算**

```C++
```

