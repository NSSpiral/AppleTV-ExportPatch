/* Runtime dump - PLQLSingleEntityAccountingQuery
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLQLSingleEntityAccountingQuery : PLQLAccountingQuery
{
    NSString * _entityName;
}

@property (retain) NSString * entityName;

- (void).cxx_destruct;
- (NSString *)entityName;
- (NSObject *)runQueryForTimeRange:(struct _PLTimeIntervalRange)arg0 withSnapRail:(char)arg1;
- (void)setEntityName:(NSString *)arg0;

@end
