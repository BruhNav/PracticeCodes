import simplexByTwoPhase as two_phs


c = [1.0, 1.0, 1.0, 1.0, 1.0, ]

eqation_one = [3.0, 2.0, 1.0, 0.0, 0.0]
equation_two = [5.0, 1.0, 1.0, 1.0, 0.0]
equation_three = [2.0, 5.0, 1.0, 0.0, 1.0]

b = [1.0, 3.0, 4.0]

eqs = [eqation_one, equation_two, equation_three]

tab = two_phs.getTable(c, eqs, b)
two_phs.printTable(tab)
tab = two_phs.two_phase_simplex(tab)
two_phs.printTable(tab)
print('minimum cost is = {}'.format(-tab[0][0]))

