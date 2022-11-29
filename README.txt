
Travail réalisé par Emile Veillette & Kenzo Carneiro.

/!\ Comme dit au professeur, le build (debug comme release) ne fonctionne pas. Cela semble être un problème général de configuration.

---------- TRAVAIL RÉALISÉ ----------
Dans ce devoir, nous avons réalisé toute la partie obligatoire (question 1 à 4) :
- Création d'une classe agent poursuiveur à partir de l'algorithme de poursuite en offset présent dans le projet pour créer une file indienne d'agents poursuiveurs.
- Création d'une classe agent leader qui se déplace d'une manière aléatoire avec l'algorithme d'itinérance (wandering) présent dans le projet.
- Création d'un groupe de 20 agents-poursuiveurs qui suivent l'agent leader. On a donc une file indienne d'agents poursuiveurs derrière l'agent leader.
- Possibilité pour le joueur-humain de prendre le contrôle de l'agent leader.
- Modification de la formation des agents poursuiveurs lorsque le joueur-humain prend le contrôle de l'agent leader : les agents poursuiveurs se mettent autour du joueur pour le protéger.


Nous avons également programmé les bonus suivants :
- Une partie de la question 5 : à partir du menu "Controls" que l'on a ajouté, vous pouvez :
---> Choisir la formation en V ou en file indienne
---> Choisir de contrôler ou non l'agent leader
- La partie 6 a donc été réalisée intégralement : la formation en V est présente.

Bonus personnalisés (pas dans le sujet) :
- Plutôt que d'avoir 20 agents poursuiveurs qui alternent entre protéger le joueur ou non, nous avons choisi d'avoir 2 groupes d'agents poursuiveurs :
---> Ceux qui protègent le joueur
---> Ceux qui suivent le joueur.
- Lorsque l'on désactive le contrôle de l'agent leader, les agents protecteurs se dispersent, et lorsqu'on le réactive, ils reviennent protéger le leader.


---------- Comment voir le jeu ? ----------
-> Vous pouvez lancer le jeu depuis l'éditeur de Visual Studio (attention, il faut la version Visual Studio 2019 au moins)
-> Le build ne fonctionne pas, comme dit plus haut dans ce fichier.
-> Une vidéo de présentation pour montrer le jeu est disponible en .mkv et .mp4 (les 2 sont identiques).
