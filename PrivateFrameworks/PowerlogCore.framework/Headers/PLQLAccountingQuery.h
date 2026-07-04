/* Runtime dump - PLQLAccountingQuery
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLAccountingQuery : NSObject
{
    short _queryType;
    <PLQLAccountingGroupProtocol> * _QLAccountingGroup;
    NSArray * _allRails;
    NSArray * _allRailsToBeAdded;
    NSArray * _allRailsToBeSubtracted;
    NSString * _aggKey;
    NSString * _queryName;
    double _queryHasRunTillTime;
}

@property (readonly, retain) <PLQLAccountingGroupProtocol> * QLAccountingGroup;
@property (readonly) NSArray * allRails;
@property (readonly) NSArray * allRailsToBeAdded;
@property (readonly) NSArray * allRailsToBeSubtracted;
@property double queryHasRunTillTime;
@property (readonly, retain) NSString * aggKey;
@property (readonly) short queryType;
@property (readonly, retain) NSString * queryName;

- (void).cxx_destruct;
- (short)queryType;
- (NSArray *)allRails;
- (PLQLAccountingQuery *)initWithName:(NSString *)arg0 withRailsToBeAdded:(id)arg1 withRailsToBeSubtracted:(id)arg2 withQLAccountingGroup:(NSObject *)arg3 withQueryType:(short)arg4 withAggregationKey:(NSString *)arg5;
- (void)cacheRailsInRange:(struct _PLTimeIntervalRange)arg0 withSnap:(char)arg1 cache:(char)arg2;
- (void)TestAccountBucketCreation;
- (PLQLAccountingQuery *)initWithName:(NSString *)arg0 withRails:(PLCoreRail *)arg1 withQLAccountingGroup:(NSObject *)arg2 withQueryType:(short)arg3 withAggregationKey:(NSString *)arg4;
- (<PLQLAccountingGroupProtocol> *)QLAccountingGroup;
- (id)runQueryIterationWithSnap:(char)arg0;
- (NSArray *)allRailsToBeAdded;
- (NSArray *)allRailsToBeSubtracted;
- (NSObject *)runQueryForTimeRange:(struct _PLTimeIntervalRange)arg0 withSnapRail:(char)arg1;
- (void)setQueryHasRunTillTime:(double)arg0;
- (double)queryHasRunTillTime;
- (NSString *)queryName;
- (NSString *)aggKey;

@end
