import sys
from datetime import date

for data in sys.stdin:
	data = data.split()

	mes = int(data[0])
	dia = int(data[1])

	atual = date(2016, mes, dia)
	natal = date(2016, 12, 25)

	diferenca = (natal-atual).days 

	if diferenca > 1:
		print("Faltam {} dias para o natal!".format(diferenca))
	elif diferenca == 1:
		print("E vespera de natal!")
	elif diferenca == 0:
		print("E natal!")
	elif diferenca < 0:
		print("Ja passou!")
