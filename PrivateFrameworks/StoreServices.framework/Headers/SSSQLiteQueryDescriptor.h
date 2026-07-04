/* Runtime dump - SSSQLiteQueryDescriptor
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying>
{
    Class _entityClass;
    int _limitCount;
    Class _memoryEntityClass;
    NSString * _orderingClause;
    NSArray * _orderingDirections;
    NSArray * _orderingProperties;
    SSSQLitePredicate * _predicate;
    char _returnsDistinctEntities;
}

@property (nonatomic) Class entityClass;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic) int limitCount;
@property (copy, nonatomic) NSString * orderingClause;
@property (copy, nonatomic) NSArray * orderingDirections;
@property (copy, nonatomic) NSArray * orderingProperties;
@property (nonatomic) char returnsDistinctEntities;
@property (copy, nonatomic) SSSQLitePredicate * predicate;

- (void)setOrderingProperties:(NSArray *)arg0;
- (NSArray *)orderingProperties;
- (void)dealloc;
- (SSSQLiteQueryDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPredicate:(SSSQLitePredicate *)arg0;
- (SSSQLitePredicate *)predicate;
- (Class)entityClass;
- (Class)memoryEntityClass;
- (int)limitCount;
- (NSDictionary *)_newSelectSQLWithProperties:(id *)arg0 count:(NSObject *)arg1 columns:(unsigned int)arg2;
- (void)setOrderingDirections:(NSArray *)arg0;
- (void)setEntityClass:(Class)arg0;
- (void)setLimitCount:(int)arg0;
- (void)setMemoryEntityClass:(Class)arg0;
- (NSString *)orderingClause;
- (void)setOrderingClause:(NSString *)arg0;
- (NSArray *)orderingDirections;
- (char)returnsDistinctEntities;
- (void)setReturnsDistinctEntities:(char)arg0;

@end
