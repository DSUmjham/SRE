; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.30729.01 

	TITLE	c:\Users\user\Desktop\binaries\23_switch_case.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRT
INCLUDELIB OLDNAMES

_DATA	SEGMENT
$SG2472	DB	'zero', 0aH, 00H
	ORG $+2
$SG2475	DB	'one', 0aH, 00H
	ORG $+3
$SG2478	DB	'two', 0aH, 00H
	ORG $+3
$SG2480	DB	'something unknown', 0aH, 00H
_DATA	ENDS
PUBLIC	_f
EXTRN	__imp__printf:PROC
; Function compile flags: /Odtp
_TEXT	SEGMENT
_a$ = 8							; size = 4
_f	PROC
; File c:\users\user\desktop\binaries\23_switch_case.c
; Line 3
	push	ebp
	mov	ebp, esp
; Line 4
	cmp	DWORD PTR _a$[ebp], 0
	jne	SHORT $LN6@f
; Line 5
	push	OFFSET $SG2472
	call	DWORD PTR __imp__printf
	add	esp, 4
	jmp	SHORT $LN7@f
$LN6@f:
; Line 6
	cmp	DWORD PTR _a$[ebp], 1
	jne	SHORT $LN4@f
; Line 7
	push	OFFSET $SG2475
	call	DWORD PTR __imp__printf
	add	esp, 4
	jmp	SHORT $LN7@f
$LN4@f:
; Line 8
	cmp	DWORD PTR _a$[ebp], 2
	jne	SHORT $LN2@f
; Line 9
	push	OFFSET $SG2478
	call	DWORD PTR __imp__printf
	add	esp, 4
; Line 10
	jmp	SHORT $LN7@f
$LN2@f:
; Line 11
	push	OFFSET $SG2480
	call	DWORD PTR __imp__printf
	add	esp, 4
$LN7@f:
; Line 12
	pop	ebp
	ret	0
_f	ENDP
_TEXT	ENDS
PUBLIC	_main
; Function compile flags: /Odtp
_TEXT	SEGMENT
_main	PROC
; Line 14
	push	ebp
	mov	ebp, esp
; Line 15
	push	2
	call	_f
	add	esp, 4
; Line 16
	xor	eax, eax
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
END
