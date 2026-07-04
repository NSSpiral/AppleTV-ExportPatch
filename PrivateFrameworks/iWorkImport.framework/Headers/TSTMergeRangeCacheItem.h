/* Runtime dump - TSTMergeRangeCacheItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeRangeCacheItem : NSObject
{
    struct TSUColumnRowRect _mergeRange;
    int _priority;
}

@property (nonatomic) struct TSUColumnRowRect mergeRange;
@property (nonatomic) int priority;

- (TSTMergeRangeCacheItem *)initWithMergeRange:(struct TSUColumnRowRect)arg0;
- (struct TSUColumnRowRect)mergeRange;
- (void)setMergeRange:(struct TSUColumnRowRect)arg0;
- (NSString *)description;
- (void)setPriority:(int)arg0;
- (void).cxx_construct;
- (int)priority;

@end
