/* Runtime dump - NSIndexSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    struct ? _indexSetFlags;
    id _internal;
}

@property (readonly, nonatomic) char tsu_isSingleContiguousRange;
@property (readonly, nonatomic) char isSingleContiguousRange;
@property (readonly) unsigned int count;
@property (readonly) unsigned int firstIndex;
@property (readonly) unsigned int lastIndex;

+ (NSIndexSet *)tsu_indexSetWithIndices:(unsigned int *)arg0 count:(unsigned int)arg1;
+ (NSIndexSet *)indexSetWithIndices:(unsigned int *)arg0 count:(unsigned int)arg1;
+ (NSArray *)_gkIndexSetWithArray:(NSArray *)arg0;
+ (NSIndexSet *)indexSetWithIndexes:(unsigned int)arg0;
+ (NSIndexSet *)indexSetWithIndexes:(unsigned int *)arg0 count:(unsigned int)arg1;
+ (char)supportsSecureCoding;
+ (NSIndexSet *)indexSet;
+ (NSIndexSet *)indexSetWithIndex:(unsigned int)arg0;
+ (NSIndexSet *)indexSetWithIndexesInRange:(struct _NSRange)arg0;

- (void)tsp_saveToMessage:(struct IndexSet *)arg0;
- (NSString *)tsp_initWithMessage:(struct IndexSet *)arg0;
- (id)tsu_initWithIndices:(unsigned int *)arg0 count:(unsigned int)arg1;
- (NSObject *)tsu_indexSetByAddingIndex:(unsigned int)arg0;
- (NSIndexSet *)tsu_indexSetByAddingIndexes:(NSArray *)arg0;
- (char)tsu_isSingleContiguousRange;
- (char)tsu_intersectsIndexesInIndexSet:(NSSet *)arg0;
- (NSIndexSet *)tsu_indexSetByInsertingIndexes:(NSArray *)arg0 inRange:(struct _NSRange)arg1;
- (NSObject *)tsu_indexSetByIntersectingWithRange:(struct _NSRange)arg0;
- (NSIndexSet *)tsu_indexSetByIntersectingWithIndexes:(NSArray *)arg0;
- (unsigned int)tsu_indexAtPosition:(unsigned int)arg0;
- (unsigned int)tsu_positionOfIndex:(unsigned int)arg0;
- (struct _NSRange)tsu_leadingRangeInRange:(struct _NSRange)arg0;
- (struct _NSRange)tsu_trailingRangeInRange:(struct _NSRange)arg0;
- (NSIndexSet *)initWithIndices:(unsigned int *)arg0 count:(unsigned int)arg1;
- (NSIndexSet *)indexSetByAddingIndexes:(NSArray *)arg0;
- (char)isSingleContiguousRange;
- (char)intersectsIndexesInIndexSet:(NSSet *)arg0;
- (NSIndexSet *)indexSetByInsertingIndexes:(NSArray *)arg0 inRange:(struct _NSRange)arg1;
- (NSObject *)_gkIndexSetByRemovingIndex:(int)arg0;
- (NSObject *)_gkIndexSetByAddingIndex:(int)arg0;
- (int)locationOfIndex:(int)arg0;
- (int)indexAtIndex:(int)arg0;
- (NSSet *)indexSetWithOffset:(int)arg0;
- (NSIndexSet *)indexSetWithMaximum:(int)arg0;
- (int)indexAtIndex:(int)arg0;
- (NSSet *)indexSetWithOffset:(int)arg0;
- (NSIndexSet *)indexSetWithMaximum:(int)arg0;
- (int)indexAtIndex:(int)arg0;
- (NSString *)pl_shortDescription;
- (NSIndexSet *)_pl_indexSetByUpdatingWithChangedIndexes:(NSIndexSet *)arg0 asInserts:(char)arg1;
- (id)pl_indexSetAdjustedForDeletions:(id)arg0;
- (id)pl_indexSetAdjustedForInsertions:(id)arg0;
- (struct _NSRange)pl_rangeCoveringIndexSet;
- (NSString *)mf_commaSeparatedString;
- (NSDictionary *)copyXPCEncoding;
- (NSIndexSet *)initWithXPCEncoding:(NSString *)arg0;
- (unsigned int)__getContainmentVector:(char *)arg0 inRange:(char)arg1;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (unsigned int)_indexAtIndex:(unsigned int)arg0;
- (NSIndexSet *)initWithIndexes:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)_setContentToContentFromIndexSet:(NSSet *)arg0;
- (unsigned int)_indexOfRangeAfterOrContainingIndex:(unsigned int)arg0;
- (unsigned int)_indexOfRangeBeforeOrContainingIndex:(unsigned int)arg0;
- (unsigned int)_indexClosestToIndex:(unsigned int)arg0 equalAllowed:(char)arg1 following:(char)arg2;
- (unsigned int)_indexOfRangeContainingIndex:(unsigned int)arg0;
- (void)enumerateIndexesWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (unsigned int)indexWithOptions:(unsigned int)arg0 passingTest:(id /* block */)arg1;
- (NSDictionary *)indexesWithOptions:(unsigned int)arg0 passingTest:(id /* block */)arg1;
- (void)enumerateRangesWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (char)containsIndexes:(NSArray *)arg0;
- (char)intersectsIndexesInRange:(struct _NSRange)arg0;
- (NSEnumerator *)_numberEnumerator;
- (void)enumerateIndexesInRange:(struct _NSRange)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (unsigned int)indexInRange:(struct _NSRange)arg0 options:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)indexesPassingTest:(id /* block */)arg0;
- (NSObject *)indexesInRange:(struct _NSRange)arg0 options:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (unsigned int)indexLessThanOrEqualToIndex:(unsigned int)arg0;
- (unsigned int)indexGreaterThanOrEqualToIndex:(unsigned int)arg0;
- (void)dealloc;
- (NSIndexSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSIndexSet *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSIndexSet *)_init;
- (NSIndexSet *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (unsigned int)firstIndex;
- (unsigned int)indexGreaterThanIndex:(unsigned int)arg0;
- (char)containsIndex:(unsigned int)arg0;
- (unsigned int)lastIndex;
- (NSIndexSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)indexLessThanIndex:(unsigned int)arg0;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg0;
- (unsigned int)countOfIndexesInRange:(struct _NSRange)arg0;
- (NSIndexSet *)initWithIndex:(unsigned int)arg0;
- (char)containsIndexesInRange:(struct _NSRange)arg0;
- (void)enumerateRangesInRange:(struct _NSRange)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (char)isEqualToIndexSet:(NSSet *)arg0;
- (NSIndexSet *)initWithIndexSet:(NSSet *)arg0;
- (NSIndexSet *)initWithIndexesInRange:(struct _NSRange)arg0;
- (void)enumerateRangesUsingBlock:(id /* block */)arg0;
- (unsigned int)rangeCount;
- (unsigned int)getIndexes:(unsigned int *)arg0 maxCount:(unsigned int)arg1 inIndexRange:(struct _NSRange *)arg2;
- (unsigned int)indexPassingTest:(id /* block */)arg0;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;

@end
