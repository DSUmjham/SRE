; Listing generated by Microsoft (R) Optimizing Compiler Version 15.00.30729.01 

	TITLE	c:\Users\user\Desktop\binaries\26_arrays.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRT
INCLUDELIB OLDNAMES

_DATA	SEGMENT
$SG2477	DB	'a[%d]=%d', 0aH, 00H
_DATA	ENDS
PUBLIC	_main
EXTRN	__imp__printf:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT rtc$TMZ
; File c:\users\user\desktop\binaries\26_arrays.c
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu
rtc$IMZ	ENDS
_TEXT	SEGMENT
_i$ = -92						; size = 4
_a$ = -84						; size = 80
_main	PROC
; Line 6
	push	ebp
	mov	ebp, esp
	sub	esp, 92					; 0000005cH
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-92]
	mov	ecx, 23					; 00000017H
	mov	eax, -858993460				; ccccccccH
	rep stosd
; Line 10
	mov	DWORD PTR _i$[ebp], 0
	jmp	SHORT $LN6@main
$LN5@main:
	mov	eax, DWORD PTR _i$[ebp]
	add	eax, 1
	mov	DWORD PTR _i$[ebp], eax
$LN6@main:
	cmp	DWORD PTR _i$[ebp], 20			; 00000014H
	jge	SHORT $LN4@main
; Line 11
	mov	ecx, DWORD PTR _i$[ebp]
	shl	ecx, 1
	mov	edx, DWORD PTR _i$[ebp]
	mov	DWORD PTR _a$[ebp+edx*4], ecx
	jmp	SHORT $LN5@main
$LN4@main:
; Line 12
	mov	DWORD PTR _i$[ebp], 0
	jmp	SHORT $LN3@main
$LN2@main:
	mov	eax, DWORD PTR _i$[ebp]
	add	eax, 1
	mov	DWORD PTR _i$[ebp], eax
$LN3@main:
	cmp	DWORD PTR _i$[ebp], 20			; 00000014H
	jge	SHORT $LN1@main
; Line 13
	mov	esi, esp
	mov	ecx, DWORD PTR _i$[ebp]
	mov	edx, DWORD PTR _a$[ebp+ecx*4]
	push	edx
	mov	eax, DWORD PTR _i$[ebp]
	push	eax
	push	OFFSET $SG2477
	call	DWORD PTR __imp__printf
	add	esp, 12					; 0000000cH
	cmp	esi, esp
	call	__RTC_CheckEsp
	jmp	SHORT $LN2@main
$LN1@main:
; Line 15
	xor	eax, eax
; Line 16
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN11@main
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	add	esp, 92					; 0000005cH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	3
$LN11@main:
	DD	1
	DD	$LN10@main
$LN10@main:
	DD	-84					; ffffffacH
	DD	80					; 00000050H
	DD	$LN9@main
$LN9@main:
	DB	97					; 00000061H
	DB	0
_main	ENDP
_TEXT	ENDS
END
