# 运算符总结

## 算数运算符
| 运算符 |               描述               |             实例 |
| :----- | :------------------------------: | ---------------: |
| +      |         把两个操作数相加         |  A + B 将得到 30 |
| -      | 从第一个操作数中减去第二个操作数 | A - B 将得到 -10 |
| *      |         把两个操作数相乘         | A * B 将得到 200 |
| /      |           分子除以分母           |   B / A 将得到 2 |
| %      |     取模运算符，整除后的余数     |   B % A 将得到 0 |
| ++     |     自增运算符，整数值增加 1     |    A++ 将得到 11 |
| --     |     自减运算符，整数值减少 1     |     A-- 将得到 9 |

---

## 关系运算符
| 运算符 |                              描述                              |            实例 |
| :----- | :------------------------------------------------------------: | --------------: |
| ==     |        检查两个操作数的值是否相等，如果相等则条件为真。        | (A == B) 为假。 |
| !=     |       检查两个操作数的值是否相等，如果不相等则条件为真。       | (A != B) 为真。 |
| >      |    检查左操作数的值是否大于右操作数的值，如果是则条件为真。    |  (A > B) 为假。 |
| <      |    检查左操作数的值是否小于右操作数的值，如果是则条件为真。    |  (A < B) 为真。 |
| >=     | 检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。 | (A >= B) 为假。 |
| <=     | 检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。 | (A <= B) 为真。 |

---

## 逻辑运算符
| 运算符 |                                        描述                                        |              实例 |
| :----- | :--------------------------------------------------------------------------------: | ----------------: |
| &&     |                称为逻辑与运算符。如果两个操作数都非零，则条件为真。                |   (A && B) 为假。 |
| \|\|   |           称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。           | (A \|\| B) 为真。 |
| !      | 称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。 |  !(A && B) 为真。 |

---

## 位运算符
| 运算符 |                              描述                              |               实例 |
| :----- | :------------------------------------------------------------: | -----------------: |
| ==     |        检查两个操作数的值是否相等，如果相等则条件为真。        |    (A == B) 为假。 |
| !=     |       检查两个操作数的值是否相等，如果不相等则条件为真。       |    (A != B) 为真。 |
| &gt;   |    检查左操作数的值是否大于右操作数的值，如果是则条件为真。    |  (A &gt; B) 为假。 |
| &lt;   |    检查左操作数的值是否小于右操作数的值，如果是则条件为真。    |  (A &lt; B) 为真。 |
| &gt;=  | 检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。 | (A &gt;= B) 为假。 |
| &lt;=  | 检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。 | (A &lt;= B) 为真。 |

---

## 赋值运算符
| 运算符 |                               描述                               |                            实例 |
| :----- | :--------------------------------------------------------------: | ------------------------------: |
| =      |         简单的赋值运算符，把右边操作数的值赋给左边操作数         | C = A + B 将把 A + B 的值赋给 C |
| +=     | 加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数 |         C += A 相当于 C = C + A |
| -=     | 减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数 |         C -= A 相当于 C = C - A |
| *=     | 乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数 |         C *= A 相当于 C = C * A |
| /=     | 除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数 |         C /= A 相当于 C = C / A |
| %=     |        求模且赋值运算符，求两个操作数的模赋值给左边操作数        |         C %= A 相当于 C = C % A |
| <<=    |                         左移且赋值运算符                         |       C <<= 2 等同于 C = C << 2 |
| >>=    |                         右移且赋值运算符                         |       C >>= 2 等同于 C = C >> 2 |
| &=     |                        按位与且赋值运算符                        |         C &= 2 等同于 C = C & 2 |
| ^=     |                       按位异或且赋值运算符                       |         C ^= 2 等同于 C = C ^ 2 |
| \|=    |                        按位或且赋值运算符                        |           C \| = 2 等同于 C = C | 2 |

---

## 杂项运算符 ↦ sizeof & 三元
| 运算符   |       描述       |                                 实例 |
| :------- | :--------------: | -----------------------------------: |
| sizeof() | 返回变量的大小。 |  sizeof(a) 将返回 4，其中 a 是整数。 |
| &        | 返回变量的地址。 |           &a; 将给出变量的实际地址。 |
| *        |  指向一个变量。  |                 *a; 将指向一个变量。 |
| ? :      |    条件表达式    | 如果条件为真 ? 则值为 X : 否则值为 Y |

---

## C 中的运算符优先级(从上到下)
| 类别       |              运算符               |   结合性 |
| :--------- | :-------------------------------: | -------: |
| 后缀       |         () [] -> . ++ - -         | 从左到右 |
| 一元       |  + - ! ~ ++ - - (type)* & sizeof  | 从右到左 |
| 乘除       |               * / %               | 从左到右 |
| 加减       |                + -                | 从左到右 |
| 移位       |               << >>               | 从左到右 |
| 关系       |             < <= > >=             | 从左到右 |
| 相等       |               == !=               | 从左到右 |
| 位与 AND   |                 &                 | 从左到右 |
| 位异或 XOR |                 ^                 | 从左到右 |
| 位或 OR    |                \|                 | 从左到右 |
| 逻辑与 AND |                &&                 | 从左到右 |
| 逻辑或 OR  |               \|\|                | 从左到右 |
| 条件       |                ?:                 | 从右到左 |
| 赋值       | = += -= *= /= %=>>= <<= &= ^= \|= | 从右到左 |
| 逗号       |                 ,                 | 从左到右 |

### 备注
+ [C 运算符](https://www.runoob.com/cprogramming/c-operators.html)

---

2021年2月19日16点50分