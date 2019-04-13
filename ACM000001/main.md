\clearpage
\pagenumbering{arabic}

## Heap

In particular C++, when we need a heap, we will include queue and just use priority_queue. In most situations, naive priority_queue does fit in use: $O(\log{n})$ push and pop, and $O(1)$ top operation. But in the most tough situation (for example data maker is yswang), we may need faster heap to accomplish such mission.

Lots of different kinds of heap are provided in pb_ds, in order to use them, just include `ext/pb_ds/priority_queue.hpp` and use `__gnu_pbds::priority_queue`:

```cpp
template<
    typename Value_Type,
    typename Cmp_Fn = std::less<Value_Type>,
    typename Tag = pairing_heap_tag,
    typename Allocator = std::allocator<char> >
class priority_queue;
```

The biggest different is the `Tag` template argument, pb_ds use this argument to determine which kind of head to use actually. As for now, we can select `Tag` from `pairing_heap_tag`, `binary_heap_tag`, `binomial_heap_tag`, `rc_binomial_heap_tag`, or `thin_heap_tag`. Here is a simple table which compares these heaps.

|                      | Push                | Pop                 | Modify/Erase        | Join                |
| -------------------- | ------------------- | ------------------- | ------------------- | ------------------- |
| pairing_heap_tag     | $O(1)$              | $O(\log{n})$/$O(n)$ | $O(\log{n})$/$O(n)$ | $O(1)$              |
| binary_heap_tag      | $O(\log{n})$/$O(n)$ | $O(\log{n})$/$O(n)$ | $O(1)$              | $O(1)$              |
| binomial_heap_tag    | $O(1)$/$O(\log{n})$ | $O(\log{n})$        | $O(\log{n})$        | $O(\log{n})$        |
| rc_binomial_heap_tag | $O(1)$              | $O(\log{n})$        | $O(\log{n})$        | $O(\log{n})$        |
| thin_heap_tag        | $O(1)$              | $O(\log{n})$/$O(n)$ | $O(\log{n})$        | $O(\log{n})$/$O(n)$ |

Unlike STL's implementation, priority_queue in pb_ds supports more opeartions such as remove, modify and join. 
