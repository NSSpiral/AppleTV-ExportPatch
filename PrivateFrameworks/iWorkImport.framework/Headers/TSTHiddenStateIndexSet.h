/* Runtime dump - TSTHiddenStateIndexSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStateIndexSet : NSObject
{
    NSMutableIndexSet * _visibleIndexSet;
}

@property (retain, nonatomic) NSMutableIndexSet * visibleIndexSet;

- (void)swapIndex:(unsigned int)arg0 withIndex:(unsigned int)arg1;
- (void)insertRange:(struct _NSRange)arg0;
- (void)setHidden:(char)arg0 inRange:(struct _NSRange)arg1;
- (void)setHidden:(char)arg0 atIndex:(unsigned int)arg1;
- (void)moveRangeFrom:(struct _NSRange)arg0 toIndex:(unsigned int)arg1;
- (unsigned int)numberHiddenIndicesInRange:(struct _NSRange)arg0;
- (char)anyHiddenIndicesInRange:(struct _NSRange)arg0;
- (char)isIndexHidden:(unsigned int)arg0;
- (id)visibleIndices;
- (unsigned int)visibleIndexBeforeIndex:(unsigned int)arg0;
- (unsigned int)visibleIndexBeforeAndIncludingIndex:(unsigned int)arg0;
- (unsigned int)visibleIndexAfterIndex:(unsigned int)arg0;
- (unsigned int)visibleIndexAfterAndIncludingIndex:(unsigned int)arg0;
- (NSMutableIndexSet *)visibleIndexSet;
- (unsigned int)numberVisibleIndicesInRange:(struct _NSRange)arg0;
- (unsigned int)findNthPreviousVisibleIndex:(unsigned int)arg0 fromIndex:(unsigned int)arg1;
- (unsigned int)findNthNextVisibleIndex:(unsigned int)arg0 fromIndex:(unsigned int)arg1;
- (void)setVisibleIndexSet:(NSMutableIndexSet *)arg0;
- (void)deleteRange:(struct _NSRange)arg0;
- (void)dealloc;
- (TSTHiddenStateIndexSet *)init;
- (void)setCount:(unsigned int)arg0;

@end
