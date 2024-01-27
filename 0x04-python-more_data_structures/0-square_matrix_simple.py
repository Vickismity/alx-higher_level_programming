#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
	new_matrix = []
	for i in matrix:
		new_matrix.append([c**2 for c in i])
	return new_matrix
