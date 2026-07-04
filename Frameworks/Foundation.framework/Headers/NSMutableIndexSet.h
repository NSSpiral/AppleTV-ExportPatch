/* Runtime dump - NSMutableIndexSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableIndexSet : NSIndexSet
{
    void * _reserved;
}

- (void)tsu_moveIndexesInRange:(struct _NSRange)arg0 toOffset:(unsigned int)arg1;
- (void)tsu_intersectionWithIndexSet:(NSSet *)arg0;
- (void)moveIndexesInRange:(struct _NSRange)arg0 toOffset:(unsigned int)arg1;
- (void)intersectionWithIndexSet:(NSSet *)arg0;
- (void)pl_adjustIndexesForDeletions:(id)arg0;
- (void)pl_adjustIndexesForInsertions:(id)arg0;
- (void)mf_intersectIndexes:(NSArray *)arg0;
- (void)_ensureRangeCapacity:(unsigned int)arg0;
- (void)_removeRangeInArrayAtIndex:(unsigned int)arg0;
- (void)removeIndexesWithOptions:(unsigned int)arg0 passingTest:(id /* block */)arg1;
- (void)_replaceRangeInArrayAtIndex:(unsigned int)arg0 withRange:(struct _NSRange)arg1;
- (void)_insertRange:(struct _NSRange)arg0 inArrayAtIndex:(unsigned int)arg1;
- (void)_addRangeToArray:(struct _NSRange)arg0;
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned int)arg0;
- (void)_incrementBy:(unsigned int)arg0 startingAtIndex:(unsigned int)arg1;
- (void)_removeAndDecrementBy:(unsigned int)arg0 startingAtIndex:(unsigned int)arg1;
- (void)addIndexesFromIndexSet:(NSSet *)arg0;
- (void)addIndexes:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)removeIndexesFromIndexSet:(NSSet *)arg0;
- (void)removeIndexesInRange:(struct _NSRange)arg0 options:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (void)removeIndexesPassingTest:(id /* block */)arg0;
- (Class)classForCoder;
- (void)addIndex:(unsigned int)arg0;
- (void)removeIndex:(unsigned int)arg0;
- (void)removeAllIndexes;
- (void)addIndexes:(NSArray *)arg0;
- (void)removeIndexes:(NSArray *)arg0;
- (void)addIndexesInRange:(struct _NSRange)arg0;
- (void)shiftIndexesStartingAtIndex:(unsigned int)arg0 by:(int)arg1;
- (void)removeIndexesInRange:(struct _NSRange)arg0;

@end
