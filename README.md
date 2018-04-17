# add_binary

两个字符串分别表示二进制数，将其相加的结果用字符串返回。

首先将两个字符串表示的数字分别按位反向存入vector（即0，2，4，8……），在while循环里按位相加，存入vector，当有一个vector走完，停止循环。

将不为零的extra或没走完的vector继续放入vector，放完后，再反向转为string。
