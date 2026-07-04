/* Runtime dump - NSSQLSelectIntermediate
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSelectIntermediate : NSSQLIntermediate
{
    NSSQLEntity * _entity;
    NSString * _entityAlias;
    NSString * _correlationTarget;
    NSArray * _fetchColumns;
    char _useDistinct;
    NSString * _columnAlias;
    char _isCount;
}

- (NSString *)generateSQLStringInContext:(NSObject *)arg0;
- (char)isTargetColumnsScoped;
- (void)setFetchColumns:(NSArray *)arg0;
- (void)setUseDistinct:(char)arg0;
- (void)setIsCount:(char)arg0;
- (char)onlyFetchesAggregates;
- (NSSQLSelectIntermediate *)initWithEntity:(NSSQLEntity *)arg0 alias:(CKDPUserAlias *)arg1 fetchColumns:(NSArray *)arg2 inScope:(NSObject *)arg3;
- (NSSQLSelectIntermediate *)initForCorrelationTarget:(NSObject *)arg0 alias:(CKDPUserAlias *)arg1 fetchColumns:(NSArray *)arg2 inScope:(NSObject *)arg3;
- (void)setColumnAlias:(NSString *)arg0;
- (void)setFetchEntity:(NSObject *)arg0;
- (void)dealloc;

@end
