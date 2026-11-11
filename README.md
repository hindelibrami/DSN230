# Introduction
Je m'appelle Hind Elibrami. Je m'intéresse à la conception d'expériences interactives qui répondent à des besoins réels, ou qui peuvent améliorer une expérience existante. J'aime aussi l'aspect créatif et artistique du design, notamment le fait de pouvoir m'inspirer de mes intérêts personnels, de références visuelles ou de concepts que je trouve intéressants.

Ce journal de bord, réalisé dans le cadre du cours DSN230, regroupe l'ensemble de mes projets du module 1. Il contient mes concepts, mes apprentissages, les difficultés rencontrées et les ajustements apportés. Des photos et vidéos supplémentaires sont aussi incluses dans les dossiers respectifs de chaque projet.

**Note :** Certaines vidéos sont trop volumineuses pour être visualisées directement sur GitHub, il suffit de cliquer sur « View raw » pour les télécharger et les visionner.

# Projet 1 : MakeCode (compteur de tâches interactif)
## Concept 
Mon concept consistait à réaliser un outil de développement personnel permettant de célébrer les petits accomplissements au quotidien. L'utilisateur choisit 10 tâches qu'il souhaite accomplir dans sa journée. Chaque fois qu'il en complète une, il secoue le microprocesseur, ce qui allume une lumière verte accompagnée d'un petit son. Une fois les 10 tâches complétées, le Circuit Playground active une lumière multicolore avec un son de victoire, qui se répète plusieurs fois, pour célébrer l'acomplissement de toutes les tâches.

## Fonctionnement
Le projet utilise « On Shake » pour détecter lorsque le Circuit Playground est secoué. À chaque secousse, la variable « tasksCompleted », qui stocke le nombre de tâches complétées, augmente de 1, et une lumière verte et un petit son s'activent. Lorsque la valeur de la variable atteint 10, l'animation de célébration est activée (lumière multicolore et son de victoire répété). 

## Difficultés / ajustements
J'ai eu de la difficulté à trouver mon concept au début, étant donné que je ne savais pas encore comment utiliser les capteurs disponibles. Après un remue-méninges, j'ai choisi d'utiliser le capteur de secousse plutôt que celui de la lumière ou de la température, par exemple, car ils sont plus difficile à gérer.

## Ce que j'ai appris
Comme il s'agissait de mon premier contact avec Adafruit MakeCode, ce projet m'a permis de me familiariser avec l'interface et les différents capteurs. J'ai aussi apprécié la possibilité de visualiser l'équivalent des blocs en Javascript. Cela m'a permis de faire un lien visuel entre les deux formes de programmation.

# Projet 2 : MakeCode (passeport de souvenirs)
## Concept 
Mon concept se nomme « Passeport de souvenirs ». Il s'agit d'un album de voyage interactif permettant à l'utilisateur d'insérer progressivement des photos dans différents compartiments. 

Chaque photo insérée active une lumière et un son, puis une animation finale s'active lorsque toutes les catégories de photos sont complétées. Mon prototype s'inspire notamment du journal numérique dans la série Youtube « Zero Pound World Tour » de Niko Omilana, ainsi que de mon intérêt pour le voyage.

## Fonctionnement
Le passeport et les polaroids étaient faits en carton. Chaque polaroid possédait une fente laissant passer la lumière, ainsi qu'une couche d'aluminium à l'endos, servant de contact conducteur. Dans la couverture arrière du passeport, où le Circuit Playground était dissimulé, des pinces alligator reliaient les pads capacitifs A4, A5, A6 et A7, ainsi que le GND à des morceaux d'aluminium. Ces morceaux d'aluminium étaient placés de sorte à entrer en contact avec l'aluminium des polaroid lorsqu'ils étaient insérés. Chaque catégorie n'était comptée qu'une seule fois, et lorsqu'elles étaient toutes complétées, l'animation finale et le son de victoire étaient activés.

## Difficultés / ajustements
J'ai eu de la difficulté à concevoir une logique qui empêchait une même catégorie d'être comptée plusieurs fois. Alors, j'ai utilisé des variables booléennes et des blocs « if » séparés pour que chaque catégorie ait un comportement distinct. 

