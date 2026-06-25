# Valiutos keityklos užduotis

## Užduoties tikslas

Sukurti C++ programą, kuri leistų atlikti valiutų kursų palyginimą bei valiutos pirkimo ir pardavimo operacijas.

## Funkcionalumas

Programa turi suteikti galimybę:

1. Palyginti pasirinktos valiutos kursą su euru.
2. Pirkti pasirinktą valiutą už eurus.
3. Parduoti pasirinktą valiutą ir gauti eurus.

## Palaikomos valiutos

* GBP – Didžiosios Britanijos svaras
* USD – Jungtinių Amerikos Valstijų doleris
* INR – Indijos rupija

Pagrindinė valiuta yra EUR (euras).

## Programos veikimas

Vartotojas:

1. Pasirenka veiksmą (palyginti, pirkti arba parduoti).
2. Pasirenka valiutą.
3. Įveda norimą valiutos arba eurų kiekį.
4. Programa apskaičiuoja ir parodo rezultatą.

## Naudojami kursai

| Valiuta | Bendras  | Pirkti   | Parduoti |
| ------- | -------- | -------- | -------- |
| GBP     | 0.8729   | 0.8600   | 0.9220   |
| USD     | 1.1793   | 1.1460   | 1.2340   |
| INR     | 104.6918 | 101.3862 | 107.8546 |

## Pastabos

* Konvertavimas vykdomas tarp EUR ir pasirinktos valiutos.
* Rezultatai apvalinami iki dviejų skaitmenų po kablelio.
* Užduotis atlikta naudojant C++ programavimo kalbą.
