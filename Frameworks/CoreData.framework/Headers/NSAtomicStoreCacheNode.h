/* Runtime dump - NSAtomicStoreCacheNode
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAtomicStoreCacheNode : NSObject
{
    NSManagedObjectID * _objectID;
    unsigned long __versionNumber;
    NSMutableDictionary * _propertyCache;
    void * _reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID * objectID;
@property (retain, nonatomic) NSMutableDictionary * propertyCache;

+ (char)accessInstanceVariablesDirectly;
+ (void)initialize;

- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)arg0;
- (id *)knownKeyValuesPointer;
- (NSObject *)_snapshot_;
- (NSMutableDictionary *)propertyCache;
- (void)setPropertyCache:(NSMutableDictionary *)arg0;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSAtomicStoreCacheNode *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSManagedObjectID *)objectID;
- (NSAtomicStoreCacheNode *)initWithObjectID:(NSManagedObjectID *)arg0;

@end
