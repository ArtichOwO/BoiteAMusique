import matplotlib.pyplot as plt

with open("test.wav", "rb") as file:
	file = file.read()
	x = [i for i in range(0, len(file))]
	y = [file[i] for i in range(0, len(file))]
	plt.plot(x, y)
	plt.show()
