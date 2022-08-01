.intel_syntax noprefix
.globl plus, main

plus:
  add rsi, rdi
  mov rax, rsi
  ret
main:
  mov rsi, 3
  mov rdi, 4
  call plus
  ret
