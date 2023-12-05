#计算累加和程序
main:
	lw a0,0(x0)         # 从数据存储器地址0x0000单元中读取参数n到寄存器a0；
	addi a2, x0,1       # 循环变量i，存放在a2，初值为1 
	add a3,x0,x0        # 累计和存放在a3，初值为0
loop:
	add a3, a3, a2      # 将a3=a3+i
	beq a2, a0, finish  # 若i=n，则跳出循环
            addi a2, a2, 1      # i++
           jal x0, loop         # 无条件跳转到loop执行
finish:
	sw a3, 8(x0)        # 将累加结果保存到数据存储器地址0x0008单元
end:
	jal x0, end	        # 无条件跳转到end执行
