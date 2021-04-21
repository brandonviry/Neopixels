unCycle= 62.5 #ns
#transmission 1
x1CycleHaut = 800 #ns
x1CycleBas = 450 #ns

#transmission 2
x2CycleHaut = 400 #ns
x2CycleBas = 850 #ns

#transmission 1
nbx1CycleHaut = x1CycleHaut /unCycle
nbx1CycleBas = x1CycleBas / unCycle
print(x1CycleHaut,nbx1CycleHaut)
print(x1CycleBas,nbx1CycleBas)
#transmission 2
nbx2CycleHaut = x2CycleHaut /unCycle
nbx2CycleBas = x2CycleBas / unCycle
print(x2CycleHaut,nbx2CycleHaut)
print(x2CycleBas,nbx2CycleBas)
