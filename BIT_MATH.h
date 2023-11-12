#ifndef BIT_MATH_H_
#define BIT_MATH_H_

// Macros for basic operations
// for bits in a register.

#define SET_BIT(REG,BIT)(REG |= (1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG &= ~(1<<BIT))
#define READ_BIT(REG,BIT) ((REG & (1<<BIT))>>BIT)
#define TOGGLE_BIT(reg,bit) reg=reg^(1<<bit)
#define is_bit_set(reg,bit) reg&(1<<bit)>>bit
#define is_bit_clr(reg,bit) !(reg&(1<<bit)>>bit)


#endif /* BIT_MATH_H_ */