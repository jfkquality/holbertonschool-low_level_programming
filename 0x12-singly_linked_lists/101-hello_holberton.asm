    section .data
	;; fmt     db "%u  %s",10,0
	;; msg1    db "Hello, Holberton",0
	;; fmt     db "%s",10,0
	msg1    db "Hello, Holberton",10
	;; msglen:	  equ $ - msg1
	;; msg2    db "Goodbye",0

	    section .text
	    extern printf
	    global main

main:
	    ;; mov  rdx, msglen
	    ;; mov  rsi, msg1
	    mov  rdi, msg1
	    mov  rax, 0     	; no f.p. args
	    call printf

	    ;; mov  edx, msg2
	    ;; mov  esi, 2
	    ;; mov  edi, fmt
	    ;; mov  eax, 0     	; no f.p. args
	    ;; call printf

	    mov  rbx, 0     	; return value
	    mov  rax, 1
	    ;; int  0x80
;; global main

;; 	        section .text

;; main:
;; 	          mov rax, 1	; write(
;; 	          mov rdi, 1	;   STDOUT_FILENO,
;; 	          mov rsi, msg	;   "Hello, world!\n",
;; 	          mov rdx, msglen ;   sizeof("Hello, world!\n")
;; 	          syscall	  ; );

;; 	          mov rax, 60	; exit(
;; 	          mov rdi, 0	;   EXIT_SUCCESS
;; 	          syscall	; );

;; 	        section .rodata
;; msg:	     db "Hello, Holberton", 10
;; msglen:	  equ $ - msg
	
