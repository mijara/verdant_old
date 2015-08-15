Array
=====

- The default array works like a vector.
- If the array is constructed with an initial size, then we take it to be a common array, i.e. the size will
not change.
- If the user needs to close the array, the method `lock` can be called.
    * This implies methods to check if the array is locked or not.
