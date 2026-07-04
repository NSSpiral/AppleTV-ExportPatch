/* Runtime dump - NSStoreMapNode
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMapNode : NSObject
{
    NSPersistentStoreMap * _map;
    NSManagedObjectID * _objectID;
    NSMutableDictionary * _relatedNodes;
    NSString * _entityName;
    unsigned int _version;
}

+ (void)initialize;

- (NSString *)configurationName;
- (unsigned int)_versionNumber;
- (void)_setVersionNumber:(unsigned int)arg0;
- (id *)knownKeyValuesPointer;
- (NSObject *)_snapshot_;
- (void)_setMap:(NSObject *)arg0;
- (void)setDestinations:(id)arg0 forRelationship:(OCXRelationship *)arg1;
- (id)destinationsForRelationship:(id)arg0;
- (NSMutableDictionary *)_relatedNodes;
- (void)dealloc;
- (NSStoreMapNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)key;
- (NSManagedObjectID *)objectID;
- (NSEntityDescription *)entity;
- (NSStoreMapNode *)initWithObjectID:(NSManagedObjectID *)arg0;

@end
