/* Runtime dump - TSTMergeRangeSortedSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRangeSortedSet : NSObject
{
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > * mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, int> mIter;
    NSObject<OS_dispatch_semaphore> * mSem;
}

- (struct UIEdgeInsets)getPaddingInsets;
- (struct TSUColumnRowRect)iter;
- (void)addRange:(struct TSUColumnRowRect)arg0 andSize:(struct ?)arg1 andPaddingInsets:(id)arg2 andIsCheckbox:(struct CGSize)arg3;
- (char)isCheckbox;
- (void)dealloc;
- (unsigned int)count;
- (TSTMergeRangeSortedSet *)init;
- (void)reset;
- (struct TSUColumnRowRect)begin;
- (void).cxx_construct;
- (struct CGSize)getSize;

@end
