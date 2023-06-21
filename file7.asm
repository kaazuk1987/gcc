[bits 32]

mov ebx,esp
sub esp,8
lea eax, [ebp-4]
push eax
lea eax, [ebp-8]
push eax

call fmt_scanf
db "%i, %i", 0

fmt_scanf:
call [ebx +4*4]
add esp, 12

mov eax, [ebp-8]
add eax, [ebp-4]
jo prof

call no_of
db "nie bylo OF", 0xa, 0

no_of:
jmp print
 
prof:
call print
db "BYL OF!", 0xa, 0

print:
call [ebx+3*4]
add esp,4


push 0
call [ebx]
