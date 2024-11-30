; assembly part

section .data
mult dq 255.0
rounding dq 0.5

section .text
bits 64
default rel 

global imgCvtGrayFloatToInt

; rcx - size // counter
; rdx - float_pixel_vals[]
; r8 - int_pixel_vals[]

imgCvtGrayFloatToInt:

L1:
	cmp rcx, 0   ; counter
	je done
		
	movsd xmm0, [rdx]
	vmulsd xmm0, xmm0, [mult]
	addsd xmm0, [rounding]

	cvttsd2si rax, xmm0
	mov [r8], al

	; move to the next val
	add rdx, 8
	inc r8

	dec rcx  ; counter
	jnz L1

done:
	ret