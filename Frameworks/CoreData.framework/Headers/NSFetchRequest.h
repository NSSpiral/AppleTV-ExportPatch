/* Runtime dump - NSFetchRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding>
{
    NSArray * _groupByProperties;
    NSPredicate * _havingPredicate;
    id * _additionalPrivateIvars;
    NSArray * _valuesToFetch;
    NSEntityDescription * _entity;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
    unsigned int _batchSize;
    unsigned long _fetchLimit;
    NSArray * _relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags _flags;
}

@property (retain, nonatomic) NSEntityDescription * entity;
@property (readonly, nonatomic) NSString * entityName;
@property (retain, nonatomic) NSPredicate * predicate;
@property (retain, nonatomic) NSArray * sortDescriptors;
@property (nonatomic) unsigned int fetchLimit;
@property (retain, nonatomic) NSArray * affectedStores;
@property (nonatomic) unsigned int resultType;
@property (nonatomic) char includesSubentities;
@property (nonatomic) char includesPropertyValues;
@property (nonatomic) char returnsObjectsAsFaults;
@property (copy, nonatomic) NSArray * relationshipKeyPathsForPrefetching;
@property (nonatomic) char includesPendingChanges;
@property (nonatomic) char returnsDistinctResults;
@property (copy, nonatomic) NSArray * propertiesToFetch;
@property (nonatomic) unsigned int fetchOffset;
@property (nonatomic) unsigned int fetchBatchSize;
@property (nonatomic) char shouldRefreshRefetchedObjects;
@property (copy, nonatomic) NSArray * propertiesToGroupBy;
@property (retain, nonatomic) NSPredicate * havingPredicate;

+ (char)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (NSFetchRequest *)fetchRequestWithEntityName:(NSString *)arg0;

- (char)includesPropertyValues;
- (char)includesSubentities;
- (unsigned int)fetchLimit;
- (NSArray *)propertiesToGroupBy;
- (char)returnsObjectsAsFaults;
- (NSArray *)propertiesToFetch;
- (unsigned int)fetchOffset;
- (void)_throwIfNotEditable;
- (char)_isEditable;
- (void)_writeIntoData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 uniquedMappings:(id)arg5 entities:(id)arg6;
- (NSPredicate *)havingPredicate;
- (NSArray *)relationshipKeyPathsForPrefetching;
- (char)returnsDistinctResults;
- (char)includesPendingChanges;
- (char)shouldRefreshRefetchedObjects;
- (char)_disablePersistentStoreResultCaching;
- (void)setReturnsDistinctResults:(char)arg0;
- (void)setShouldRefreshRefetchedObjects:(char)arg0;
- (void)_setDisablePersistentStoreResultCaching:(char)arg0;
- (NSArray *)affectedStores;
- (NSDictionary *)_newValidatedProperties:(NSDictionary *)arg0 groupBy:(char)arg1 error:(id *)arg2;
- (void)setAffectedStores:(NSArray *)arg0;
- (void)_setAsyncResultHandle:(id)arg0;
- (id)_asyncResultHandle;
- (NSArray *)groupByProperties;
- (void)setGroupByProperties:(NSArray *)arg0;
- (void)setHavingPredicate:(NSPredicate *)arg0;
- (void)_resolveEntityWithContext:(NSObject *)arg0;
- (void)_incrementInUseCounter;
- (NSSet *)stores;
- (void)dealloc;
- (NSFetchRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSFetchRequest *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSFetchRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void)setSortDescriptors:(NSArray *)arg0;
- (NSArray *)sortDescriptors;
- (void)setResultType:(unsigned int)arg0;
- (void)setPropertiesToFetch:(NSArray *)arg0;
- (void)setFetchLimit:(unsigned int)arg0;
- (NSString *)entityName;
- (NSFetchRequest *)initWithEntityName:(NSString *)arg0;
- (void)setReturnsObjectsAsFaults:(char)arg0;
- (char)hasChanges;
- (void)setEntity:(NSEntityDescription *)arg0;
- (void)setFetchBatchSize:(unsigned int)arg0;
- (void)setRelationshipKeyPathsForPrefetching:(NSArray *)arg0;
- (void)setIncludesPendingChanges:(char)arg0;
- (void)setIncludesPropertyValues:(char)arg0;
- (NSEntityDescription *)entity;
- (void)setPropertiesToGroupBy:(NSArray *)arg0;
- (void)setFetchOffset:(unsigned int)arg0;
- (void)setIncludesSubentities:(char)arg0;
- (unsigned int)fetchBatchSize;
- (unsigned int)requestType;
- (unsigned int)resultType;

@end
