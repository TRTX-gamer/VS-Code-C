## 数组长度的计算

整形数组大小：sizeof(数组名)/sizeof(数组类型)。 字符数组大小：strlen(数组名)+1,1因为要加上'/0'，所以再加1

## 字符串长度的计算

字符串长度是指字符串所含的字符个数，但不包括最后的'\0'。sizeof(str)  
C语言的字符串是由字符数组形式保存的，并约定'\0'(ascii码值为0)作为字符串结束符。其长度为从字符串开始，到'\0'结束，所有字符的个数，不包括'\0'本身。  
"abcd\n" -------长度应该为5(\n转义符) ，转义字符也算一个字符的。  
"abc\000def\n" -------长度应该为3 ，到\0就结束。  

---

原文链接：https://blog.csdn.net/weixin_42710627/article/details/85132588