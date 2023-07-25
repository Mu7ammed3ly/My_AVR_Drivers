#ifndef DIO_Bit_Math_h
#define DIO_Bit_Math_h

#define set_Bit(reg,bit_Num)   ((reg) |= (1<<(bit_Num)))

#define clr_Bit(reg,bit_Num)   ((reg) &= ~(1<<(bit_Num)))

#define tog_Bit(reg,bit_Num)   ((reg) ^= (1<<(bit_Num)))

#define get_Bit(reg,bit_Num)   (((reg)>>(bit_Num))&1)

#endif