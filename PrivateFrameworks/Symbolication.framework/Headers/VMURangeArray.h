/* Runtime dump - VMURangeArray
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMURangeArray : NSObject <NSCopying>
{
    unsigned int _count;
    struct _VMURange * _ranges;
    unsigned int _max;
    char _sorted;
}

- (void)setCapacity:(unsigned int)arg0;
- (void)dealloc;
- (unsigned int)count;
- (VMURangeArray *)init;
- (NSString *)description;
- (VMURangeArray *)copyWithZone:(struct _NSZone *)arg0;
- (struct _VMURange)range;
- (void)sort;
- (void)addRange:(struct _VMURange)arg0;
- (struct _VMURange)rangeAtIndex:(unsigned int)arg0;
- (void)removeAllRanges;
- (VMURangeArray *)initWithRanges:(struct _VMURange *)arg0 count:(struct _VMURange)arg1;
- (unsigned int)indexForLocation:(unsigned long long)arg0;
- (struct _VMURange)largestSubrangeNotExcludedBySelfForRange:(struct _VMURange)arg0 andLargerThan:(unsigned long long)arg1 startIndex:(unsigned int *)arg2;
- (void)addRanges:(NSArray *)arg0;
- (struct _VMURange)rangeForLocation:(unsigned long long)arg0;
- (void)insertRange:(struct _VMURange)arg0 atIndex:(unsigned int)arg1;
- (void)removeRangeAtIndex:(unsigned int)arg0;
- (char)intersectsLocation:(unsigned long long)arg0;
- (char)intersectsRange:(struct _VMURange)arg0;
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg0;
- (struct _VMURange)largestRange;
- (unsigned long long)sumLengths;
- (struct _VMURange *)ranges;

@end
