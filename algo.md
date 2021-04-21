### fonction retransmission de 1 ou 0

* entrer est un nombre binaire de 8bits  => 0000000
* sotis : 0 ou 1 ou reset

### Presser **BUTTON**

* pendant haut 800 + 150 = 950 ns
  * 1 nop => 62,5 ns
  * 950 / 62,5 == 15,2 tronc 15 nb
* pendant bas 450 + 150 = 600 ns
  * 600 / 62,5 = 9,6 ns tronc 9nb

> TRANSMISSION d'un 1

* pendant haut 400 + 150 = 550 ns
  * 550 /62,5 = 8,8 tronc 8 nb  
* pendant bas 850 + 150 = 1000 ns
  * 1000 / 62,5 = 16

> TRANSMISSION d'un 0

reset pendant

* etat bas time 50 us
  * 1 us => 1000 ns 
  * 50 us => 50 * 1000 = 50 000

> TRANSMISSION d'un -1

#

