

Anna Kądziera 165413 AiR 1 Sabina Marocka 165563 AiR 1

Projekt Winda umozliwia symulacje windy wraz z przemieszczaniem sie pasazerow na dowolne pietro. -Pasazer Umozliwia dodanie nowych pasazerow na danym pietrze. Jezeli pasazer znajduje sie na innym pietrze niz winda w danym momencie, to nie moze on wejsc do windy dopoki nie pojawi sie ona na danym pietrze.

    Do windy Umozliwia przejscie pasazera z kolejki do windy i poruszanie sie winda na dowolne pietro.

    Z windy Umozliwia wyjscie pasazera z windy na dowolnym pietrze, ale zgodnym z pietrem na ktorym znajduje sie winda.\

    Usun Usuwa pasazera z kolejki na danym pietrze.

    Parter Przemieszcza winde wraz z pasazerami na parter.

    I pietro Przemieszcza winde wraz z pasazerami na 1 poziom.

    2 pietro Przemieszcza winde wraz z pasazerami na 2 poziom.

    Textbox Masa pasazerow Pokazuje aktualna sume wagowa pasazerow znajdujacych sie w windzie.

Winda po wyjsiu ostatniego pasazera na danym pietrze, gdy staje sie pusta, po 5 sekundach zjezdza na parter. Gdy przeladujemy winde, ktora ma udzwig 600 kg, a kazdy pasazer wazy 70 kg (czyli maksymalnie wejdzie do niej 8 osob jednoczesnie), to pojawia nam sie okienko dialogowe z informacja, ze wiecej pasazerow nie moze wejsc do windy.

Projekt bazuje na 4 kolejkach. Po jednej na kazde pietro i jednej kolejki dla windy. Przy wsiadaniu pasazera do windy na danym pietrze, zostaje on usuniety z kolejki pietra i dodany do kolejki windy. Przy wysiadaniu pasazera z windy na danym pietrze, zostaje on usuniety z kolejki windy i dodany do kolejki danego pietra.

Winda i pasazerowie poruszaja sie zgodnie z timerem, a ich cel jest wyznaczany przez wartosc y okreslona dla kazdego pietra. Gdy usuniemy ostatniego pasazera na danym pietrze, to warunek ustala windzie przeczekiwanie 5 sekund i zjezdzanie na parter.

Kazdemu pasazerowi przypisana jest ta sama waga (70kg), więc nigdy nie osiagniemy max. 600 kg udzwigu windy. Udzwig sprawdzany jest przez sprawdzenie liczby wyrazow w kolejce windy i pomnozenie przez wage pasazera.

Aby zbudowac projekt nalezy wlaczyc plik WindowsFormsApp1.sln w Visual Studio 2017 i klinknac "Rozpocznij".
