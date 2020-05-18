@startuml
class Main {
  speed : double
  masse : double
  schwarzschild : double
  param : int
  result : double 
  int main()
}

class Astro {
   epsilon : double
   double getSchwarzschild(masse,vitesse,param)
}

class Astro.h {
   vitesse : constante
   constante_G : constante
   double getSchwarzschild(masse,vitesse,param)
}

Main ..> Astro.h
Astro ..> Astro.h
Astro ..> Bibliothèque.math
Main ..> Bibliothèque.math
Main ..> Bibliothèque.stdlib
Main ..> Bibliothèque.stdio
Main ..> Bibliothèque.errno

@enduml
