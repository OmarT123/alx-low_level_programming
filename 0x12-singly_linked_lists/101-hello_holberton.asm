extern printf
section .data
db "Hello, Holberton", 0
db "%s",10,0
section .text
main: global main
push rbp
mov rdi,fmt
mov rsi,msg
mov rax,0
call printf
pop rbp
mov rax,0
ret
