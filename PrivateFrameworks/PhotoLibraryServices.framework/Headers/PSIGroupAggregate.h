/* Runtime dump - PSIGroupAggregate
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupAggregate : NSObject
{
    NSArray * _searchTokens;
    NSMutableArray * _rangesMatchingTokens;
    NSMutableArray * _groups;
    NSMutableArray * _assetIdArrays;
    NSMutableArray * _aggregatedGroupIds;
}

- (void)dealloc;
- (void)pop;
- (PSIGroupAggregate *)initWithSearchTokens:(NSArray *)arg0;
- (void)postProcessGroupResults:(NSArray *)arg0;
- (NSObject *)newGroup;
- (char)pushGroup:(NSObject *)arg0;
- (struct _NSRange)_rangeOfString:(NSString *)arg0 inGroup:(NSObject *)arg1 excludingRanges:(NSArray *)arg2;
- (struct __CFArray *)_newSortedGroupIds;
- (char)_verifySortedGroupIdsUnique;
- (char)_prefer:(id)arg0 over:(SCRCMathExpression *)arg1;

@end
