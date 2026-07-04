/* Runtime dump - TNChartRangeList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartRangeList : NSObject
{
    struct __CFUUID * mTableID;
    struct TNChartRangeNode * mNodeList;
    struct TSCERangeCoordinate mUnionRange;
    char mUnionRangeValid;
}

@property (readonly, nonatomic) struct __CFUUID * tableID;

+ (NSObject *)rangeListWithTableID:(struct __CFUUID *)arg0;
+ (NSObject *)rangeListWithTableID:(struct __CFUUID *)arg0 range:(struct TSCERangeCoordinate)arg1;
+ (TNChartRangeList *)rangeListWithRangeRef:(struct ?)arg0;

- (TNChartRangeList *)initWithTableID:(struct __CFUUID *)arg0;
- (struct __CFUUID *)tableID;
- (char)containsCell:(struct ?)arg0;
- (void)addRange:(struct TSCERangeCoordinate)arg0 coalesceFlags:(struct ?)arg1;
- (struct TSCERangeCoordinate)unionRange;
- (struct TSCERangeCoordinate)rangeStartingAtCell:(NSObject *)arg0 direction:(SEL)arg1;
- (struct TSCERangeCoordinate)rangeStartingAfterCell:(NSObject *)arg0 direction:(SEL)arg1;
- (TNChartRangeList *)initWithTableID:(struct __CFUUID *)arg0 range:(struct TSCERangeCoordinate)arg1;
- (struct ?)unionRangeRef;
- (void)dealloc;
- (NSString *)description;
- (char)containsRange:(struct TSCERangeCoordinate)arg0;
- (unsigned int)numberOfRanges;
- (void)enumerateRangesUsingBlock:(id /* block */)arg0;
- (struct TSCERangeCoordinate)rangeAtIndex:(NSObject *)arg0;
- (void)removeAllRanges;

@end
