/* Runtime dump - NSIncrementalStoreNode
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSIncrementalStoreNode : NSObject
{
    NSManagedObjectID * _objectID;
    unsigned long long _versionNumber;
    id _propertyCache;
    void * _reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID * objectID;
@property (readonly, nonatomic) unsigned long long version;

+ (void)initialize;

- (unsigned int)_versionNumber;
- (id *)knownKeyValuesPointer;
- (NSObject *)_snapshot_;
- (NSCache *)_propertyCache;
- (NSString *)valueForPropertyDescription:(NSString *)arg0;
- (NSIncrementalStoreNode *)initWithObjectID:(NSManagedObjectID *)arg0 fromSQLRow:(NSSQLRow *)arg1;
- (NSIncrementalStoreNode *)initWithObjectID:(NSManagedObjectID *)arg0 withValues:(NSArray *)arg1 version:(unsigned long long)arg2;
- (void)updateWithValues:(NSArray *)arg0 version:(unsigned long long)arg1;
- (void)updateFromSQLRow:(id)arg0;
- (void)dealloc;
- (NSString *)description;
- (unsigned long long)version;
- (NSManagedObjectID *)objectID;

@end
