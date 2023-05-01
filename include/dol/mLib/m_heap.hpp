#pragma once
#include <lib/egg/heap/frm_heap.hpp>

namespace mHeap {
    void restoreCurrentHeap();
    void destroyFrmHeap(EGG::FrmHeap *);
    unsigned long adjustFrmHeap(EGG::FrmHeap *);

    /// @note Unofficial name.
    EGG::FrmHeap *makeFrmHeapAndUpdate(unsigned long size, EGG::Heap *parent, const char *name, u32 align, u32 opt);

    extern EGG::Heap *g_gameHeaps[3];
};
