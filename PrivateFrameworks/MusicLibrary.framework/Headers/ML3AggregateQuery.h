/* Runtime dump - ML3AggregateQuery
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AggregateQuery : ML3Query
{
    Class _aggregateEntityClass;
    NSString * _foreignPersistentIDProperty;
    char _isFastCountable;
}

@property (readonly, nonatomic) Class aggregateEntityClass;
@property (readonly, nonatomic) NSString * foreignPersistentIDProperty;
@property (nonatomic) char isFastCountable;

- (void)dealloc;
- (ML3AggregateQuery *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ML3AggregateQuery *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (unsigned int)countOfEntities;
- (Class)entityClass;
- (char)hasEntities;
- (NSDictionary *)selectPersistentIDsSQLAndProperties:(NSDictionary *)arg0 ordered:(char)arg1;
- (NSString *)persistentIDProperty;
- (char)sectionsPersistentIDColumnIsDistinct;
- (Class)aggregateEntityClass;
- (NSString *)foreignPersistentIDProperty;
- (ML3AggregateQuery *)initWithUnitQuery:(NSString *)arg0 aggregateEntityClass:(Class)arg1 foreignPersistentIDProperty:(NSString *)arg2;
- (char)isFastCountable;
- (void)setIsFastCountable:(char)arg0;

@end
