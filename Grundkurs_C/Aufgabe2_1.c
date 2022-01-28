/*
-----------------------------------------------------------------------------------
Unterschied zwischen Basis-Zeichensatz und Ausführungszeichen:

Der Basis-Zeichensatz setzt sich aus Zeichen zusammen, die für eine Komposition von 
C-Programmen benötigt werden.

Als Beispiel:

Das Alphabet [aA-zZ]
Zahlen: [0-9]*
Grafiksymbole: !, " | < > etc.

Ausfürhungszeichensatz:
Beschreibt die einzelnen Steuerzeichen:
\a -> Alarm
\t -> Zeilenvorschub
\n -> cursor auf den Anfang der nächsten Zeile

-----------------------------------------------------------------------------------
Bedeutung case sensitive
Case-Sensitive bedeutet lediglich, dass eine Variable namens "zahl" nicht das Gleiche
ist wie "ZaHl". Case Insensitive bedeutet, dass beide die gleichen Variablen wären.
Es wird also zwischen Groß- und -Kleinschreibung unterschieden.
-----------------------------------------------------------------------------------
*/
