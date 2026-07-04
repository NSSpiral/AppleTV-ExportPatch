/* Runtime dump - VMUNonOverlappingRangeArray
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUNonOverlappingRangeArray : VMURangeArray

- (void)addOrExtendRange:(struct _VMURange)arg0;
- (void)mergeRange:(struct _VMURange)arg0;
- (void)mergeRange:(struct _VMURange)arg0 excludingRanges:(NSArray *)arg1;
- (void)_mergeAllBitsOfRange:(struct _VMURange)arg0 excludingRanges:(NSArray *)arg1 mergeRanges:(char)arg2;
- (void)sortAndMergeRanges;
- (void)mergeRanges:(NSArray *)arg0;
- (void)mergeRanges:(NSArray *)arg0 excludingRanges:(NSArray *)arg1;
- (id)subtract:(NSArray *)arg0 mergeRanges:(char)arg1;
- (struct _VMURange)largestUnusedWithInUse:(char)arg0;

@end
