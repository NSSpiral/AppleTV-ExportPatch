/* Runtime dump - NSRunStorage
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRunStorage : NSObject <NSCopying>
{
    unsigned int _count;
    unsigned int _elementSize;
    unsigned int _numBlocks;
    unsigned int _maxBlocks;
    unsigned int _indexDeltaStartBlock;
    int _indexDelta;
    struct _NSRunBlock * _runs;
    unsigned int _cachedBlock;
    struct _NSRange _cachedBlockRange;
    unsigned int _gapBlockIndex;
}

+ (void)initialize;
+ (void)_setConsistencyCheckingEnabled:(char)arg0 superCheckEnabled:(char)arg1;

- (void)dealloc;
- (unsigned int)count;
- (NSRunStorage *)init;
- (NSString *)description;
- (NSRunStorage *)copyWithZone:(struct _NSZone *)arg0;
- (void)insertElement:(void *)arg0 range:(struct _NSRange)arg1 coalesceRuns:(char)arg2;
- (void)removeElementsInRange:(struct _NSRange)arg0 coalesceRuns:(char)arg1;
- (NSRunStorage *)initWithElementSize:(unsigned int)arg0 capacity:(unsigned int)arg1;
- (void)replaceElementsInRange:(struct _NSRange)arg0 withElement:(void *)arg1 coalesceRuns:(char)arg2;
- (void)_allocData:(unsigned long)arg0;
- (void)_deallocData;
- (NSRunStorage *)initWithRunStorage:(NSRunStorage *)arg0;
- (void)_reallocData:(unsigned long)arg0;
- (unsigned int)elementSize;
- (void *)elementAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (void)_moveGapToBlockIndex:(unsigned int)arg0;
- (void)_consistencyError:(int)arg0 startAtZeroError:(char)arg1 cacheError:(char)arg2 inconsistentBlockError:(char)arg3;
- (void)_ensureCapacity:(unsigned int)arg0;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange)arg0;
- (void)_consistencyCheck:(int)arg0;

@end
