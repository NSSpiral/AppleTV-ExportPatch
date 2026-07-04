/* Runtime dump - NSBatchUpdateRequest
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest>
{
    id _entity;
    NSPredicate * _predicate;
    struct _requestFlags _flags;
    NSDictionary * _columnsToUpdate;
    NSString * _entityName;
}

@property (readonly, copy) NSString * entityName;
@property (readonly) NSEntityDescription * entity;
@property (retain) NSPredicate * predicate;
@property char includesSubentities;
@property unsigned int resultType;
@property (copy) NSDictionary * propertiesToUpdate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSBatchUpdateRequest *)batchUpdateRequestWithEntityName:(NSString *)arg0;

- (char)includesSubentities;
- (NSBatchUpdateRequest *)initWithEntity:(NSEntityDescription *)arg0;
- (void)_resolveEntityWithContext:(NSObject *)arg0;
- (NSDate *)_newValidatedPropertiesToUpdate:(NSDate *)arg0 error:(id *)arg1;
- (void)_setValidatedPropertiesToUpdate:(NSDate *)arg0;
- (NSDictionary *)propertiesToUpdate;
- (void)dealloc;
- (NSBatchUpdateRequest *)init;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void)setResultType:(unsigned int)arg0;
- (NSString *)entityName;
- (NSBatchUpdateRequest *)initWithEntityName:(NSString *)arg0;
- (NSEntityDescription *)entity;
- (void)setIncludesSubentities:(char)arg0;
- (void)setPropertiesToUpdate:(NSDictionary *)arg0;
- (unsigned int)requestType;
- (unsigned int)resultType;

@end
