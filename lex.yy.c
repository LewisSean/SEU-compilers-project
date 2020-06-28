#include <stdio.h>
#include <stdlib.h>
void comment();
#define MAXSIZE 10000

char buffer[MAXSIZE];
int index = 0;
int state = 0;
int line = 0;
int buf_idx = 0;

char input() {
	return buffer[buf_idx++];
}

void comment(void)
{
	char c, prev = 0;
  
	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	puts("unterminated comment");
}


void action(int x) {
	switch(x) {
		case 0: {
			comment(); puts("MULTI_LINE_COMMENT"); 
			break;
		}
		case 1: {
			puts("SINGLE_LINE_COMMENT"); 
			break;
		}
		case 2: {
			puts("AUTO"); 
			break;
		}
		case 3: {
			puts("BOOL"); 
			break;
		}
		case 4: {
			puts("BREAK"); 
			break;
		}
		case 5: {
			puts("CASE"); 
			break;
		}
		case 6: {
			puts("CHAR"); 
			break;
		}
		case 7: {
			puts("COMPLEX"); 
			break;
		}
		case 8: {
			puts("CONST"); 
			break;
		}
		case 9: {
			puts("CONTINUE"); 
			break;
		}
		case 10: {
			puts("DEFAULT"); 
			break;
		}
		case 11: {
			puts("DO"); 
			break;
		}
		case 12: {
			puts("DOUBLE"); 
			break;
		}
		case 13: {
			puts("ELSE"); 
			break;
		}
		case 14: {
			puts("ENUM"); 
			break;
		}
		case 15: {
			puts("EXTERN"); 
			break;
		}
		case 16: {
			puts("FLOAT"); 
			break;
		}
		case 17: {
			puts("FOR"); 
			break;
		}
		case 18: {
			puts("GOTO"); 
			break;
		}
		case 19: {
			puts("IF"); 
			break;
		}
		case 20: {
			puts("IMAGINARY"); 
			break;
		}
		case 21: {
			puts("INLINE"); 
			break;
		}
		case 22: {
			puts("INT"); 
			break;
		}
		case 23: {
			puts("LONG"); 
			break;
		}
		case 24: {
			puts("REGISTER"); 
			break;
		}
		case 25: {
			puts("RESTRICT"); 
			break;
		}
		case 26: {
			puts("RETURN"); 
			break;
		}
		case 27: {
			puts("SHORT"); 
			break;
		}
		case 28: {
			puts("SIGNED"); 
			break;
		}
		case 29: {
			puts("SIZEOF"); 
			break;
		}
		case 30: {
			puts("STATIC"); 
			break;
		}
		case 31: {
			puts("STRUCT"); 
			break;
		}
		case 32: {
			puts("SWITCH"); 
			break;
		}
		case 33: {
			puts("TYPEDEF"); 
			break;
		}
		case 34: {
			puts("UNION"); 
			break;
		}
		case 35: {
			puts("UNSIGNED"); 
			break;
		}
		case 36: {
			puts("VOID"); 
			break;
		}
		case 37: {
			puts("VOLATILE"); 
			break;
		}
		case 38: {
			puts("WHILE"); 
			break;
		}
		case 39: {
			puts("IDENTIFIER"); 
			break;
		}
		case 40: {
			puts("CONSTANT"); 
			break;
		}
		case 41: {
			puts("CONSTANT"); 
			break;
		}
		case 42: {
			puts("CONSTANT"); 
			break;
		}
		case 43: {
			puts("CONSTANT"); 
			break;
		}
		case 44: {
			puts("CONSTANT"); 
			break;
		}
		case 45: {
			puts("CONSTANT"); 
			break;
		}
		case 46: {
			puts("CONSTANT"); 
			break;
		}
		case 47: {
			puts("CONSTANT"); 
			break;
		}
		case 48: {
			puts("CONSTANT"); 
			break;
		}
		case 49: {
			puts("CONSTANT"); 
			break;
		}
		case 50: {
			puts("STRING_LITERAL"); 
			break;
		}
		case 51: {
			puts("ELLIPSIS"); 
			break;
		}
		case 52: {
			puts("RIGHT_ASSIGN"); 
			break;
		}
		case 53: {
			puts("LEFT_ASSIGN"); 
			break;
		}
		case 54: {
			puts("ADD_ASSIGN"); 
			break;
		}
		case 55: {
			puts("SUB_ASSIGN"); 
			break;
		}
		case 56: {
			puts("MUL_ASSIGN"); 
			break;
		}
		case 57: {
			puts("DIV_ASSIGN"); 
			break;
		}
		case 58: {
			puts("MOD_ASSIGN"); 
			break;
		}
		case 59: {
			puts("AND_ASSIGN"); 
			break;
		}
		case 60: {
			puts("XOR_ASSIGN"); 
			break;
		}
		case 61: {
			puts("OR_ASSIGN"); 
			break;
		}
		case 62: {
			puts("RIGHT_OP"); 
			break;
		}
		case 63: {
			puts("LEFT_OP"); 
			break;
		}
		case 64: {
			puts("INC_OP"); 
			break;
		}
		case 65: {
			puts("DEC_OP"); 
			break;
		}
		case 66: {
			puts("PTR_OP"); 
			break;
		}
		case 67: {
			puts("AND_OP"); 
			break;
		}
		case 68: {
			puts("OR_OP"); 
			break;
		}
		case 69: {
			puts("LE_OP"); 
			break;
		}
		case 70: {
			puts("GE_OP"); 
			break;
		}
		case 71: {
			puts("EQ_OP"); 
			break;
		}
		case 72: {
			puts("NE_OP"); 
			break;
		}
		case 73: {
			puts(";"); 
			break;
		}
		case 74: {
			puts("{"); 
			break;
		}
		case 75: {
			puts("}"); 
			break;
		}
		case 76: {
			puts(","); 
			break;
		}
		case 77: {
			puts(":"); 
			break;
		}
		case 78: {
			puts("="); 
			break;
		}
		case 79: {
			puts("("); 
			break;
		}
		case 80: {
			puts(")"); 
			break;
		}
		case 81: {
			puts("["); 
			break;
		}
		case 82: {
			puts("]"); 
			break;
		}
		case 83: {
			puts("."); 
			break;
		}
		case 84: {
			puts("&"); 
			break;
		}
		case 85: {
			puts("!"); 
			break;
		}
		case 86: {
			puts("~"); 
			break;
		}
		case 87: {
			puts("-"); 
			break;
		}
		case 88: {
			puts("+"); 
			break;
		}
		case 89: {
			puts("*"); 
			break;
		}
		case 90: {
			puts("/"); 
			break;
		}
		case 91: {
			puts("%"); 
			break;
		}
		case 92: {
			puts("<"); 
			break;
		}
		case 93: {
			puts(">"); 
			break;
		}
		case 94: {
			puts("^"); 
			break;
		}
		case 95: {
			puts("||"); 
			break;
		}
		case 96: {
			puts("?"); 
			break;
		}
		case 97: {
			puts("SPACE"); 
			break;
		}
		case 98: {
			puts("ERROR!"); 
			break;
		}
	}
}

