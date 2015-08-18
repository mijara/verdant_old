Interfaces
==========

- Only abstract method can be declared.
- The implementing class needs to override all methods.
- An implementing class can implement n interfaces.

```
interface MyInterface;

void somePublicAbstractMethod();
- void somePrivateAbstractMethod();
```
## Example of implementing class
```
class MyClass;

implements MyInterface;

override void somePublicAbstractMethod()
{
    // do stuff.
}
```
