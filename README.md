# virtualClassName

A small POC that I wrote when I was hacking around with
[Starbreak](https://www.starbreak.com/). It's very fugly, but it works in both C
and C++ and it doesn't require any libraries, so that's pretty grand.

Now, I don't know C++ so I won't be able to quite explain it, but basically:
if a certain binary uses the GCC memory layout, this function gets the name of
an object's class through its `type_info`. This requires a vtable and therefore
the object should have some virtual methods.

I don't know if this works on stripped binaries and I don't care (C++ is ugly
and I don't want to dive into it).