void scanner(char *str) {
	char ch = ' ';
	while(ch != EOF) {
		ch = buffer[buf_idx++];
		buffer[index++] = ch;
		switch(state) {
			case 0: {
				if(ch ==  33) {
					state = 85;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  9) {
					state = 97;
				}
				else if(ch ==  34) {
					state = 171;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  10) {
					state = 97;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  11) {
					state = 97;
				}
				else if(ch ==  76) {
					state = 137;
				}
				else if(ch ==  12) {
					state = 97;
				}
				else if(ch ==  32) {
					state = 97;
				}
				else if(ch ==  37) {
					state = 91;
				}
				else if(ch ==  38) {
					state = 84;
				}
				else if(ch ==  39) {
					state = 172;
				}
				else if(ch ==  40) {
					state = 79;
				}
				else if(ch ==  41) {
					state = 80;
				}
				else if(ch ==  42) {
					state = 89;
				}
				else if(ch ==  43) {
					state = 88;
				}
				else if(ch ==  44) {
					state = 76;
				}
				else if(ch ==  45) {
					state = 87;
				}
				else if(ch ==  46) {
					state = 83;
				}
				else if(ch ==  47) {
					state = 90;
				}
				else if(ch ==  48) {
					state = 152;
				}
				else if(ch ==  49) {
					state = 159;
				}
				else if(ch ==  50) {
					state = 159;
				}
				else if(ch ==  51) {
					state = 159;
				}
				else if(ch ==  52) {
					state = 159;
				}
				else if(ch ==  53) {
					state = 159;
				}
				else if(ch ==  54) {
					state = 159;
				}
				else if(ch ==  55) {
					state = 159;
				}
				else if(ch ==  56) {
					state = 159;
				}
				else if(ch ==  57) {
					state = 159;
				}
				else if(ch ==  58) {
					state = 77;
				}
				else if(ch ==  59) {
					state = 73;
				}
				else if(ch ==  60) {
					state = 92;
				}
				else if(ch ==  61) {
					state = 78;
				}
				else if(ch ==  62) {
					state = 93;
				}
				else if(ch ==  63) {
					state = 96;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  91) {
					state = 81;
				}
				else if(ch ==  92) {
					state = 98;
				}
				else if(ch ==  93) {
					state = 82;
				}
				else if(ch ==  94) {
					state = 94;
				}
				else if(ch ==  95) {
					state = 258;
				}
				else if(ch ==  97) {
					state = 257;
				}
				else if(ch ==  98) {
					state = 271;
				}
				else if(ch ==  99) {
					state = 228;
				}
				else if(ch ==  100) {
					state = 122;
				}
				else if(ch ==  101) {
					state = 240;
				}
				else if(ch ==  102) {
					state = 214;
				}
				else if(ch ==  103) {
					state = 250;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 110;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 247;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 278;
				}
				else if(ch ==  115) {
					state = 265;
				}
				else if(ch ==  116) {
					state = 288;
				}
				else if(ch ==  117) {
					state = 269;
				}
				else if(ch ==  118) {
					state = 246;
				}
				else if(ch ==  119) {
					state = 264;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else if(ch ==  123) {
					state = 74;
				}
				else if(ch ==  124) {
					state = 95;
				}
				else if(ch ==  125) {
					state = 75;
				}
				else if(ch ==  126) {
					state = 86;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(98);
				}
				break;
			}
			case 1: {
				if(ch ==  33) {
					state = 1;
				}
				else if(ch ==  73) {
					state = 1;
				}
				else if(ch ==  9) {
					state = 1;
				}
				else if(ch ==  75) {
					state = 1;
				}
				else if(ch ==  11) {
					state = 1;
				}
				else if(ch ==  76) {
					state = 1;
				}
				else if(ch ==  12) {
					state = 1;
				}
				else if(ch ==  32) {
					state = 1;
				}
				else if(ch ==  34) {
					state = 1;
				}
				else if(ch ==  37) {
					state = 1;
				}
				else if(ch ==  38) {
					state = 1;
				}
				else if(ch ==  39) {
					state = 1;
				}
				else if(ch ==  40) {
					state = 1;
				}
				else if(ch ==  41) {
					state = 1;
				}
				else if(ch ==  42) {
					state = 1;
				}
				else if(ch ==  43) {
					state = 1;
				}
				else if(ch ==  44) {
					state = 1;
				}
				else if(ch ==  45) {
					state = 1;
				}
				else if(ch ==  46) {
					state = 1;
				}
				else if(ch ==  47) {
					state = 1;
				}
				else if(ch ==  48) {
					state = 1;
				}
				else if(ch ==  49) {
					state = 1;
				}
				else if(ch ==  50) {
					state = 1;
				}
				else if(ch ==  51) {
					state = 1;
				}
				else if(ch ==  52) {
					state = 1;
				}
				else if(ch ==  53) {
					state = 1;
				}
				else if(ch ==  54) {
					state = 1;
				}
				else if(ch ==  55) {
					state = 1;
				}
				else if(ch ==  56) {
					state = 1;
				}
				else if(ch ==  57) {
					state = 1;
				}
				else if(ch ==  58) {
					state = 1;
				}
				else if(ch ==  59) {
					state = 1;
				}
				else if(ch ==  60) {
					state = 1;
				}
				else if(ch ==  61) {
					state = 1;
				}
				else if(ch ==  62) {
					state = 1;
				}
				else if(ch ==  63) {
					state = 1;
				}
				else if(ch ==  65) {
					state = 1;
				}
				else if(ch ==  66) {
					state = 1;
				}
				else if(ch ==  67) {
					state = 1;
				}
				else if(ch ==  68) {
					state = 1;
				}
				else if(ch ==  69) {
					state = 1;
				}
				else if(ch ==  70) {
					state = 1;
				}
				else if(ch ==  71) {
					state = 1;
				}
				else if(ch ==  72) {
					state = 1;
				}
				else if(ch ==  74) {
					state = 1;
				}
				else if(ch ==  77) {
					state = 1;
				}
				else if(ch ==  78) {
					state = 1;
				}
				else if(ch ==  79) {
					state = 1;
				}
				else if(ch ==  80) {
					state = 1;
				}
				else if(ch ==  81) {
					state = 1;
				}
				else if(ch ==  82) {
					state = 1;
				}
				else if(ch ==  83) {
					state = 1;
				}
				else if(ch ==  84) {
					state = 1;
				}
				else if(ch ==  85) {
					state = 1;
				}
				else if(ch ==  86) {
					state = 1;
				}
				else if(ch ==  87) {
					state = 1;
				}
				else if(ch ==  88) {
					state = 1;
				}
				else if(ch ==  89) {
					state = 1;
				}
				else if(ch ==  90) {
					state = 1;
				}
				else if(ch ==  91) {
					state = 1;
				}
				else if(ch ==  92) {
					state = 1;
				}
				else if(ch ==  93) {
					state = 1;
				}
				else if(ch ==  94) {
					state = 1;
				}
				else if(ch ==  95) {
					state = 1;
				}
				else if(ch ==  97) {
					state = 1;
				}
				else if(ch ==  98) {
					state = 1;
				}
				else if(ch ==  99) {
					state = 1;
				}
				else if(ch ==  100) {
					state = 1;
				}
				else if(ch ==  101) {
					state = 1;
				}
				else if(ch ==  102) {
					state = 1;
				}
				else if(ch ==  103) {
					state = 1;
				}
				else if(ch ==  104) {
					state = 1;
				}
				else if(ch ==  105) {
					state = 1;
				}
				else if(ch ==  106) {
					state = 1;
				}
				else if(ch ==  107) {
					state = 1;
				}
				else if(ch ==  108) {
					state = 1;
				}
				else if(ch ==  109) {
					state = 1;
				}
				else if(ch ==  110) {
					state = 1;
				}
				else if(ch ==  111) {
					state = 1;
				}
				else if(ch ==  112) {
					state = 1;
				}
				else if(ch ==  113) {
					state = 1;
				}
				else if(ch ==  114) {
					state = 1;
				}
				else if(ch ==  115) {
					state = 1;
				}
				else if(ch ==  116) {
					state = 1;
				}
				else if(ch ==  117) {
					state = 1;
				}
				else if(ch ==  118) {
					state = 1;
				}
				else if(ch ==  119) {
					state = 1;
				}
				else if(ch ==  120) {
					state = 1;
				}
				else if(ch ==  121) {
					state = 1;
				}
				else if(ch ==  122) {
					state = 1;
				}
				else if(ch ==  123) {
					state = 1;
				}
				else if(ch ==  124) {
					state = 1;
				}
				else if(ch ==  125) {
					state = 1;
				}
				else if(ch ==  126) {
					state = 1;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(1);
				}
				break;
			}
			case 2: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(2);
				}
				break;
			}
			case 3: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(3);
				}
				break;
			}
			case 4: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(4);
				}
				break;
			}
			case 5: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(5);
				}
				break;
			}
			case 6: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(6);
				}
				break;
			}
			case 7: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(7);
				}
				break;
			}
			case 8: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(8);
				}
				break;
			}
			case 9: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(9);
				}
				break;
			}
			case 10: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(10);
				}
				break;
			}
			case 11: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 229;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(11);
				}
				break;
			}
			case 12: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(12);
				}
				break;
			}
			case 13: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(13);
				}
				break;
			}
			case 14: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(14);
				}
				break;
			}
			case 15: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(15);
				}
				break;
			}
			case 16: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(16);
				}
				break;
			}
			case 17: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(17);
				}
				break;
			}
			case 18: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(18);
				}
				break;
			}
			case 19: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(19);
				}
				break;
			}
			case 20: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(20);
				}
				break;
			}
			case 21: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(21);
				}
				break;
			}
			case 22: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(22);
				}
				break;
			}
			case 23: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(23);
				}
				break;
			}
			case 24: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(24);
				}
				break;
			}
			case 25: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(25);
				}
				break;
			}
			case 26: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(26);
				}
				break;
			}
			case 27: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(27);
				}
				break;
			}
			case 28: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(28);
				}
				break;
			}
			case 29: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(29);
				}
				break;
			}
			case 30: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(30);
				}
				break;
			}
			case 31: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(31);
				}
				break;
			}
			case 32: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(32);
				}
				break;
			}
			case 33: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(33);
				}
				break;
			}
			case 34: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(34);
				}
				break;
			}
			case 35: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(35);
				}
				break;
			}
			case 36: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(36);
				}
				break;
			}
			case 37: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(37);
				}
				break;
			}
			case 38: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(38);
				}
				break;
			}
			case 39: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 30;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 40: {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				break;
			}
			case 41: {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				break;
			}
			case 42: {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				break;
			}
			case 43: {
					buf_idx--;
					index = 0;
					state = 0;
					action(43);
				break;
			}
			case 44: {
					buf_idx--;
					index = 0;
					state = 0;
					action(44);
				break;
			}
			case 45: {
					buf_idx--;
					index = 0;
					state = 0;
					action(45);
				break;
			}
			case 46: {
					buf_idx--;
					index = 0;
					state = 0;
					action(46);
				break;
			}
			case 47: {
					buf_idx--;
					index = 0;
					state = 0;
					action(47);
				break;
			}
			case 48: {
					buf_idx--;
					index = 0;
					state = 0;
					action(48);
				break;
			}
			case 49: {
					buf_idx--;
					index = 0;
					state = 0;
					action(49);
				break;
			}
			case 50: {
					buf_idx--;
					index = 0;
					state = 0;
					action(50);
				break;
			}
			case 51: {
					buf_idx--;
					index = 0;
					state = 0;
					action(51);
				break;
			}
			case 52: {
					buf_idx--;
					index = 0;
					state = 0;
					action(52);
				break;
			}
			case 53: {
					buf_idx--;
					index = 0;
					state = 0;
					action(53);
				break;
			}
			case 54: {
					buf_idx--;
					index = 0;
					state = 0;
					action(54);
				break;
			}
			case 55: {
					buf_idx--;
					index = 0;
					state = 0;
					action(55);
				break;
			}
			case 56: {
					buf_idx--;
					index = 0;
					state = 0;
					action(56);
				break;
			}
			case 57: {
					buf_idx--;
					index = 0;
					state = 0;
					action(57);
				break;
			}
			case 58: {
					buf_idx--;
					index = 0;
					state = 0;
					action(58);
				break;
			}
			case 59: {
					buf_idx--;
					index = 0;
					state = 0;
					action(59);
				break;
			}
			case 60: {
					buf_idx--;
					index = 0;
					state = 0;
					action(60);
				break;
			}
			case 61: {
					buf_idx--;
					index = 0;
					state = 0;
					action(61);
				break;
			}
			case 62: {
				if(ch ==  61) {
					state = 52;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(62);
				}
				break;
			}
			case 63: {
				if(ch ==  61) {
					state = 53;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(63);
				}
				break;
			}
			case 64: {
					buf_idx--;
					index = 0;
					state = 0;
					action(64);
				break;
			}
			case 65: {
					buf_idx--;
					index = 0;
					state = 0;
					action(65);
				break;
			}
			case 66: {
					buf_idx--;
					index = 0;
					state = 0;
					action(66);
				break;
			}
			case 67: {
					buf_idx--;
					index = 0;
					state = 0;
					action(67);
				break;
			}
			case 68: {
					buf_idx--;
					index = 0;
					state = 0;
					action(68);
				break;
			}
			case 69: {
					buf_idx--;
					index = 0;
					state = 0;
					action(69);
				break;
			}
			case 70: {
					buf_idx--;
					index = 0;
					state = 0;
					action(70);
				break;
			}
			case 71: {
					buf_idx--;
					index = 0;
					state = 0;
					action(71);
				break;
			}
			case 72: {
					buf_idx--;
					index = 0;
					state = 0;
					action(72);
				break;
			}
			case 73: {
					buf_idx--;
					index = 0;
					state = 0;
					action(73);
				break;
			}
			case 74: {
					buf_idx--;
					index = 0;
					state = 0;
					action(74);
				break;
			}
			case 75: {
					buf_idx--;
					index = 0;
					state = 0;
					action(75);
				break;
			}
			case 76: {
					buf_idx--;
					index = 0;
					state = 0;
					action(76);
				break;
			}
			case 77: {
				if(ch ==  62) {
					state = 82;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(77);
				}
				break;
			}
			case 78: {
				if(ch ==  61) {
					state = 71;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(78);
				}
				break;
			}
			case 79: {
					buf_idx--;
					index = 0;
					state = 0;
					action(79);
				break;
			}
			case 80: {
					buf_idx--;
					index = 0;
					state = 0;
					action(80);
				break;
			}
			case 81: {
					buf_idx--;
					index = 0;
					state = 0;
					action(81);
				break;
			}
			case 82: {
					buf_idx--;
					index = 0;
					state = 0;
					action(82);
				break;
			}
			case 83: {
				if(ch ==  54) {
					state = 163;
				}
				else if(ch ==  46) {
					state = 180;
				}
				else if(ch ==  48) {
					state = 163;
				}
				else if(ch ==  49) {
					state = 163;
				}
				else if(ch ==  50) {
					state = 163;
				}
				else if(ch ==  51) {
					state = 163;
				}
				else if(ch ==  52) {
					state = 163;
				}
				else if(ch ==  53) {
					state = 163;
				}
				else if(ch ==  55) {
					state = 163;
				}
				else if(ch ==  56) {
					state = 163;
				}
				else if(ch ==  57) {
					state = 163;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(83);
				}
				break;
			}
			case 84: {
				if(ch ==  38) {
					state = 67;
				}
				else if(ch ==  61) {
					state = 59;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(84);
				}
				break;
			}
			case 85: {
				if(ch ==  61) {
					state = 72;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(85);
				}
				break;
			}
			case 86: {
					buf_idx--;
					index = 0;
					state = 0;
					action(86);
				break;
			}
			case 87: {
				if(ch ==  45) {
					state = 65;
				}
				else if(ch ==  61) {
					state = 55;
				}
				else if(ch ==  62) {
					state = 66;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(87);
				}
				break;
			}
			case 88: {
				if(ch ==  43) {
					state = 64;
				}
				else if(ch ==  61) {
					state = 54;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(88);
				}
				break;
			}
			case 89: {
				if(ch ==  61) {
					state = 56;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(89);
				}
				break;
			}
			case 90: {
				if(ch ==  42) {
					state = 170;
				}
				else if(ch ==  47) {
					state = 1;
				}
				else if(ch ==  61) {
					state = 57;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(90);
				}
				break;
			}
			case 91: {
				if(ch ==  61) {
					state = 58;
				}
				else if(ch ==  62) {
					state = 75;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(91);
				}
				break;
			}
			case 92: {
				if(ch ==  37) {
					state = 74;
				}
				else if(ch ==  61) {
					state = 69;
				}
				else if(ch ==  58) {
					state = 81;
				}
				else if(ch ==  60) {
					state = 63;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(92);
				}
				break;
			}
			case 93: {
				if(ch ==  61) {
					state = 70;
				}
				else if(ch ==  62) {
					state = 62;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(93);
				}
				break;
			}
			case 94: {
				if(ch ==  61) {
					state = 60;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(94);
				}
				break;
			}
			case 95: {
				if(ch ==  61) {
					state = 61;
				}
				else if(ch ==  124) {
					state = 68;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(95);
				}
				break;
			}
			case 96: {
					buf_idx--;
					index = 0;
					state = 0;
					action(96);
				break;
			}
			case 97: {
					buf_idx--;
					index = 0;
					state = 0;
					action(97);
				break;
			}
			case 98: {
					buf_idx--;
					index = 0;
					state = 0;
					action(98);
				break;
			}
			case 99: {
				if(ch ==  48) {
					state = 173;
				}
				else if(ch ==  49) {
					state = 173;
				}
				else if(ch ==  50) {
					state = 173;
				}
				else if(ch ==  51) {
					state = 173;
				}
				else if(ch ==  52) {
					state = 173;
				}
				else if(ch ==  53) {
					state = 173;
				}
				else if(ch ==  54) {
					state = 173;
				}
				else if(ch ==  55) {
					state = 173;
				}
				else if(ch ==  56) {
					state = 173;
				}
				else if(ch ==  57) {
					state = 173;
				}
				else if(ch ==  65) {
					state = 173;
				}
				else if(ch ==  66) {
					state = 173;
				}
				else if(ch ==  67) {
					state = 173;
				}
				else if(ch ==  68) {
					state = 173;
				}
				else if(ch ==  69) {
					state = 173;
				}
				else if(ch ==  70) {
					state = 173;
				}
				else if(ch ==  97) {
					state = 173;
				}
				else if(ch ==  98) {
					state = 173;
				}
				else if(ch ==  99) {
					state = 173;
				}
				else if(ch ==  100) {
					state = 173;
				}
				else if(ch ==  101) {
					state = 173;
				}
				else if(ch ==  102) {
					state = 173;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 100: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 28;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 101: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 35;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 102: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 36;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 103: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 5;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 104: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 9;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 105: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 12;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 106: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 13;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 107: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 21;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 108: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 37;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 109: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 38;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 110: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 19;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 130;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 111: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 29;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 112: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 33;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 113: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 23;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 114: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 32;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 115: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 4;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 116: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 3;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 117: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 14;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 118: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 15;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 119: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 26;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 120: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 34;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 121: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 2;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 122: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 279;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 11;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 123: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 18;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 124: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 6;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 125: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 17;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 126: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 24;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 127: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 8;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 128: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 10;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 129: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 16;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 130: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 22;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 237;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 131: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 25;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 132: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 27;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 133: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 31;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 134: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 7;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 135: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 20;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 136: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 115;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 137: {
				if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  34) {
					state = 189;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  39) {
					state = 190;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 138: {
				if(ch ==  108) {
					state = 40;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 139: {
				if(ch ==  117) {
					state = 40;
				}
				else if(ch ==  85) {
					state = 40;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 140: {
				if(ch ==  117) {
					state = 40;
				}
				else if(ch ==  85) {
					state = 40;
				}
				else if(ch ==  108) {
					state = 139;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 141: {
				if(ch ==  76) {
					state = 40;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 142: {
				if(ch ==  76) {
					state = 141;
				}
				else if(ch ==  108) {
					state = 138;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 143: {
				if(ch ==  76) {
					state = 139;
				}
				else if(ch ==  85) {
					state = 40;
				}
				else if(ch ==  117) {
					state = 40;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 144: {
				if(ch ==  54) {
					state = 144;
				}
				else if(ch ==  46) {
					state = 227;
				}
				else if(ch ==  48) {
					state = 144;
				}
				else if(ch ==  112) {
					state = 186;
				}
				else if(ch ==  49) {
					state = 144;
				}
				else if(ch ==  50) {
					state = 144;
				}
				else if(ch ==  51) {
					state = 144;
				}
				else if(ch ==  52) {
					state = 144;
				}
				else if(ch ==  53) {
					state = 144;
				}
				else if(ch ==  117) {
					state = 142;
				}
				else if(ch ==  55) {
					state = 144;
				}
				else if(ch ==  56) {
					state = 144;
				}
				else if(ch ==  57) {
					state = 144;
				}
				else if(ch ==  65) {
					state = 144;
				}
				else if(ch ==  66) {
					state = 144;
				}
				else if(ch ==  67) {
					state = 144;
				}
				else if(ch ==  68) {
					state = 144;
				}
				else if(ch ==  69) {
					state = 144;
				}
				else if(ch ==  70) {
					state = 144;
				}
				else if(ch ==  76) {
					state = 143;
				}
				else if(ch ==  80) {
					state = 186;
				}
				else if(ch ==  85) {
					state = 142;
				}
				else if(ch ==  97) {
					state = 144;
				}
				else if(ch ==  98) {
					state = 144;
				}
				else if(ch ==  99) {
					state = 144;
				}
				else if(ch ==  100) {
					state = 144;
				}
				else if(ch ==  101) {
					state = 144;
				}
				else if(ch ==  102) {
					state = 144;
				}
				else if(ch ==  108) {
					state = 140;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(40);
				}
				break;
			}
			case 145: {
				if(ch ==  108) {
					state = 41;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 146: {
				if(ch ==  85) {
					state = 41;
				}
				else if(ch ==  117) {
					state = 41;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 147: {
				if(ch ==  85) {
					state = 41;
				}
				else if(ch ==  117) {
					state = 41;
				}
				else if(ch ==  108) {
					state = 146;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 148: {
				if(ch ==  76) {
					state = 41;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 149: {
				if(ch ==  76) {
					state = 148;
				}
				else if(ch ==  108) {
					state = 145;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 150: {
				if(ch ==  76) {
					state = 146;
				}
				else if(ch ==  85) {
					state = 41;
				}
				else if(ch ==  117) {
					state = 41;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 151: {
				if(ch ==  54) {
					state = 151;
				}
				else if(ch ==  46) {
					state = 165;
				}
				else if(ch ==  48) {
					state = 151;
				}
				else if(ch ==  49) {
					state = 151;
				}
				else if(ch ==  50) {
					state = 151;
				}
				else if(ch ==  51) {
					state = 151;
				}
				else if(ch ==  52) {
					state = 151;
				}
				else if(ch ==  53) {
					state = 151;
				}
				else if(ch ==  117) {
					state = 149;
				}
				else if(ch ==  55) {
					state = 151;
				}
				else if(ch ==  56) {
					state = 182;
				}
				else if(ch ==  57) {
					state = 182;
				}
				else if(ch ==  69) {
					state = 183;
				}
				else if(ch ==  76) {
					state = 150;
				}
				else if(ch ==  85) {
					state = 149;
				}
				else if(ch ==  101) {
					state = 183;
				}
				else if(ch ==  108) {
					state = 147;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 152: {
				if(ch ==  54) {
					state = 151;
				}
				else if(ch ==  46) {
					state = 165;
				}
				else if(ch ==  48) {
					state = 151;
				}
				else if(ch ==  49) {
					state = 151;
				}
				else if(ch ==  50) {
					state = 151;
				}
				else if(ch ==  51) {
					state = 151;
				}
				else if(ch ==  52) {
					state = 151;
				}
				else if(ch ==  53) {
					state = 151;
				}
				else if(ch ==  117) {
					state = 149;
				}
				else if(ch ==  55) {
					state = 151;
				}
				else if(ch ==  56) {
					state = 182;
				}
				else if(ch ==  120) {
					state = 181;
				}
				else if(ch ==  57) {
					state = 182;
				}
				else if(ch ==  69) {
					state = 183;
				}
				else if(ch ==  76) {
					state = 150;
				}
				else if(ch ==  85) {
					state = 149;
				}
				else if(ch ==  88) {
					state = 181;
				}
				else if(ch ==  101) {
					state = 183;
				}
				else if(ch ==  108) {
					state = 147;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(41);
				}
				break;
			}
			case 153: {
				if(ch ==  108) {
					state = 42;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 154: {
				if(ch ==  85) {
					state = 42;
				}
				else if(ch ==  117) {
					state = 42;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 155: {
				if(ch ==  85) {
					state = 42;
				}
				else if(ch ==  117) {
					state = 42;
				}
				else if(ch ==  108) {
					state = 154;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 156: {
				if(ch ==  76) {
					state = 42;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 157: {
				if(ch ==  76) {
					state = 156;
				}
				else if(ch ==  108) {
					state = 153;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 158: {
				if(ch ==  76) {
					state = 154;
				}
				else if(ch ==  85) {
					state = 42;
				}
				else if(ch ==  117) {
					state = 42;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 159: {
				if(ch ==  54) {
					state = 159;
				}
				else if(ch ==  46) {
					state = 165;
				}
				else if(ch ==  48) {
					state = 159;
				}
				else if(ch ==  49) {
					state = 159;
				}
				else if(ch ==  50) {
					state = 159;
				}
				else if(ch ==  51) {
					state = 159;
				}
				else if(ch ==  52) {
					state = 159;
				}
				else if(ch ==  53) {
					state = 159;
				}
				else if(ch ==  117) {
					state = 157;
				}
				else if(ch ==  55) {
					state = 159;
				}
				else if(ch ==  56) {
					state = 159;
				}
				else if(ch ==  57) {
					state = 159;
				}
				else if(ch ==  69) {
					state = 183;
				}
				else if(ch ==  76) {
					state = 158;
				}
				else if(ch ==  85) {
					state = 157;
				}
				else if(ch ==  101) {
					state = 183;
				}
				else if(ch ==  108) {
					state = 155;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(42);
				}
				break;
			}
			case 160: {
				if(ch ==  33) {
					state = 190;
				}
				else if(ch ==  73) {
					state = 190;
				}
				else if(ch ==  9) {
					state = 190;
				}
				else if(ch ==  75) {
					state = 190;
				}
				else if(ch ==  11) {
					state = 190;
				}
				else if(ch ==  76) {
					state = 190;
				}
				else if(ch ==  12) {
					state = 190;
				}
				else if(ch ==  32) {
					state = 190;
				}
				else if(ch ==  34) {
					state = 190;
				}
				else if(ch ==  37) {
					state = 190;
				}
				else if(ch ==  38) {
					state = 190;
				}
				else if(ch ==  39) {
					state = 43;
				}
				else if(ch ==  40) {
					state = 190;
				}
				else if(ch ==  41) {
					state = 190;
				}
				else if(ch ==  42) {
					state = 190;
				}
				else if(ch ==  43) {
					state = 190;
				}
				else if(ch ==  44) {
					state = 190;
				}
				else if(ch ==  45) {
					state = 190;
				}
				else if(ch ==  46) {
					state = 190;
				}
				else if(ch ==  47) {
					state = 190;
				}
				else if(ch ==  48) {
					state = 190;
				}
				else if(ch ==  49) {
					state = 190;
				}
				else if(ch ==  50) {
					state = 190;
				}
				else if(ch ==  51) {
					state = 190;
				}
				else if(ch ==  52) {
					state = 190;
				}
				else if(ch ==  53) {
					state = 190;
				}
				else if(ch ==  54) {
					state = 190;
				}
				else if(ch ==  55) {
					state = 190;
				}
				else if(ch ==  56) {
					state = 190;
				}
				else if(ch ==  57) {
					state = 190;
				}
				else if(ch ==  58) {
					state = 190;
				}
				else if(ch ==  59) {
					state = 190;
				}
				else if(ch ==  60) {
					state = 190;
				}
				else if(ch ==  61) {
					state = 190;
				}
				else if(ch ==  62) {
					state = 190;
				}
				else if(ch ==  63) {
					state = 190;
				}
				else if(ch ==  65) {
					state = 190;
				}
				else if(ch ==  66) {
					state = 190;
				}
				else if(ch ==  67) {
					state = 190;
				}
				else if(ch ==  68) {
					state = 190;
				}
				else if(ch ==  69) {
					state = 190;
				}
				else if(ch ==  70) {
					state = 190;
				}
				else if(ch ==  71) {
					state = 190;
				}
				else if(ch ==  72) {
					state = 190;
				}
				else if(ch ==  74) {
					state = 190;
				}
				else if(ch ==  77) {
					state = 190;
				}
				else if(ch ==  78) {
					state = 190;
				}
				else if(ch ==  79) {
					state = 190;
				}
				else if(ch ==  80) {
					state = 190;
				}
				else if(ch ==  81) {
					state = 190;
				}
				else if(ch ==  82) {
					state = 190;
				}
				else if(ch ==  83) {
					state = 190;
				}
				else if(ch ==  84) {
					state = 190;
				}
				else if(ch ==  85) {
					state = 190;
				}
				else if(ch ==  86) {
					state = 190;
				}
				else if(ch ==  87) {
					state = 190;
				}
				else if(ch ==  88) {
					state = 190;
				}
				else if(ch ==  89) {
					state = 190;
				}
				else if(ch ==  90) {
					state = 190;
				}
				else if(ch ==  91) {
					state = 190;
				}
				else if(ch ==  92) {
					state = 191;
				}
				else if(ch ==  93) {
					state = 190;
				}
				else if(ch ==  94) {
					state = 190;
				}
				else if(ch ==  95) {
					state = 190;
				}
				else if(ch ==  97) {
					state = 190;
				}
				else if(ch ==  98) {
					state = 190;
				}
				else if(ch ==  99) {
					state = 190;
				}
				else if(ch ==  100) {
					state = 190;
				}
				else if(ch ==  101) {
					state = 190;
				}
				else if(ch ==  102) {
					state = 190;
				}
				else if(ch ==  103) {
					state = 190;
				}
				else if(ch ==  104) {
					state = 190;
				}
				else if(ch ==  105) {
					state = 190;
				}
				else if(ch ==  106) {
					state = 190;
				}
				else if(ch ==  107) {
					state = 190;
				}
				else if(ch ==  108) {
					state = 190;
				}
				else if(ch ==  109) {
					state = 190;
				}
				else if(ch ==  110) {
					state = 190;
				}
				else if(ch ==  111) {
					state = 190;
				}
				else if(ch ==  112) {
					state = 190;
				}
				else if(ch ==  113) {
					state = 190;
				}
				else if(ch ==  114) {
					state = 190;
				}
				else if(ch ==  115) {
					state = 190;
				}
				else if(ch ==  116) {
					state = 190;
				}
				else if(ch ==  117) {
					state = 190;
				}
				else if(ch ==  118) {
					state = 190;
				}
				else if(ch ==  119) {
					state = 190;
				}
				else if(ch ==  120) {
					state = 190;
				}
				else if(ch ==  121) {
					state = 190;
				}
				else if(ch ==  122) {
					state = 190;
				}
				else if(ch ==  123) {
					state = 190;
				}
				else if(ch ==  124) {
					state = 190;
				}
				else if(ch ==  125) {
					state = 190;
				}
				else if(ch ==  126) {
					state = 190;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(43);
				}
				break;
			}
			case 161: {
				if(ch ==  48) {
					state = 161;
				}
				else if(ch ==  49) {
					state = 161;
				}
				else if(ch ==  50) {
					state = 161;
				}
				else if(ch ==  51) {
					state = 161;
				}
				else if(ch ==  52) {
					state = 161;
				}
				else if(ch ==  53) {
					state = 161;
				}
				else if(ch ==  54) {
					state = 161;
				}
				else if(ch ==  55) {
					state = 161;
				}
				else if(ch ==  56) {
					state = 161;
				}
				else if(ch ==  57) {
					state = 161;
				}
				else if(ch ==  70) {
					state = 44;
				}
				else if(ch ==  76) {
					state = 44;
				}
				else if(ch ==  102) {
					state = 44;
				}
				else if(ch ==  108) {
					state = 44;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(44);
				}
				break;
			}
			case 162: {
				if(ch ==  48) {
					state = 162;
				}
				else if(ch ==  49) {
					state = 162;
				}
				else if(ch ==  50) {
					state = 162;
				}
				else if(ch ==  51) {
					state = 162;
				}
				else if(ch ==  52) {
					state = 162;
				}
				else if(ch ==  53) {
					state = 162;
				}
				else if(ch ==  54) {
					state = 162;
				}
				else if(ch ==  55) {
					state = 162;
				}
				else if(ch ==  56) {
					state = 162;
				}
				else if(ch ==  57) {
					state = 162;
				}
				else if(ch ==  70) {
					state = 45;
				}
				else if(ch ==  76) {
					state = 45;
				}
				else if(ch ==  102) {
					state = 45;
				}
				else if(ch ==  108) {
					state = 45;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(45);
				}
				break;
			}
			case 163: {
				if(ch ==  48) {
					state = 163;
				}
				else if(ch ==  49) {
					state = 163;
				}
				else if(ch ==  50) {
					state = 163;
				}
				else if(ch ==  51) {
					state = 163;
				}
				else if(ch ==  52) {
					state = 163;
				}
				else if(ch ==  53) {
					state = 163;
				}
				else if(ch ==  54) {
					state = 163;
				}
				else if(ch ==  55) {
					state = 163;
				}
				else if(ch ==  56) {
					state = 163;
				}
				else if(ch ==  57) {
					state = 163;
				}
				else if(ch ==  69) {
					state = 184;
				}
				else if(ch ==  70) {
					state = 45;
				}
				else if(ch ==  76) {
					state = 45;
				}
				else if(ch ==  101) {
					state = 184;
				}
				else if(ch ==  102) {
					state = 45;
				}
				else if(ch ==  108) {
					state = 45;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(45);
				}
				break;
			}
			case 164: {
				if(ch ==  48) {
					state = 164;
				}
				else if(ch ==  49) {
					state = 164;
				}
				else if(ch ==  50) {
					state = 164;
				}
				else if(ch ==  51) {
					state = 164;
				}
				else if(ch ==  52) {
					state = 164;
				}
				else if(ch ==  53) {
					state = 164;
				}
				else if(ch ==  54) {
					state = 164;
				}
				else if(ch ==  55) {
					state = 164;
				}
				else if(ch ==  56) {
					state = 164;
				}
				else if(ch ==  57) {
					state = 164;
				}
				else if(ch ==  70) {
					state = 46;
				}
				else if(ch ==  76) {
					state = 46;
				}
				else if(ch ==  102) {
					state = 46;
				}
				else if(ch ==  108) {
					state = 46;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(46);
				}
				break;
			}
			case 165: {
				if(ch ==  48) {
					state = 163;
				}
				else if(ch ==  49) {
					state = 163;
				}
				else if(ch ==  50) {
					state = 163;
				}
				else if(ch ==  51) {
					state = 163;
				}
				else if(ch ==  52) {
					state = 163;
				}
				else if(ch ==  53) {
					state = 163;
				}
				else if(ch ==  54) {
					state = 163;
				}
				else if(ch ==  55) {
					state = 163;
				}
				else if(ch ==  56) {
					state = 163;
				}
				else if(ch ==  57) {
					state = 163;
				}
				else if(ch ==  69) {
					state = 185;
				}
				else if(ch ==  70) {
					state = 46;
				}
				else if(ch ==  76) {
					state = 46;
				}
				else if(ch ==  101) {
					state = 185;
				}
				else if(ch ==  102) {
					state = 46;
				}
				else if(ch ==  108) {
					state = 46;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(46);
				}
				break;
			}
			case 166: {
				if(ch ==  48) {
					state = 166;
				}
				else if(ch ==  49) {
					state = 166;
				}
				else if(ch ==  50) {
					state = 166;
				}
				else if(ch ==  51) {
					state = 166;
				}
				else if(ch ==  52) {
					state = 166;
				}
				else if(ch ==  53) {
					state = 166;
				}
				else if(ch ==  54) {
					state = 166;
				}
				else if(ch ==  55) {
					state = 166;
				}
				else if(ch ==  56) {
					state = 166;
				}
				else if(ch ==  57) {
					state = 166;
				}
				else if(ch ==  70) {
					state = 47;
				}
				else if(ch ==  76) {
					state = 47;
				}
				else if(ch ==  102) {
					state = 47;
				}
				else if(ch ==  108) {
					state = 47;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(47);
				}
				break;
			}
			case 167: {
				if(ch ==  48) {
					state = 167;
				}
				else if(ch ==  49) {
					state = 167;
				}
				else if(ch ==  50) {
					state = 167;
				}
				else if(ch ==  51) {
					state = 167;
				}
				else if(ch ==  52) {
					state = 167;
				}
				else if(ch ==  53) {
					state = 167;
				}
				else if(ch ==  54) {
					state = 167;
				}
				else if(ch ==  55) {
					state = 167;
				}
				else if(ch ==  56) {
					state = 167;
				}
				else if(ch ==  57) {
					state = 167;
				}
				else if(ch ==  70) {
					state = 48;
				}
				else if(ch ==  76) {
					state = 48;
				}
				else if(ch ==  102) {
					state = 48;
				}
				else if(ch ==  108) {
					state = 48;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(48);
				}
				break;
			}
			case 168: {
				if(ch ==  48) {
					state = 168;
				}
				else if(ch ==  49) {
					state = 168;
				}
				else if(ch ==  50) {
					state = 168;
				}
				else if(ch ==  51) {
					state = 168;
				}
				else if(ch ==  52) {
					state = 168;
				}
				else if(ch ==  53) {
					state = 168;
				}
				else if(ch ==  54) {
					state = 168;
				}
				else if(ch ==  55) {
					state = 168;
				}
				else if(ch ==  56) {
					state = 168;
				}
				else if(ch ==  57) {
					state = 168;
				}
				else if(ch ==  70) {
					state = 49;
				}
				else if(ch ==  76) {
					state = 49;
				}
				else if(ch ==  102) {
					state = 49;
				}
				else if(ch ==  108) {
					state = 49;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(49);
				}
				break;
			}
			case 169: {
				if(ch ==  33) {
					state = 189;
				}
				else if(ch ==  73) {
					state = 189;
				}
				else if(ch ==  9) {
					state = 189;
				}
				else if(ch ==  75) {
					state = 189;
				}
				else if(ch ==  11) {
					state = 189;
				}
				else if(ch ==  76) {
					state = 189;
				}
				else if(ch ==  12) {
					state = 189;
				}
				else if(ch ==  32) {
					state = 189;
				}
				else if(ch ==  34) {
					state = 50;
				}
				else if(ch ==  37) {
					state = 189;
				}
				else if(ch ==  38) {
					state = 189;
				}
				else if(ch ==  39) {
					state = 189;
				}
				else if(ch ==  40) {
					state = 189;
				}
				else if(ch ==  41) {
					state = 189;
				}
				else if(ch ==  42) {
					state = 189;
				}
				else if(ch ==  43) {
					state = 189;
				}
				else if(ch ==  44) {
					state = 189;
				}
				else if(ch ==  45) {
					state = 189;
				}
				else if(ch ==  46) {
					state = 189;
				}
				else if(ch ==  47) {
					state = 189;
				}
				else if(ch ==  48) {
					state = 189;
				}
				else if(ch ==  49) {
					state = 189;
				}
				else if(ch ==  50) {
					state = 189;
				}
				else if(ch ==  51) {
					state = 189;
				}
				else if(ch ==  52) {
					state = 189;
				}
				else if(ch ==  53) {
					state = 189;
				}
				else if(ch ==  54) {
					state = 189;
				}
				else if(ch ==  55) {
					state = 189;
				}
				else if(ch ==  56) {
					state = 189;
				}
				else if(ch ==  57) {
					state = 189;
				}
				else if(ch ==  58) {
					state = 189;
				}
				else if(ch ==  59) {
					state = 189;
				}
				else if(ch ==  60) {
					state = 189;
				}
				else if(ch ==  61) {
					state = 189;
				}
				else if(ch ==  62) {
					state = 189;
				}
				else if(ch ==  63) {
					state = 189;
				}
				else if(ch ==  65) {
					state = 189;
				}
				else if(ch ==  66) {
					state = 189;
				}
				else if(ch ==  67) {
					state = 189;
				}
				else if(ch ==  68) {
					state = 189;
				}
				else if(ch ==  69) {
					state = 189;
				}
				else if(ch ==  70) {
					state = 189;
				}
				else if(ch ==  71) {
					state = 189;
				}
				else if(ch ==  72) {
					state = 189;
				}
				else if(ch ==  74) {
					state = 189;
				}
				else if(ch ==  77) {
					state = 189;
				}
				else if(ch ==  78) {
					state = 189;
				}
				else if(ch ==  79) {
					state = 189;
				}
				else if(ch ==  80) {
					state = 189;
				}
				else if(ch ==  81) {
					state = 189;
				}
				else if(ch ==  82) {
					state = 189;
				}
				else if(ch ==  83) {
					state = 189;
				}
				else if(ch ==  84) {
					state = 189;
				}
				else if(ch ==  85) {
					state = 189;
				}
				else if(ch ==  86) {
					state = 189;
				}
				else if(ch ==  87) {
					state = 189;
				}
				else if(ch ==  88) {
					state = 189;
				}
				else if(ch ==  89) {
					state = 189;
				}
				else if(ch ==  90) {
					state = 189;
				}
				else if(ch ==  91) {
					state = 189;
				}
				else if(ch ==  92) {
					state = 192;
				}
				else if(ch ==  93) {
					state = 189;
				}
				else if(ch ==  94) {
					state = 189;
				}
				else if(ch ==  95) {
					state = 189;
				}
				else if(ch ==  97) {
					state = 189;
				}
				else if(ch ==  98) {
					state = 189;
				}
				else if(ch ==  99) {
					state = 189;
				}
				else if(ch ==  100) {
					state = 189;
				}
				else if(ch ==  101) {
					state = 189;
				}
				else if(ch ==  102) {
					state = 189;
				}
				else if(ch ==  103) {
					state = 189;
				}
				else if(ch ==  104) {
					state = 189;
				}
				else if(ch ==  105) {
					state = 189;
				}
				else if(ch ==  106) {
					state = 189;
				}
				else if(ch ==  107) {
					state = 189;
				}
				else if(ch ==  108) {
					state = 189;
				}
				else if(ch ==  109) {
					state = 189;
				}
				else if(ch ==  110) {
					state = 189;
				}
				else if(ch ==  111) {
					state = 189;
				}
				else if(ch ==  112) {
					state = 189;
				}
				else if(ch ==  113) {
					state = 189;
				}
				else if(ch ==  114) {
					state = 189;
				}
				else if(ch ==  115) {
					state = 189;
				}
				else if(ch ==  116) {
					state = 189;
				}
				else if(ch ==  117) {
					state = 189;
				}
				else if(ch ==  118) {
					state = 189;
				}
				else if(ch ==  119) {
					state = 189;
				}
				else if(ch ==  120) {
					state = 189;
				}
				else if(ch ==  121) {
					state = 189;
				}
				else if(ch ==  122) {
					state = 189;
				}
				else if(ch ==  123) {
					state = 189;
				}
				else if(ch ==  124) {
					state = 189;
				}
				else if(ch ==  125) {
					state = 189;
				}
				else if(ch ==  126) {
					state = 189;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(50);
				}
				break;
			}
			case 170: {
					buf_idx--;
					index = 0;
					state = 0;
					action(0);
				break;
			}
			case 171: {
				if(ch ==  33) {
					state = 189;
				}
				else if(ch ==  73) {
					state = 189;
				}
				else if(ch ==  9) {
					state = 189;
				}
				else if(ch ==  75) {
					state = 189;
				}
				else if(ch ==  11) {
					state = 189;
				}
				else if(ch ==  76) {
					state = 189;
				}
				else if(ch ==  12) {
					state = 189;
				}
				else if(ch ==  32) {
					state = 189;
				}
				else if(ch ==  34) {
					state = 50;
				}
				else if(ch ==  37) {
					state = 189;
				}
				else if(ch ==  38) {
					state = 189;
				}
				else if(ch ==  39) {
					state = 189;
				}
				else if(ch ==  40) {
					state = 189;
				}
				else if(ch ==  41) {
					state = 189;
				}
				else if(ch ==  42) {
					state = 189;
				}
				else if(ch ==  43) {
					state = 189;
				}
				else if(ch ==  44) {
					state = 189;
				}
				else if(ch ==  45) {
					state = 189;
				}
				else if(ch ==  46) {
					state = 189;
				}
				else if(ch ==  47) {
					state = 189;
				}
				else if(ch ==  48) {
					state = 189;
				}
				else if(ch ==  49) {
					state = 189;
				}
				else if(ch ==  50) {
					state = 189;
				}
				else if(ch ==  51) {
					state = 189;
				}
				else if(ch ==  52) {
					state = 189;
				}
				else if(ch ==  53) {
					state = 189;
				}
				else if(ch ==  54) {
					state = 189;
				}
				else if(ch ==  55) {
					state = 189;
				}
				else if(ch ==  56) {
					state = 189;
				}
				else if(ch ==  57) {
					state = 189;
				}
				else if(ch ==  58) {
					state = 189;
				}
				else if(ch ==  59) {
					state = 189;
				}
				else if(ch ==  60) {
					state = 189;
				}
				else if(ch ==  61) {
					state = 189;
				}
				else if(ch ==  62) {
					state = 189;
				}
				else if(ch ==  63) {
					state = 189;
				}
				else if(ch ==  65) {
					state = 189;
				}
				else if(ch ==  66) {
					state = 189;
				}
				else if(ch ==  67) {
					state = 189;
				}
				else if(ch ==  68) {
					state = 189;
				}
				else if(ch ==  69) {
					state = 189;
				}
				else if(ch ==  70) {
					state = 189;
				}
				else if(ch ==  71) {
					state = 189;
				}
				else if(ch ==  72) {
					state = 189;
				}
				else if(ch ==  74) {
					state = 189;
				}
				else if(ch ==  77) {
					state = 189;
				}
				else if(ch ==  78) {
					state = 189;
				}
				else if(ch ==  79) {
					state = 189;
				}
				else if(ch ==  80) {
					state = 189;
				}
				else if(ch ==  81) {
					state = 189;
				}
				else if(ch ==  82) {
					state = 189;
				}
				else if(ch ==  83) {
					state = 189;
				}
				else if(ch ==  84) {
					state = 189;
				}
				else if(ch ==  85) {
					state = 189;
				}
				else if(ch ==  86) {
					state = 189;
				}
				else if(ch ==  87) {
					state = 189;
				}
				else if(ch ==  88) {
					state = 189;
				}
				else if(ch ==  89) {
					state = 189;
				}
				else if(ch ==  90) {
					state = 189;
				}
				else if(ch ==  91) {
					state = 189;
				}
				else if(ch ==  92) {
					state = 192;
				}
				else if(ch ==  93) {
					state = 189;
				}
				else if(ch ==  94) {
					state = 189;
				}
				else if(ch ==  95) {
					state = 189;
				}
				else if(ch ==  97) {
					state = 189;
				}
				else if(ch ==  98) {
					state = 189;
				}
				else if(ch ==  99) {
					state = 189;
				}
				else if(ch ==  100) {
					state = 189;
				}
				else if(ch ==  101) {
					state = 189;
				}
				else if(ch ==  102) {
					state = 189;
				}
				else if(ch ==  103) {
					state = 189;
				}
				else if(ch ==  104) {
					state = 189;
				}
				else if(ch ==  105) {
					state = 189;
				}
				else if(ch ==  106) {
					state = 189;
				}
				else if(ch ==  107) {
					state = 189;
				}
				else if(ch ==  108) {
					state = 189;
				}
				else if(ch ==  109) {
					state = 189;
				}
				else if(ch ==  110) {
					state = 189;
				}
				else if(ch ==  111) {
					state = 189;
				}
				else if(ch ==  112) {
					state = 189;
				}
				else if(ch ==  113) {
					state = 189;
				}
				else if(ch ==  114) {
					state = 189;
				}
				else if(ch ==  115) {
					state = 189;
				}
				else if(ch ==  116) {
					state = 189;
				}
				else if(ch ==  117) {
					state = 189;
				}
				else if(ch ==  118) {
					state = 189;
				}
				else if(ch ==  119) {
					state = 189;
				}
				else if(ch ==  120) {
					state = 189;
				}
				else if(ch ==  121) {
					state = 189;
				}
				else if(ch ==  122) {
					state = 189;
				}
				else if(ch ==  123) {
					state = 189;
				}
				else if(ch ==  124) {
					state = 189;
				}
				else if(ch ==  125) {
					state = 189;
				}
				else if(ch ==  126) {
					state = 189;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(98);
				}
				break;
			}
			case 172: {
				if(ch ==  33) {
					state = 190;
				}
				else if(ch ==  73) {
					state = 190;
				}
				else if(ch ==  9) {
					state = 190;
				}
				else if(ch ==  75) {
					state = 190;
				}
				else if(ch ==  11) {
					state = 190;
				}
				else if(ch ==  76) {
					state = 190;
				}
				else if(ch ==  12) {
					state = 190;
				}
				else if(ch ==  32) {
					state = 190;
				}
				else if(ch ==  34) {
					state = 190;
				}
				else if(ch ==  37) {
					state = 190;
				}
				else if(ch ==  38) {
					state = 190;
				}
				else if(ch ==  39) {
					state = 43;
				}
				else if(ch ==  40) {
					state = 190;
				}
				else if(ch ==  41) {
					state = 190;
				}
				else if(ch ==  42) {
					state = 190;
				}
				else if(ch ==  43) {
					state = 190;
				}
				else if(ch ==  44) {
					state = 190;
				}
				else if(ch ==  45) {
					state = 190;
				}
				else if(ch ==  46) {
					state = 190;
				}
				else if(ch ==  47) {
					state = 190;
				}
				else if(ch ==  48) {
					state = 190;
				}
				else if(ch ==  49) {
					state = 190;
				}
				else if(ch ==  50) {
					state = 190;
				}
				else if(ch ==  51) {
					state = 190;
				}
				else if(ch ==  52) {
					state = 190;
				}
				else if(ch ==  53) {
					state = 190;
				}
				else if(ch ==  54) {
					state = 190;
				}
				else if(ch ==  55) {
					state = 190;
				}
				else if(ch ==  56) {
					state = 190;
				}
				else if(ch ==  57) {
					state = 190;
				}
				else if(ch ==  58) {
					state = 190;
				}
				else if(ch ==  59) {
					state = 190;
				}
				else if(ch ==  60) {
					state = 190;
				}
				else if(ch ==  61) {
					state = 190;
				}
				else if(ch ==  62) {
					state = 190;
				}
				else if(ch ==  63) {
					state = 190;
				}
				else if(ch ==  65) {
					state = 190;
				}
				else if(ch ==  66) {
					state = 190;
				}
				else if(ch ==  67) {
					state = 190;
				}
				else if(ch ==  68) {
					state = 190;
				}
				else if(ch ==  69) {
					state = 190;
				}
				else if(ch ==  70) {
					state = 190;
				}
				else if(ch ==  71) {
					state = 190;
				}
				else if(ch ==  72) {
					state = 190;
				}
				else if(ch ==  74) {
					state = 190;
				}
				else if(ch ==  77) {
					state = 190;
				}
				else if(ch ==  78) {
					state = 190;
				}
				else if(ch ==  79) {
					state = 190;
				}
				else if(ch ==  80) {
					state = 190;
				}
				else if(ch ==  81) {
					state = 190;
				}
				else if(ch ==  82) {
					state = 190;
				}
				else if(ch ==  83) {
					state = 190;
				}
				else if(ch ==  84) {
					state = 190;
				}
				else if(ch ==  85) {
					state = 190;
				}
				else if(ch ==  86) {
					state = 190;
				}
				else if(ch ==  87) {
					state = 190;
				}
				else if(ch ==  88) {
					state = 190;
				}
				else if(ch ==  89) {
					state = 190;
				}
				else if(ch ==  90) {
					state = 190;
				}
				else if(ch ==  91) {
					state = 190;
				}
				else if(ch ==  92) {
					state = 191;
				}
				else if(ch ==  93) {
					state = 190;
				}
				else if(ch ==  94) {
					state = 190;
				}
				else if(ch ==  95) {
					state = 190;
				}
				else if(ch ==  97) {
					state = 190;
				}
				else if(ch ==  98) {
					state = 190;
				}
				else if(ch ==  99) {
					state = 190;
				}
				else if(ch ==  100) {
					state = 190;
				}
				else if(ch ==  101) {
					state = 190;
				}
				else if(ch ==  102) {
					state = 190;
				}
				else if(ch ==  103) {
					state = 190;
				}
				else if(ch ==  104) {
					state = 190;
				}
				else if(ch ==  105) {
					state = 190;
				}
				else if(ch ==  106) {
					state = 190;
				}
				else if(ch ==  107) {
					state = 190;
				}
				else if(ch ==  108) {
					state = 190;
				}
				else if(ch ==  109) {
					state = 190;
				}
				else if(ch ==  110) {
					state = 190;
				}
				else if(ch ==  111) {
					state = 190;
				}
				else if(ch ==  112) {
					state = 190;
				}
				else if(ch ==  113) {
					state = 190;
				}
				else if(ch ==  114) {
					state = 190;
				}
				else if(ch ==  115) {
					state = 190;
				}
				else if(ch ==  116) {
					state = 190;
				}
				else if(ch ==  117) {
					state = 190;
				}
				else if(ch ==  118) {
					state = 190;
				}
				else if(ch ==  119) {
					state = 190;
				}
				else if(ch ==  120) {
					state = 190;
				}
				else if(ch ==  121) {
					state = 190;
				}
				else if(ch ==  122) {
					state = 190;
				}
				else if(ch ==  123) {
					state = 190;
				}
				else if(ch ==  124) {
					state = 190;
				}
				else if(ch ==  125) {
					state = 190;
				}
				else if(ch ==  126) {
					state = 190;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(98);
				}
				break;
			}
			case 173: {
				if(ch ==  48) {
					state = 173;
				}
				else if(ch ==  112) {
					state = 187;
				}
				else if(ch ==  49) {
					state = 173;
				}
				else if(ch ==  50) {
					state = 173;
				}
				else if(ch ==  51) {
					state = 173;
				}
				else if(ch ==  52) {
					state = 173;
				}
				else if(ch ==  53) {
					state = 173;
				}
				else if(ch ==  54) {
					state = 173;
				}
				else if(ch ==  55) {
					state = 173;
				}
				else if(ch ==  56) {
					state = 173;
				}
				else if(ch ==  57) {
					state = 173;
				}
				else if(ch ==  65) {
					state = 173;
				}
				else if(ch ==  66) {
					state = 173;
				}
				else if(ch ==  67) {
					state = 173;
				}
				else if(ch ==  68) {
					state = 173;
				}
				else if(ch ==  69) {
					state = 173;
				}
				else if(ch ==  70) {
					state = 173;
				}
				else if(ch ==  80) {
					state = 187;
				}
				else if(ch ==  97) {
					state = 173;
				}
				else if(ch ==  98) {
					state = 173;
				}
				else if(ch ==  99) {
					state = 173;
				}
				else if(ch ==  100) {
					state = 173;
				}
				else if(ch ==  101) {
					state = 173;
				}
				else if(ch ==  102) {
					state = 173;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 174: {
				if(ch ==  48) {
					state = 161;
				}
				else if(ch ==  49) {
					state = 161;
				}
				else if(ch ==  50) {
					state = 161;
				}
				else if(ch ==  51) {
					state = 161;
				}
				else if(ch ==  52) {
					state = 161;
				}
				else if(ch ==  53) {
					state = 161;
				}
				else if(ch ==  54) {
					state = 161;
				}
				else if(ch ==  55) {
					state = 161;
				}
				else if(ch ==  56) {
					state = 161;
				}
				else if(ch ==  57) {
					state = 161;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 175: {
				if(ch ==  48) {
					state = 162;
				}
				else if(ch ==  49) {
					state = 162;
				}
				else if(ch ==  50) {
					state = 162;
				}
				else if(ch ==  51) {
					state = 162;
				}
				else if(ch ==  52) {
					state = 162;
				}
				else if(ch ==  53) {
					state = 162;
				}
				else if(ch ==  54) {
					state = 162;
				}
				else if(ch ==  55) {
					state = 162;
				}
				else if(ch ==  56) {
					state = 162;
				}
				else if(ch ==  57) {
					state = 162;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 176: {
				if(ch ==  48) {
					state = 164;
				}
				else if(ch ==  49) {
					state = 164;
				}
				else if(ch ==  50) {
					state = 164;
				}
				else if(ch ==  51) {
					state = 164;
				}
				else if(ch ==  52) {
					state = 164;
				}
				else if(ch ==  53) {
					state = 164;
				}
				else if(ch ==  54) {
					state = 164;
				}
				else if(ch ==  55) {
					state = 164;
				}
				else if(ch ==  56) {
					state = 164;
				}
				else if(ch ==  57) {
					state = 164;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 177: {
				if(ch ==  48) {
					state = 166;
				}
				else if(ch ==  49) {
					state = 166;
				}
				else if(ch ==  50) {
					state = 166;
				}
				else if(ch ==  51) {
					state = 166;
				}
				else if(ch ==  52) {
					state = 166;
				}
				else if(ch ==  53) {
					state = 166;
				}
				else if(ch ==  54) {
					state = 166;
				}
				else if(ch ==  55) {
					state = 166;
				}
				else if(ch ==  56) {
					state = 166;
				}
				else if(ch ==  57) {
					state = 166;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 178: {
				if(ch ==  48) {
					state = 167;
				}
				else if(ch ==  49) {
					state = 167;
				}
				else if(ch ==  50) {
					state = 167;
				}
				else if(ch ==  51) {
					state = 167;
				}
				else if(ch ==  52) {
					state = 167;
				}
				else if(ch ==  53) {
					state = 167;
				}
				else if(ch ==  54) {
					state = 167;
				}
				else if(ch ==  55) {
					state = 167;
				}
				else if(ch ==  56) {
					state = 167;
				}
				else if(ch ==  57) {
					state = 167;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 179: {
				if(ch ==  48) {
					state = 168;
				}
				else if(ch ==  49) {
					state = 168;
				}
				else if(ch ==  50) {
					state = 168;
				}
				else if(ch ==  51) {
					state = 168;
				}
				else if(ch ==  52) {
					state = 168;
				}
				else if(ch ==  53) {
					state = 168;
				}
				else if(ch ==  54) {
					state = 168;
				}
				else if(ch ==  55) {
					state = 168;
				}
				else if(ch ==  56) {
					state = 168;
				}
				else if(ch ==  57) {
					state = 168;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 180: {
				if(ch ==  46) {
					state = 51;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 181: {
				if(ch ==  54) {
					state = 144;
				}
				else if(ch ==  46) {
					state = 99;
				}
				else if(ch ==  48) {
					state = 144;
				}
				else if(ch ==  49) {
					state = 144;
				}
				else if(ch ==  50) {
					state = 144;
				}
				else if(ch ==  51) {
					state = 144;
				}
				else if(ch ==  52) {
					state = 144;
				}
				else if(ch ==  53) {
					state = 144;
				}
				else if(ch ==  55) {
					state = 144;
				}
				else if(ch ==  56) {
					state = 144;
				}
				else if(ch ==  57) {
					state = 144;
				}
				else if(ch ==  65) {
					state = 144;
				}
				else if(ch ==  66) {
					state = 144;
				}
				else if(ch ==  67) {
					state = 144;
				}
				else if(ch ==  68) {
					state = 144;
				}
				else if(ch ==  69) {
					state = 144;
				}
				else if(ch ==  70) {
					state = 144;
				}
				else if(ch ==  97) {
					state = 144;
				}
				else if(ch ==  98) {
					state = 144;
				}
				else if(ch ==  99) {
					state = 144;
				}
				else if(ch ==  100) {
					state = 144;
				}
				else if(ch ==  101) {
					state = 144;
				}
				else if(ch ==  102) {
					state = 144;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 182: {
				if(ch ==  54) {
					state = 182;
				}
				else if(ch ==  46) {
					state = 165;
				}
				else if(ch ==  48) {
					state = 182;
				}
				else if(ch ==  49) {
					state = 182;
				}
				else if(ch ==  50) {
					state = 182;
				}
				else if(ch ==  51) {
					state = 182;
				}
				else if(ch ==  52) {
					state = 182;
				}
				else if(ch ==  53) {
					state = 182;
				}
				else if(ch ==  55) {
					state = 182;
				}
				else if(ch ==  56) {
					state = 182;
				}
				else if(ch ==  57) {
					state = 182;
				}
				else if(ch ==  69) {
					state = 183;
				}
				else if(ch ==  101) {
					state = 183;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 183: {
				if(ch ==  51) {
					state = 161;
				}
				else if(ch ==  43) {
					state = 174;
				}
				else if(ch ==  53) {
					state = 161;
				}
				else if(ch ==  45) {
					state = 174;
				}
				else if(ch ==  48) {
					state = 161;
				}
				else if(ch ==  49) {
					state = 161;
				}
				else if(ch ==  50) {
					state = 161;
				}
				else if(ch ==  52) {
					state = 161;
				}
				else if(ch ==  54) {
					state = 161;
				}
				else if(ch ==  55) {
					state = 161;
				}
				else if(ch ==  56) {
					state = 161;
				}
				else if(ch ==  57) {
					state = 161;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 184: {
				if(ch ==  51) {
					state = 162;
				}
				else if(ch ==  43) {
					state = 175;
				}
				else if(ch ==  53) {
					state = 162;
				}
				else if(ch ==  45) {
					state = 175;
				}
				else if(ch ==  48) {
					state = 162;
				}
				else if(ch ==  49) {
					state = 162;
				}
				else if(ch ==  50) {
					state = 162;
				}
				else if(ch ==  52) {
					state = 162;
				}
				else if(ch ==  54) {
					state = 162;
				}
				else if(ch ==  55) {
					state = 162;
				}
				else if(ch ==  56) {
					state = 162;
				}
				else if(ch ==  57) {
					state = 162;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 185: {
				if(ch ==  51) {
					state = 164;
				}
				else if(ch ==  43) {
					state = 176;
				}
				else if(ch ==  53) {
					state = 164;
				}
				else if(ch ==  45) {
					state = 176;
				}
				else if(ch ==  48) {
					state = 164;
				}
				else if(ch ==  49) {
					state = 164;
				}
				else if(ch ==  50) {
					state = 164;
				}
				else if(ch ==  52) {
					state = 164;
				}
				else if(ch ==  54) {
					state = 164;
				}
				else if(ch ==  55) {
					state = 164;
				}
				else if(ch ==  56) {
					state = 164;
				}
				else if(ch ==  57) {
					state = 164;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 186: {
				if(ch ==  51) {
					state = 166;
				}
				else if(ch ==  43) {
					state = 177;
				}
				else if(ch ==  53) {
					state = 166;
				}
				else if(ch ==  45) {
					state = 177;
				}
				else if(ch ==  48) {
					state = 166;
				}
				else if(ch ==  49) {
					state = 166;
				}
				else if(ch ==  50) {
					state = 166;
				}
				else if(ch ==  52) {
					state = 166;
				}
				else if(ch ==  54) {
					state = 166;
				}
				else if(ch ==  55) {
					state = 166;
				}
				else if(ch ==  56) {
					state = 166;
				}
				else if(ch ==  57) {
					state = 166;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 187: {
				if(ch ==  51) {
					state = 167;
				}
				else if(ch ==  43) {
					state = 178;
				}
				else if(ch ==  53) {
					state = 167;
				}
				else if(ch ==  45) {
					state = 178;
				}
				else if(ch ==  48) {
					state = 167;
				}
				else if(ch ==  49) {
					state = 167;
				}
				else if(ch ==  50) {
					state = 167;
				}
				else if(ch ==  52) {
					state = 167;
				}
				else if(ch ==  54) {
					state = 167;
				}
				else if(ch ==  55) {
					state = 167;
				}
				else if(ch ==  56) {
					state = 167;
				}
				else if(ch ==  57) {
					state = 167;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 188: {
				if(ch ==  51) {
					state = 168;
				}
				else if(ch ==  43) {
					state = 179;
				}
				else if(ch ==  53) {
					state = 168;
				}
				else if(ch ==  45) {
					state = 179;
				}
				else if(ch ==  48) {
					state = 168;
				}
				else if(ch ==  49) {
					state = 168;
				}
				else if(ch ==  50) {
					state = 168;
				}
				else if(ch ==  52) {
					state = 168;
				}
				else if(ch ==  54) {
					state = 168;
				}
				else if(ch ==  55) {
					state = 168;
				}
				else if(ch ==  56) {
					state = 168;
				}
				else if(ch ==  57) {
					state = 168;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 189: {
				if(ch ==  33) {
					state = 189;
				}
				else if(ch ==  73) {
					state = 189;
				}
				else if(ch ==  9) {
					state = 189;
				}
				else if(ch ==  75) {
					state = 189;
				}
				else if(ch ==  11) {
					state = 189;
				}
				else if(ch ==  76) {
					state = 189;
				}
				else if(ch ==  12) {
					state = 189;
				}
				else if(ch ==  32) {
					state = 189;
				}
				else if(ch ==  34) {
					state = 50;
				}
				else if(ch ==  37) {
					state = 189;
				}
				else if(ch ==  38) {
					state = 189;
				}
				else if(ch ==  39) {
					state = 189;
				}
				else if(ch ==  40) {
					state = 189;
				}
				else if(ch ==  41) {
					state = 189;
				}
				else if(ch ==  42) {
					state = 189;
				}
				else if(ch ==  43) {
					state = 189;
				}
				else if(ch ==  44) {
					state = 189;
				}
				else if(ch ==  45) {
					state = 189;
				}
				else if(ch ==  46) {
					state = 189;
				}
				else if(ch ==  47) {
					state = 189;
				}
				else if(ch ==  48) {
					state = 189;
				}
				else if(ch ==  49) {
					state = 189;
				}
				else if(ch ==  50) {
					state = 189;
				}
				else if(ch ==  51) {
					state = 189;
				}
				else if(ch ==  52) {
					state = 189;
				}
				else if(ch ==  53) {
					state = 189;
				}
				else if(ch ==  54) {
					state = 189;
				}
				else if(ch ==  55) {
					state = 189;
				}
				else if(ch ==  56) {
					state = 189;
				}
				else if(ch ==  57) {
					state = 189;
				}
				else if(ch ==  58) {
					state = 189;
				}
				else if(ch ==  59) {
					state = 189;
				}
				else if(ch ==  60) {
					state = 189;
				}
				else if(ch ==  61) {
					state = 189;
				}
				else if(ch ==  62) {
					state = 189;
				}
				else if(ch ==  63) {
					state = 189;
				}
				else if(ch ==  65) {
					state = 189;
				}
				else if(ch ==  66) {
					state = 189;
				}
				else if(ch ==  67) {
					state = 189;
				}
				else if(ch ==  68) {
					state = 189;
				}
				else if(ch ==  69) {
					state = 189;
				}
				else if(ch ==  70) {
					state = 189;
				}
				else if(ch ==  71) {
					state = 189;
				}
				else if(ch ==  72) {
					state = 189;
				}
				else if(ch ==  74) {
					state = 189;
				}
				else if(ch ==  77) {
					state = 189;
				}
				else if(ch ==  78) {
					state = 189;
				}
				else if(ch ==  79) {
					state = 189;
				}
				else if(ch ==  80) {
					state = 189;
				}
				else if(ch ==  81) {
					state = 189;
				}
				else if(ch ==  82) {
					state = 189;
				}
				else if(ch ==  83) {
					state = 189;
				}
				else if(ch ==  84) {
					state = 189;
				}
				else if(ch ==  85) {
					state = 189;
				}
				else if(ch ==  86) {
					state = 189;
				}
				else if(ch ==  87) {
					state = 189;
				}
				else if(ch ==  88) {
					state = 189;
				}
				else if(ch ==  89) {
					state = 189;
				}
				else if(ch ==  90) {
					state = 189;
				}
				else if(ch ==  91) {
					state = 189;
				}
				else if(ch ==  92) {
					state = 192;
				}
				else if(ch ==  93) {
					state = 189;
				}
				else if(ch ==  94) {
					state = 189;
				}
				else if(ch ==  95) {
					state = 189;
				}
				else if(ch ==  97) {
					state = 189;
				}
				else if(ch ==  98) {
					state = 189;
				}
				else if(ch ==  99) {
					state = 189;
				}
				else if(ch ==  100) {
					state = 189;
				}
				else if(ch ==  101) {
					state = 189;
				}
				else if(ch ==  102) {
					state = 189;
				}
				else if(ch ==  103) {
					state = 189;
				}
				else if(ch ==  104) {
					state = 189;
				}
				else if(ch ==  105) {
					state = 189;
				}
				else if(ch ==  106) {
					state = 189;
				}
				else if(ch ==  107) {
					state = 189;
				}
				else if(ch ==  108) {
					state = 189;
				}
				else if(ch ==  109) {
					state = 189;
				}
				else if(ch ==  110) {
					state = 189;
				}
				else if(ch ==  111) {
					state = 189;
				}
				else if(ch ==  112) {
					state = 189;
				}
				else if(ch ==  113) {
					state = 189;
				}
				else if(ch ==  114) {
					state = 189;
				}
				else if(ch ==  115) {
					state = 189;
				}
				else if(ch ==  116) {
					state = 189;
				}
				else if(ch ==  117) {
					state = 189;
				}
				else if(ch ==  118) {
					state = 189;
				}
				else if(ch ==  119) {
					state = 189;
				}
				else if(ch ==  120) {
					state = 189;
				}
				else if(ch ==  121) {
					state = 189;
				}
				else if(ch ==  122) {
					state = 189;
				}
				else if(ch ==  123) {
					state = 189;
				}
				else if(ch ==  124) {
					state = 189;
				}
				else if(ch ==  125) {
					state = 189;
				}
				else if(ch ==  126) {
					state = 189;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 190: {
				if(ch ==  33) {
					state = 190;
				}
				else if(ch ==  73) {
					state = 190;
				}
				else if(ch ==  9) {
					state = 190;
				}
				else if(ch ==  75) {
					state = 190;
				}
				else if(ch ==  11) {
					state = 190;
				}
				else if(ch ==  76) {
					state = 190;
				}
				else if(ch ==  12) {
					state = 190;
				}
				else if(ch ==  32) {
					state = 190;
				}
				else if(ch ==  34) {
					state = 190;
				}
				else if(ch ==  37) {
					state = 190;
				}
				else if(ch ==  38) {
					state = 190;
				}
				else if(ch ==  39) {
					state = 43;
				}
				else if(ch ==  40) {
					state = 190;
				}
				else if(ch ==  41) {
					state = 190;
				}
				else if(ch ==  42) {
					state = 190;
				}
				else if(ch ==  43) {
					state = 190;
				}
				else if(ch ==  44) {
					state = 190;
				}
				else if(ch ==  45) {
					state = 190;
				}
				else if(ch ==  46) {
					state = 190;
				}
				else if(ch ==  47) {
					state = 190;
				}
				else if(ch ==  48) {
					state = 190;
				}
				else if(ch ==  49) {
					state = 190;
				}
				else if(ch ==  50) {
					state = 190;
				}
				else if(ch ==  51) {
					state = 190;
				}
				else if(ch ==  52) {
					state = 190;
				}
				else if(ch ==  53) {
					state = 190;
				}
				else if(ch ==  54) {
					state = 190;
				}
				else if(ch ==  55) {
					state = 190;
				}
				else if(ch ==  56) {
					state = 190;
				}
				else if(ch ==  57) {
					state = 190;
				}
				else if(ch ==  58) {
					state = 190;
				}
				else if(ch ==  59) {
					state = 190;
				}
				else if(ch ==  60) {
					state = 190;
				}
				else if(ch ==  61) {
					state = 190;
				}
				else if(ch ==  62) {
					state = 190;
				}
				else if(ch ==  63) {
					state = 190;
				}
				else if(ch ==  65) {
					state = 190;
				}
				else if(ch ==  66) {
					state = 190;
				}
				else if(ch ==  67) {
					state = 190;
				}
				else if(ch ==  68) {
					state = 190;
				}
				else if(ch ==  69) {
					state = 190;
				}
				else if(ch ==  70) {
					state = 190;
				}
				else if(ch ==  71) {
					state = 190;
				}
				else if(ch ==  72) {
					state = 190;
				}
				else if(ch ==  74) {
					state = 190;
				}
				else if(ch ==  77) {
					state = 190;
				}
				else if(ch ==  78) {
					state = 190;
				}
				else if(ch ==  79) {
					state = 190;
				}
				else if(ch ==  80) {
					state = 190;
				}
				else if(ch ==  81) {
					state = 190;
				}
				else if(ch ==  82) {
					state = 190;
				}
				else if(ch ==  83) {
					state = 190;
				}
				else if(ch ==  84) {
					state = 190;
				}
				else if(ch ==  85) {
					state = 190;
				}
				else if(ch ==  86) {
					state = 190;
				}
				else if(ch ==  87) {
					state = 190;
				}
				else if(ch ==  88) {
					state = 190;
				}
				else if(ch ==  89) {
					state = 190;
				}
				else if(ch ==  90) {
					state = 190;
				}
				else if(ch ==  91) {
					state = 190;
				}
				else if(ch ==  92) {
					state = 191;
				}
				else if(ch ==  93) {
					state = 190;
				}
				else if(ch ==  94) {
					state = 190;
				}
				else if(ch ==  95) {
					state = 190;
				}
				else if(ch ==  97) {
					state = 190;
				}
				else if(ch ==  98) {
					state = 190;
				}
				else if(ch ==  99) {
					state = 190;
				}
				else if(ch ==  100) {
					state = 190;
				}
				else if(ch ==  101) {
					state = 190;
				}
				else if(ch ==  102) {
					state = 190;
				}
				else if(ch ==  103) {
					state = 190;
				}
				else if(ch ==  104) {
					state = 190;
				}
				else if(ch ==  105) {
					state = 190;
				}
				else if(ch ==  106) {
					state = 190;
				}
				else if(ch ==  107) {
					state = 190;
				}
				else if(ch ==  108) {
					state = 190;
				}
				else if(ch ==  109) {
					state = 190;
				}
				else if(ch ==  110) {
					state = 190;
				}
				else if(ch ==  111) {
					state = 190;
				}
				else if(ch ==  112) {
					state = 190;
				}
				else if(ch ==  113) {
					state = 190;
				}
				else if(ch ==  114) {
					state = 190;
				}
				else if(ch ==  115) {
					state = 190;
				}
				else if(ch ==  116) {
					state = 190;
				}
				else if(ch ==  117) {
					state = 190;
				}
				else if(ch ==  118) {
					state = 190;
				}
				else if(ch ==  119) {
					state = 190;
				}
				else if(ch ==  120) {
					state = 190;
				}
				else if(ch ==  121) {
					state = 190;
				}
				else if(ch ==  122) {
					state = 190;
				}
				else if(ch ==  123) {
					state = 190;
				}
				else if(ch ==  124) {
					state = 190;
				}
				else if(ch ==  125) {
					state = 190;
				}
				else if(ch ==  126) {
					state = 190;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 191: {
				if(ch ==  33) {
					state = 190;
				}
				else if(ch ==  73) {
					state = 190;
				}
				else if(ch ==  9) {
					state = 190;
				}
				else if(ch ==  75) {
					state = 190;
				}
				else if(ch ==  11) {
					state = 190;
				}
				else if(ch ==  76) {
					state = 190;
				}
				else if(ch ==  12) {
					state = 190;
				}
				else if(ch ==  32) {
					state = 190;
				}
				else if(ch ==  34) {
					state = 190;
				}
				else if(ch ==  37) {
					state = 190;
				}
				else if(ch ==  38) {
					state = 190;
				}
				else if(ch ==  39) {
					state = 160;
				}
				else if(ch ==  40) {
					state = 190;
				}
				else if(ch ==  41) {
					state = 190;
				}
				else if(ch ==  42) {
					state = 190;
				}
				else if(ch ==  43) {
					state = 190;
				}
				else if(ch ==  44) {
					state = 190;
				}
				else if(ch ==  45) {
					state = 190;
				}
				else if(ch ==  46) {
					state = 190;
				}
				else if(ch ==  47) {
					state = 190;
				}
				else if(ch ==  48) {
					state = 190;
				}
				else if(ch ==  49) {
					state = 190;
				}
				else if(ch ==  50) {
					state = 190;
				}
				else if(ch ==  51) {
					state = 190;
				}
				else if(ch ==  52) {
					state = 190;
				}
				else if(ch ==  53) {
					state = 190;
				}
				else if(ch ==  54) {
					state = 190;
				}
				else if(ch ==  55) {
					state = 190;
				}
				else if(ch ==  56) {
					state = 190;
				}
				else if(ch ==  57) {
					state = 190;
				}
				else if(ch ==  58) {
					state = 190;
				}
				else if(ch ==  59) {
					state = 190;
				}
				else if(ch ==  60) {
					state = 190;
				}
				else if(ch ==  61) {
					state = 190;
				}
				else if(ch ==  62) {
					state = 190;
				}
				else if(ch ==  63) {
					state = 190;
				}
				else if(ch ==  65) {
					state = 190;
				}
				else if(ch ==  66) {
					state = 190;
				}
				else if(ch ==  67) {
					state = 190;
				}
				else if(ch ==  68) {
					state = 190;
				}
				else if(ch ==  69) {
					state = 190;
				}
				else if(ch ==  70) {
					state = 190;
				}
				else if(ch ==  71) {
					state = 190;
				}
				else if(ch ==  72) {
					state = 190;
				}
				else if(ch ==  74) {
					state = 190;
				}
				else if(ch ==  77) {
					state = 190;
				}
				else if(ch ==  78) {
					state = 190;
				}
				else if(ch ==  79) {
					state = 190;
				}
				else if(ch ==  80) {
					state = 190;
				}
				else if(ch ==  81) {
					state = 190;
				}
				else if(ch ==  82) {
					state = 190;
				}
				else if(ch ==  83) {
					state = 190;
				}
				else if(ch ==  84) {
					state = 190;
				}
				else if(ch ==  85) {
					state = 190;
				}
				else if(ch ==  86) {
					state = 190;
				}
				else if(ch ==  87) {
					state = 190;
				}
				else if(ch ==  88) {
					state = 190;
				}
				else if(ch ==  89) {
					state = 190;
				}
				else if(ch ==  90) {
					state = 190;
				}
				else if(ch ==  91) {
					state = 190;
				}
				else if(ch ==  92) {
					state = 191;
				}
				else if(ch ==  93) {
					state = 190;
				}
				else if(ch ==  94) {
					state = 190;
				}
				else if(ch ==  95) {
					state = 190;
				}
				else if(ch ==  97) {
					state = 190;
				}
				else if(ch ==  98) {
					state = 190;
				}
				else if(ch ==  99) {
					state = 190;
				}
				else if(ch ==  100) {
					state = 190;
				}
				else if(ch ==  101) {
					state = 190;
				}
				else if(ch ==  102) {
					state = 190;
				}
				else if(ch ==  103) {
					state = 190;
				}
				else if(ch ==  104) {
					state = 190;
				}
				else if(ch ==  105) {
					state = 190;
				}
				else if(ch ==  106) {
					state = 190;
				}
				else if(ch ==  107) {
					state = 190;
				}
				else if(ch ==  108) {
					state = 190;
				}
				else if(ch ==  109) {
					state = 190;
				}
				else if(ch ==  110) {
					state = 190;
				}
				else if(ch ==  111) {
					state = 190;
				}
				else if(ch ==  112) {
					state = 190;
				}
				else if(ch ==  113) {
					state = 190;
				}
				else if(ch ==  114) {
					state = 190;
				}
				else if(ch ==  115) {
					state = 190;
				}
				else if(ch ==  116) {
					state = 190;
				}
				else if(ch ==  117) {
					state = 190;
				}
				else if(ch ==  118) {
					state = 190;
				}
				else if(ch ==  119) {
					state = 190;
				}
				else if(ch ==  120) {
					state = 190;
				}
				else if(ch ==  121) {
					state = 190;
				}
				else if(ch ==  122) {
					state = 190;
				}
				else if(ch ==  123) {
					state = 190;
				}
				else if(ch ==  124) {
					state = 190;
				}
				else if(ch ==  125) {
					state = 190;
				}
				else if(ch ==  126) {
					state = 190;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 192: {
				if(ch ==  33) {
					state = 189;
				}
				else if(ch ==  73) {
					state = 189;
				}
				else if(ch ==  9) {
					state = 189;
				}
				else if(ch ==  75) {
					state = 189;
				}
				else if(ch ==  11) {
					state = 189;
				}
				else if(ch ==  76) {
					state = 189;
				}
				else if(ch ==  12) {
					state = 189;
				}
				else if(ch ==  32) {
					state = 189;
				}
				else if(ch ==  34) {
					state = 169;
				}
				else if(ch ==  37) {
					state = 189;
				}
				else if(ch ==  38) {
					state = 189;
				}
				else if(ch ==  39) {
					state = 189;
				}
				else if(ch ==  40) {
					state = 189;
				}
				else if(ch ==  41) {
					state = 189;
				}
				else if(ch ==  42) {
					state = 189;
				}
				else if(ch ==  43) {
					state = 189;
				}
				else if(ch ==  44) {
					state = 189;
				}
				else if(ch ==  45) {
					state = 189;
				}
				else if(ch ==  46) {
					state = 189;
				}
				else if(ch ==  47) {
					state = 189;
				}
				else if(ch ==  48) {
					state = 189;
				}
				else if(ch ==  49) {
					state = 189;
				}
				else if(ch ==  50) {
					state = 189;
				}
				else if(ch ==  51) {
					state = 189;
				}
				else if(ch ==  52) {
					state = 189;
				}
				else if(ch ==  53) {
					state = 189;
				}
				else if(ch ==  54) {
					state = 189;
				}
				else if(ch ==  55) {
					state = 189;
				}
				else if(ch ==  56) {
					state = 189;
				}
				else if(ch ==  57) {
					state = 189;
				}
				else if(ch ==  58) {
					state = 189;
				}
				else if(ch ==  59) {
					state = 189;
				}
				else if(ch ==  60) {
					state = 189;
				}
				else if(ch ==  61) {
					state = 189;
				}
				else if(ch ==  62) {
					state = 189;
				}
				else if(ch ==  63) {
					state = 189;
				}
				else if(ch ==  65) {
					state = 189;
				}
				else if(ch ==  66) {
					state = 189;
				}
				else if(ch ==  67) {
					state = 189;
				}
				else if(ch ==  68) {
					state = 189;
				}
				else if(ch ==  69) {
					state = 189;
				}
				else if(ch ==  70) {
					state = 189;
				}
				else if(ch ==  71) {
					state = 189;
				}
				else if(ch ==  72) {
					state = 189;
				}
				else if(ch ==  74) {
					state = 189;
				}
				else if(ch ==  77) {
					state = 189;
				}
				else if(ch ==  78) {
					state = 189;
				}
				else if(ch ==  79) {
					state = 189;
				}
				else if(ch ==  80) {
					state = 189;
				}
				else if(ch ==  81) {
					state = 189;
				}
				else if(ch ==  82) {
					state = 189;
				}
				else if(ch ==  83) {
					state = 189;
				}
				else if(ch ==  84) {
					state = 189;
				}
				else if(ch ==  85) {
					state = 189;
				}
				else if(ch ==  86) {
					state = 189;
				}
				else if(ch ==  87) {
					state = 189;
				}
				else if(ch ==  88) {
					state = 189;
				}
				else if(ch ==  89) {
					state = 189;
				}
				else if(ch ==  90) {
					state = 189;
				}
				else if(ch ==  91) {
					state = 189;
				}
				else if(ch ==  92) {
					state = 192;
				}
				else if(ch ==  93) {
					state = 189;
				}
				else if(ch ==  94) {
					state = 189;
				}
				else if(ch ==  95) {
					state = 189;
				}
				else if(ch ==  97) {
					state = 189;
				}
				else if(ch ==  98) {
					state = 189;
				}
				else if(ch ==  99) {
					state = 189;
				}
				else if(ch ==  100) {
					state = 189;
				}
				else if(ch ==  101) {
					state = 189;
				}
				else if(ch ==  102) {
					state = 189;
				}
				else if(ch ==  103) {
					state = 189;
				}
				else if(ch ==  104) {
					state = 189;
				}
				else if(ch ==  105) {
					state = 189;
				}
				else if(ch ==  106) {
					state = 189;
				}
				else if(ch ==  107) {
					state = 189;
				}
				else if(ch ==  108) {
					state = 189;
				}
				else if(ch ==  109) {
					state = 189;
				}
				else if(ch ==  110) {
					state = 189;
				}
				else if(ch ==  111) {
					state = 189;
				}
				else if(ch ==  112) {
					state = 189;
				}
				else if(ch ==  113) {
					state = 189;
				}
				else if(ch ==  114) {
					state = 189;
				}
				else if(ch ==  115) {
					state = 189;
				}
				else if(ch ==  116) {
					state = 189;
				}
				else if(ch ==  117) {
					state = 189;
				}
				else if(ch ==  118) {
					state = 189;
				}
				else if(ch ==  119) {
					state = 189;
				}
				else if(ch ==  120) {
					state = 189;
				}
				else if(ch ==  121) {
					state = 189;
				}
				else if(ch ==  122) {
					state = 189;
				}
				else if(ch ==  123) {
					state = 189;
				}
				else if(ch ==  124) {
					state = 189;
				}
				else if(ch ==  125) {
					state = 189;
				}
				else if(ch ==  126) {
					state = 189;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 193: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 124;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 194: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 129;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 195: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 114;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 196: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 131;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 197: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 133;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 198: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 100;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 199: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 101;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 200: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 112;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 201: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 126;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 202: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 134;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 203: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 39;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 204: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 102;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 277;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 205: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 105;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 206: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 108;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 207: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 109;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 208: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 128;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 209: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 107;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 210: {
				if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 113;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 211: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 111;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 212: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 116;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 213: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 120;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 214: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 245;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 125;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 215: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 118;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 216: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 119;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 217: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 132;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 218: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 135;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 219: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 103;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 220: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 106;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 221: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 127;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 266;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 222: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 121;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 223: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 123;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 224: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 104;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 225: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 117;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 226: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 218;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 227: {
				if(ch ==  112) {
					state = 188;
				}
				else if(ch ==  48) {
					state = 173;
				}
				else if(ch ==  49) {
					state = 173;
				}
				else if(ch ==  50) {
					state = 173;
				}
				else if(ch ==  51) {
					state = 173;
				}
				else if(ch ==  52) {
					state = 173;
				}
				else if(ch ==  53) {
					state = 173;
				}
				else if(ch ==  54) {
					state = 173;
				}
				else if(ch ==  55) {
					state = 173;
				}
				else if(ch ==  56) {
					state = 173;
				}
				else if(ch ==  57) {
					state = 173;
				}
				else if(ch ==  65) {
					state = 173;
				}
				else if(ch ==  66) {
					state = 173;
				}
				else if(ch ==  67) {
					state = 173;
				}
				else if(ch ==  68) {
					state = 173;
				}
				else if(ch ==  69) {
					state = 173;
				}
				else if(ch ==  70) {
					state = 173;
				}
				else if(ch ==  80) {
					state = 188;
				}
				else if(ch ==  97) {
					state = 173;
				}
				else if(ch ==  98) {
					state = 173;
				}
				else if(ch ==  99) {
					state = 173;
				}
				else if(ch ==  100) {
					state = 173;
				}
				else if(ch ==  101) {
					state = 173;
				}
				else if(ch ==  102) {
					state = 173;
				}
				else {
					printf("error occurs on line %d, state %d\n", line, state);
					return ;
				}
				break;
			}
			case 228: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 219;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 193;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 243;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 229: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 205;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 230: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 200;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 231: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 136;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 232: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 211;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 233: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 215;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 234: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 196;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 235: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 206;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 236: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 207;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 237: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 209;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 238: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 280;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 213;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 239: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 202;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 240: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 274;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 220;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 225;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 241: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 198;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 242: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 199;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 243: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 221;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 244: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 224;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 245: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 194;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 246: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 204;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 247: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 210;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 248: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 212;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 249: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 217;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 250: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 223;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 251: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 195;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 252: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 201;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 253: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 203;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 254: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 197;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 255: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 208;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 256: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 216;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 257: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 222;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 258: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 248;
				}
				else if(ch ==  67) {
					state = 287;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 290;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 259: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 254;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 253;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 260: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 255;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 261: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 230;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 262: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 241;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 232;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 263: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 242;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 264: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 236;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 265: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 259;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 267;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 249;
				}
				else if(ch ==  105) {
					state = 262;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 266: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 244;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 267: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 251;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 268: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 226;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 269: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 238;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 270: {
				if(ch ==  112) {
					state = 239;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 271: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 231;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 272: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 234;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 273: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 252;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 274: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 233;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 275: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 235;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 276: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 285;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 256;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 282;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 277: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 275;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 278: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 276;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 279: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 260;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 280: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 263;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 281: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 268;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 282: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 273;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 283: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 270;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 284: {
				if(ch ==  112) {
					state = 261;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 285: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 272;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 286: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 281;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 287: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 283;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 288: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 284;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 289: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 286;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 290: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 289;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
			case 291: {
				if(ch ==  112) {
					state = 291;
				}
				else if(ch ==  48) {
					state = 291;
				}
				else if(ch ==  113) {
					state = 291;
				}
				else if(ch ==  49) {
					state = 291;
				}
				else if(ch ==  114) {
					state = 291;
				}
				else if(ch ==  50) {
					state = 291;
				}
				else if(ch ==  115) {
					state = 291;
				}
				else if(ch ==  51) {
					state = 291;
				}
				else if(ch ==  116) {
					state = 291;
				}
				else if(ch ==  52) {
					state = 291;
				}
				else if(ch ==  117) {
					state = 291;
				}
				else if(ch ==  53) {
					state = 291;
				}
				else if(ch ==  118) {
					state = 291;
				}
				else if(ch ==  54) {
					state = 291;
				}
				else if(ch ==  119) {
					state = 291;
				}
				else if(ch ==  55) {
					state = 291;
				}
				else if(ch ==  120) {
					state = 291;
				}
				else if(ch ==  56) {
					state = 291;
				}
				else if(ch ==  121) {
					state = 291;
				}
				else if(ch ==  57) {
					state = 291;
				}
				else if(ch ==  65) {
					state = 291;
				}
				else if(ch ==  66) {
					state = 291;
				}
				else if(ch ==  67) {
					state = 291;
				}
				else if(ch ==  68) {
					state = 291;
				}
				else if(ch ==  69) {
					state = 291;
				}
				else if(ch ==  70) {
					state = 291;
				}
				else if(ch ==  71) {
					state = 291;
				}
				else if(ch ==  72) {
					state = 291;
				}
				else if(ch ==  73) {
					state = 291;
				}
				else if(ch ==  74) {
					state = 291;
				}
				else if(ch ==  75) {
					state = 291;
				}
				else if(ch ==  76) {
					state = 291;
				}
				else if(ch ==  77) {
					state = 291;
				}
				else if(ch ==  78) {
					state = 291;
				}
				else if(ch ==  79) {
					state = 291;
				}
				else if(ch ==  80) {
					state = 291;
				}
				else if(ch ==  81) {
					state = 291;
				}
				else if(ch ==  82) {
					state = 291;
				}
				else if(ch ==  83) {
					state = 291;
				}
				else if(ch ==  84) {
					state = 291;
				}
				else if(ch ==  85) {
					state = 291;
				}
				else if(ch ==  86) {
					state = 291;
				}
				else if(ch ==  87) {
					state = 291;
				}
				else if(ch ==  88) {
					state = 291;
				}
				else if(ch ==  89) {
					state = 291;
				}
				else if(ch ==  90) {
					state = 291;
				}
				else if(ch ==  95) {
					state = 291;
				}
				else if(ch ==  97) {
					state = 291;
				}
				else if(ch ==  98) {
					state = 291;
				}
				else if(ch ==  99) {
					state = 291;
				}
				else if(ch ==  100) {
					state = 291;
				}
				else if(ch ==  101) {
					state = 291;
				}
				else if(ch ==  102) {
					state = 291;
				}
				else if(ch ==  103) {
					state = 291;
				}
				else if(ch ==  104) {
					state = 291;
				}
				else if(ch ==  105) {
					state = 291;
				}
				else if(ch ==  106) {
					state = 291;
				}
				else if(ch ==  107) {
					state = 291;
				}
				else if(ch ==  108) {
					state = 291;
				}
				else if(ch ==  109) {
					state = 291;
				}
				else if(ch ==  110) {
					state = 291;
				}
				else if(ch ==  111) {
					state = 291;
				}
				else if(ch ==  122) {
					state = 291;
				}
				else {
					buf_idx--;
					index = 0;
					state = 0;
					action(39);
				}
				break;
			}
		}
	}
}


int main(int argc, char **args) {
	if(argc == 1) {
		puts("please input the path of the source file");
		exit(1);
	}
	else if(argc == 2) {
		freopen(args[1], "r", stdin);
		freopen("token.out", "w", stdout);
	}
	else if(argc == 3) {
		freopen(args[1], "r", stdin);
		freopen(args[2], "w", stdout);
	}
	else {
		puts("error command");
		exit(1);
	}
	char ch;
	int cnt = 0;
	do {
		ch = getchar();
		buffer[cnt++] = ch;
	}while(ch != EOF);
	scanner(buffer);
	return 0;
}
