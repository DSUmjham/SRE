; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.30729.01 

	TITLE	c:\Users\user\Desktop\binaries\12_scanf_global_uninit.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRT
INCLUDELIB OLDNAMES

_DATA	SEGMENT
COMM	_x:DWORD
$SG2470	DB	'Enter X:', 0aH, 00H
	ORG $+2
$SG2471	DB	'%d', 00H
	ORG $+1
$SG2472	DB	'You entered %d...', 0aH, 00H
_DATA	ENDS
PUBLIC	_main
EXTRN	__imp__scanf:PROC
EXTRN	__imp__printf:PROC
; Function compile flags: /Odtp
_TEXT	SEGMENT
_main	PROC
; File c:\users\user\desktop\binaries\12_scanf_global_uninit.c
; Line 7
	push	ebp
	mov	ebp, esp
; Line 8
	push	OFFSET $SG2470
	call	DWORD PTR __imp__printf
	add	esp, 4
; Line 9
	push	OFFSET _x
	push	OFFSET $SG2471
	call	DWORD PTR __imp__scanf
	add	esp, 8
; Line 10
	mov	eax, DWORD PTR _x
	push	eax
	push	OFFSET $SG2472
	call	DWORD PTR __imp__printf
	add	esp, 8
; Line 11
	xor	eax, eax
; Line 12
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
END
