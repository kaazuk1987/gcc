[bits 32]

call nast 
nast:
pop eax

push eax
add dword [esp],(dane-nast)
call [ebx+3*4]
add esp,4
call [ebx]






dane:
db "hello world", 0xa,0
