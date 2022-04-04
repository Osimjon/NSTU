
include console.inc 	; вывод в терминал

.data 			; директива где объявляем переменные
x   dd -8		; переменная
s_4 dd 4
.code 			; директива кода
Start: 			; название блока

	mov eax, x 	; заносем  1 значение в eax
	mul s_4
	mul eax

  outint eax    	; выводим произведение
  outstr " "
  xor eax, eax

end Start 		; конец программы, Start - имя первой процедуры
