/* Runtime dump - NSSQLStatement
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLStatement : NSObject
{
    NSSQLEntity * _entity;
    NSMutableArray * _bindVariables;
    NSMutableArray * _bindIntarrays;
    NSString * _sqlString;
    char _isImpossibleCondition;
    NSSQLEntity * _fakeEntityForFetch;
    NSCachedFetchRequestInfo * _cachedStatementInfo;
}

@property (retain, nonatomic) NSCachedFetchRequestInfo * cachedStatementInfo;

- (unsigned int)addBindVariable:(NSSQLBindVariable *)arg0;
- (void)setImpossibleCondition:(char)arg0;
- (NSString *)sqlString;
- (NSSQLStatement *)initWithEntity:(NSSQLEntity *)arg0;
- (NSSQLStatement *)initWithEntity:(NSSQLEntity *)arg0 sqlString:(NSString *)arg1;
- (void)setSQLString:(NSString *)arg0;
- (NSCachedFetchRequestInfo *)cachedStatementInfo;
- (NSMutableArray *)bindVariables;
- (NSMutableArray *)bindIntarrays;
- (char)isImpossibleCondition;
- (NSSQLEntity *)fakeEntityForFetch;
- (void)removeAllBindVariables;
- (void)setBindIntarrays:(NSMutableArray *)arg0;
- (void)setBindVariables:(NSMutableArray *)arg0;
- (void)cacheFakeEntityForFetch:(id)arg0;
- (void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg0;
- (unsigned int)addBindIntarray:(NSSQLBindIntarray *)arg0;
- (void)removeAllBindIntarrays;
- (void)dealloc;
- (NSString *)description;
- (char)isReadOnly;
- (NSSQLEntity *)entity;
- (void)clearCaches;

@end
