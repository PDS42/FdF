First graphic project @42. Keeping things simple, the goal was to get used to working with an unknown graphic library. (used: "Minilibx", built by Olivier Crouzet, head of 42's educational team).

This software create a isometric view of a map file. It is launched like this :

./fdf <file>

Example of a map file :
``
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0
0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
0  0 10 10 10 10 10 10  0  0  0  0 10 10 10 10  0  0  0
0  0  0 10 10 10 10 10  0  0  0 10 10  0  0  0  0  0  0
0  0  0  0  0  0 10 10  0  0  0 10 10  0  0  0  0  0  0
0  0  0  0  0  0 10 10  0  0  0 10 10 10 10 10 10  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
``


Where the values represent pixel height.
This would for instance gets displayed as : 

![](https://camo.githubusercontent.com/e3ec6e2aa5f79d8734cc2732ad53a82df0279b8c/687474703a2f2f692e696d6775722e636f6d2f425a48656e335a2e706e67)
