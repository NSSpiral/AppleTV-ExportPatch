/* Runtime dump - PLQLPostAccountingQuery
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLPostAccountingQuery : PLQLAccountingQuery
{
    NSDictionary * _skipProcess;
    NSString * _daemonToBreak;
    NSString * _parentAccountingQueryToRunOn;
    NSArray * _additionalAccountingGroups;
    NSMutableArray * _postpostAccountingQueries;
}

@property (readonly, retain) NSDictionary * skipProcess;
@property (readonly, retain) NSString * daemonToBreak;
@property (readonly, retain) NSString * parentAccountingQueryToRunOn;
@property (readonly, retain) NSArray * additionalAccountingGroups;
@property (retain) NSMutableArray * postpostAccountingQueries;

- (void).cxx_destruct;
- (NSObject *)getAllAccountingEventsInRange:(struct _PLTimeIntervalRange)arg0;
- (id)filteredAccountingEvents:(id)arg0;
- (NSArray *)additionalAccountingGroups;
- (NSDictionary *)skipProcess;
- (void)addPostPostAccountingChildren:(NSArray *)arg0;
- (void)setPostpostAccountingQueries:(NSMutableArray *)arg0;
- (void)setPostAccountingQueryAttributes:(NSDictionary *)arg0 withSkipProcessList:(NSDictionary *)arg1 withParentQuery:(NSObject *)arg2 withAdditionalAGs:(id)arg3;
- (void)setPostAccountingQueryAttributes:(NSDictionary *)arg0 withSkipProcessList:(NSDictionary *)arg1 withParentQueryID:(NSObject *)arg2 withAdditionalAGs:(id)arg3;
- (NSString *)parentAccountingQueryToRunOn;
- (NSString *)daemonToBreak;
- (NSObject *)runQueryForTimeRange:(struct _PLTimeIntervalRange)arg0 withEnergy:(double)arg1;
- (NSMutableArray *)postpostAccountingQueries;

@end
