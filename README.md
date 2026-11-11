# structured-score-tracker
- This prorgam uses `structures` in *C++* to store and display the scores of students.
## Functions:
- ``get_score`` asks the user for a student's name and score, stores it in a structure, and returns the structure. It does not accept arguments.
- ``set_scores`` accepts an array of students andthe size as the arguments. It uses a loop controlled by the size argument to populate the array <u>by calling ``get_score`` to get a tructure and assign it to each element of the array</u>. It doesn't return anything and does not interact with the user.
- ``print`` accepts an array of Students and it's size as the arguments, uses a loop to display the contents of the Student array.
- ``main`` creates all necessary variables and calls each function in logical order, and **Does Not** interact with the user.

## Header files used:
- ``<iostream>``
- ``<string>``
- ``<iomanip>``