J'ai aussi eu de la difficulté à comprendre le fonctionnement de la fonction « digitalRead() », mais j'ai fini par en comprendre la logique. 

Pour activer les capteurs, il fallait un double contact pour chaque polaroid : chacun devait pouvoir entrer en contact avec son pad capacitif respectif ainsi que le GND en même temps. J'ai donc dû ajuster la forme du morceau d'aluminium du GND (forme en x) pour qu'il puisse entrer en contact avec chaque compartiment. 

Finalement, présenter le projet devant la classe avec un microphone représentait aussi un défi pour moi, mais cela m'a permis de pratiquer à vulgariser un projet dans un temps limité (90 secondes) à un grand groupe. 

## Ce que j'ai appris
Ce projet m'a permis d'apprendre à réfléchir à l'interaction entre un objet physique, l'électronique et le code. 

# Projet 3 : Arduino (« Echo Flower »)
## Concept 
Pour ce concept, mon objectif était de réaliser un prototype simplifié inspiré des « Echo Flowers » provenant du jeu vidéo Undertale. Au lieu que le Circuit Playground (qui représente la fleur) répète le dernier son capté, il traduit les sons selon leur intensité en différentes luminosités et teintes de bleu.

## Fonctionnement
Le microphone du Circuit Playground mesure le niveau sonore. Celui-ci est ensuite classé, selon ses valeurs approximatives en décibels, dans l'un des trois niveaux d'intensité définis : basse (jusqu'à 68 dB), moyenne (de 69 dB à 76 dB) ou élevée (77 dB et plus). Chaque niveau sonore active une teinte de bleu et une luminosité différente. 

Dans la vidéo de son ambiant de chute d'eau, les lumières adoptent une teinte de bleu progressivement plus foncée et plus lumineuse à fur et à mesure que l'intensité sonore augmente. J'ai aussi testé avec la trame sonore « Waterfall » de Undertale pour observer les fluctuations dans le comportement des lumières.

## Difficultés / ajustements
J'ai eu de la difficulté à trouver des intervalles de valeurs sonores assez différents pour chaque niveau sonore, de sorte que les changements de lumière soient assez stables. Le Serial Monitor m'a permis de visualiser et tester les différents seuils afin de définir clairement les trois niveaux sonores. 

Enfin, j'ai réglé la mesure du microphone à 200 ms pour qu'il ne réagisse pas trop rapidement ou trop lentement.

## Ce que j'ai appris
Ce projet m'a permis d'apprendre comment utiliser du code C++ avec le Circuit Playground, et à utiliser un microphone comme capteur.

# Projet 4 : E-textiles
## Concept 
Ce projet, débuté en classe, avait pour but de se familiariser avec l'intégration de composantes électroniques dans le textile. Il consistait à relier les pads capacitifs du Circuit Playground à des tissus, boutons ou d'autres objets avec un fil conducteur.

## Fonctionnement
Pour mon prototype, j'ai réalisé des « magic circles » au crochet avec du fil en acrylique, utilisés comme boutons pour les pads capacitifs A1 et A7.
De petits boutons métalliques conducteurs ont été cousus sur les cercles, puis reliés aux pads capacitifs avec le fil conducteur. Le code, fourni préalablement, faisait en sorte que lorsqu'un élément relié à un pad capacitif était touché, la lumière et le son respectifs étaient activés.

## Difficultés / ajustements
Au début du projet, j'avais de la difficulté à coudre, puisque c'était la première fois que j'en faisais. J'ai aussi rencontré un problème lors de la couture du bouton métallique relié au pad capacitif A7. Je l'avais cousu au « magic circle » du mauvais côté, ce qui rendait sa fermeture impossible. J'ai dû défaire la couture de cette section et recoudre le bouton dans le bon sens. 

## Ce que j'ai appris
Ce projet m'a permis d'apprendre les bases de la couture à la main. J'ai également pu combiner le crochet avec l'électronique textile. 

Finalement, j'ai testé la différence entre un matériau conducteur et un matériau isolant. J'ai constaté que lorsque le fil isolant était cousu par-dessus une section de fil conducteur, le contact n'activait pas les capteurs. 
