---
title: "C++ Programmierkurs"
subtitle: "Vorlesungsfolien"
author: "Prof. Dr. David Luitz (Universität Bonn)"
---



# 01 Einführung
[Skript (html)](html/01_einleitung.html), [Folien](revealjs/01_einleitung.html)

[Übung](html/exercises/01_basics.html)


# 02 Grundlagen

[Skript (html)](html/02_grundlagen.html), [Folien](revealjs/02_grundlagen.html)

[Übung](html/exercises/02_datatypes.html)


# 03 Kontrollstrukturen





## Container Image

Um einen einfachen Zugang zu aktuellen Compilern zu gewährleisten, bieten wir einen Docker Container mit aktuellem CMake und Clang 19 an. Um Ihn zu nutzen, führen Sie bitte folgende Schritte aus:

+ Installieren Sie [apptainer](https://apptainer.org/docs/admin/main/installation.html) oder Docker (die Anleitung erklärt im folgenden nur Apptainer)
    - auf dem CIP Pool ist apptainer bereits installiert, zur einfacheren Benutzung setzen Sie dazu bitte `export PATH=/cvmfs/atlas.cern.ch/repo/containers/sw/apptainer/x86_64-el7/1.3.4/bin/:$PATH`. Diesen Befehl am besten in die `.bashrc` schreiben.
    - geben Sie jetzt `apptainer` auf der Kommandozeile ein. Es sollte ein kurzer Hilfetext erscheinen, der die verfügbaren Befehle auflistet
+ Als nächstes legen Sie auf <https://gitlab.uni-bonn.de/grp_teaching-public/physics441-sose25-c-vorkurs> ein Access-Token an. Klicken Sie dazu im Menü links auf `Settings/Access Tokens` und dort auf `Add new token`. Sie können einen Namen und ein Ablaufdatum festlegen, wichtig ist, dass Sie bei "Select scopes" die Haken auf `read registry` und `read repository` setzen und danach auf `Create project access token` klicken. Speichern Sie das Token (sichtbar durch Klick auf das Auge-Symbol). Wir werden den Token-Code im Folgenden als $TOKEN und Ihre Uni-ID als $USER bezeichnen. Bitte ersetzen Sie in den folgenden Befehlen diese Variablen durch die entsprechenden Angaben.
+ Wechseln Sie jetzt in ein Verzeichnis, in das Sie das Gitlab Repository für den Kurs clonen möchten:
```bash
mkdir -p $HOME/c++_vorkurs/
cd $HOME/c++_vorkurs/
```
+ Jetzt können Sie den Container mit folgenden Schritten herunterladen:
```bash 
apptainer registry login -u $USER -p $TOKEN docker://registry.gitlab.uni-bonn.de:5050
apptainer pull docker://registry.gitlab.uni-bonn.de:5050/grp_teaching-public/physics441-sose25-c-vorkurs
apptainer run docker://registry.gitlab.uni-bonn.de:5050/grp_teaching-public/physics441-sose25-c-vorkurs
```
Das erstellen des Containers dauert ein wenig, aber im Anschluss haben Sie eine Arbeitsumgebung mit aktuellem `clang++`. Es sollte eine `.sif` erstellt werden, die Sie für zukünftige Aufrufe von Apptainer nutzen können: `apptainer run physics441-sose25-c-vorkurs_latest.sif`.
+ Im Container können Sie zum Beispiel `git clone` ausführen und dann die Beispielcodes kompilieren. Bitte beachten Sie, dass noch nicht alle Makefiles auf `clang++` umgestellt sind. Sie können den Compileraufruf von `g++` durch `clang++ --std=c++23 --stdlib=libc++ -o hello hello.cc` ersetzen.




## Tutoren

+ Justin Schmitz [<s6jtscmi@uni-bonn.de>](mailto:s6jtscmi@uni-bonn.de)  
+ Gabriel Remiszewski [<s6garemi@uni-bonn.de>](mailto:s6garemi@uni-bonn.de)
+ Florian Taubert [<taubert@hiskp.uni-bonn.de>](mailto:taubert@hiskp.uni-bonn.de)


## Literatur

(Volltexte über Login mit Uni-ID verfügbar. Bitte "Universitäts und Landesbibliothek Bonn" als Institution auf der O'Reilly Bibliotheksseite wählen)


[*A tour of C++*, Bjarne Stroustrup, 3. Auflage 2022.](https://bonnus.ulb.uni-bonn.de/view/action/uresolver.do?operation=resolveService&package_service_id=17182510530006467&institutionId=6467&customerId=6440&VE=true)
[*Eine Tour durch C++*, Bjarne Stroustrup, deutsche Übersetzung der 3. Auflage, 2023](https://learning.oreilly.com/library/view/eine-tour-durch/9783747506271/?ar=)

[*Professional C++*, Marc Gregoire, 6. Auflage 2024.](https://bonnus.ulb.uni-bonn.de/view/action/uresolver.do?operation=resolveService&package_service_id=17172162860006467&institutionId=6467&customerId=6440&VE=true) 

[*The C++ programming language*, Bjarne Stroustrup, 4. Auflage, 2013.](https://bonnus.ulb.uni-bonn.de/discovery/fulldisplay?docid=alma991045188079506467&context=L&vid=49HBZ_ULB:DEFAULT&lang=de&search_scope=MyInst_and_CI&adaptor=Local%20Search%20Engine&isFrbr=true&tab=Everything&query=any,contains,The%20C%2B%2B%20programming%20language&sortby=date_d&facet=frbrgroupid,include,9026594507971066806&offset=0)
