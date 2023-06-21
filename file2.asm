[bits 32]
;int x = getchar();
;eax

call [ebx + 2 * 4] ;getchar

;eax=getchar();

cmp eax, 'A'
jne dalej
call wypisz_h
db 'hello world', 0xa,0

wypisz_h:
call [ebx+3*4]
add esp,4
call [ebx]


dalej:
call wypisz_xyz
db 'xyz',0xa,0
wypisz_xyz:
call [ebx+3*4]
add esp,4
call [ebx]
