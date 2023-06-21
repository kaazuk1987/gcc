[bits 32]
push 'A'
call [ebx+4]
add esp,4
push 0
call [ebx]
