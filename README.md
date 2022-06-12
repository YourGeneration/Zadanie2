# Zadanie2
Laboratorium - Wstęp do systemów operacyjnych

## Table of contents
* [Informacje Ogólne](#informacje-ogólne)
* [Commity](#commity)
* [Sprawdzanie Działania](#sprawdzanie-działania)

## Informacje Ogólne
* Należy napisać program Code2 pozwalający na obliczanie pola kwadratu oraz objętości
sześcianu.
[Code2](https://github.com/YourGeneration/Zadanie2/blob/main/Code2.c)
* Jako dane wejściowe do metod proszę przyjąć wszystkie niezbędne informacje – długości boków,
wysokości.
* Funkcje liczące pola i objętości powinny być dwoma niezależnymi plikami (proponuje z dwoma
plikami nagłówkowymi).
[pole.h](https://github.com/YourGeneration/Zadanie2/blob/main/pole.h), [pole.c](https://github.com/YourGeneration/Zadanie2/blob/main/pole.c)
[objetosc.h](https://github.com/YourGeneration/Zadanie2/blob/main/objetosc.h), [objetosc.c](https://github.com/YourGeneration/Zadanie2/blob/main/objetosc.c)

Należy opracować plik Makefile, który pozwoli na kompilację, instalację i usunięcie programu
Code2. Obliczanie powierzchni powinno być realizowane w bibliotece statycznej a obliczanie
objętości w bibliotece dynamicznej.
	
## Commity
* [pierwszy comit](https://github.com/YourGeneration/Zadanie2/commit/ce6ec285a4528194ad28ad9db9f25f2a7addcea9) → inicjalizacja repo
* [drugi comit](https://github.com/YourGeneration/Zadanie2/commit/c091aafd3c9596966a8d4a128d927ed4e663fd7e) → dodanie najprostszego pliku Makefile
* [trzeci comit](https://github.com/YourGeneration/Zadanie2/commit/4ad9614392a8fcb433bac819b3d588fa9ae5d4c5) → rozbudowa o zmienne automatyczne
* [czwarty commit](https://github.com/YourGeneration/Zadanie2/commit/b53906aaec520f3e606ae19419edfd7ad2069680) → rozbudowa o regułu przyrostków
* [piąty commit](https://github.com/YourGeneration/Zadanie2/commit/5f09a40b6d8395f43bdd8c7ae45e7845d2b00ca3) → rozbudowa o reguły wzorca
	
## Sprawdzanie Działania
Kompilacja:

```
$ make -f MakeFile
```
Uruchamianie:

```
$ ./Code2
```
## Autor
Beata Podgórska
