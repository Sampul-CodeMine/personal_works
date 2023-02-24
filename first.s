.386
.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword

.data
	; declare variables here

.code
main proc
	; write your code here
	MOV EAX, 2
	ADD EAX, 2
	ADD EAX, 8

	invoke ExitProcess,0
main endp
end main
