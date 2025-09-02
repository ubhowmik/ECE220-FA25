; Write a program that reads a sequence of memory locations and 
; print them in reverse order
; staring address x4000
; ending address x4003
; use PUSH and POP

; REGISTER ALLOCATION
; R1 - START_ADD
; R2 - END_ADD
; R3 - TEMP

.ORIG x3000
LD R1,START_ADD
LD R2, END_ADD

NOT R2, R2
ADD R2, R2, #1

LOOP
LDR R0,R1,#0
JSR PUSH
ADD R3, R1, R2
BRZP PRINT
ADD R1, R1,#1
BRNZP LOOP

PRINT
LD R3, ASCII
LOOP2
JSR POP
AND R5, R5, R5
BRP DONE
ADD R0, R0, R3
OUT
BRNZP LOOP2

DONE
HALT

START_ADD .FILL X4000
END_ADD .FILL X4003
ASCII .FILL X30
;----------------------PUSH/POP-----------------------------
;IN:R0, OUT:R5 (0-success, 1-fail/overflow)
;R3: STACK_END R6: STACK_TOP
;
PUSH	
	ST R3, PUSH_SaveR3	;save R3
	ST R6, PUSH_SaveR6	;save R6
	AND R5, R5, #0		;
	LD R3, STACK_END	;
	LD R6, STACK_TOP	;
	ADD R3, R3, #-1		; Stack End Decremented by 1
	NOT R3, R3		;
	ADD R3, R3, #1		;
	ADD R3, R3, R6		;
	BRz OVERFLOW		;stack is full
	STR R0, R6, #0		;no overflow, store value in the stack
	ADD R6, R6, #-1		;move top of the stack
	ST R6, STACK_TOP	;store top of stack pointer
	BRnzp DONE_PUSH		;
OVERFLOW
	ADD R5, R5, #1		;
DONE_PUSH
	LD R3, PUSH_SaveR3	;
	LD R6, PUSH_SaveR6	;
	RET


PUSH_SaveR3	.BLKW #1	;
PUSH_SaveR6	.BLKW #1	;


;OUT: R0, OUT R5 (0-success, 1-fail/underflow)
;R3: STACK_START, R6: STACK_TOP
;
POP	
	ST R3, POP_SaveR3	;save R3
	ST R6, POP_SaveR6	;save R6
	AND R5, R5, #0		;clear R5
	LD R3, STACK_START	;
	LD R6, STACK_TOP	;
	NOT R3, R3		;
	ADD R3, R3, #1		;
	ADD R3, R3, R6		;
	BRz UNDERFLOW		;
	ADD R6, R6, #1		;
	LDR R0, R6, #0		;
	ST R6, STACK_TOP	;
	BRnzp DONE_POP		;
UNDERFLOW
	ADD R5, R5, #1		;
DONE_POP
	LD R3, POP_SaveR3	;
	LD R6, POP_SaveR6	;
	RET


POP_SaveR3	.BLKW #1	;
POP_SaveR6	.BLKW #1	;
STACK_END	.FILL x3FFA	;
STACK_START	.FILL x4000	;
STACK_TOP	.FILL x4000	;


.END
