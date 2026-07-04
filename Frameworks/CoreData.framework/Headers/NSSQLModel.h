/* Runtime dump - NSSQLModel
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLModel : NSStoreMapping
{
    NSString * _configuration;
    NSManagedObjectModel * _mom;
    NSKnownKeysDictionary * _entitiesByName;
    NSMutableArray * _entities;
    id * _entityDescriptionToSQLMap;
    unsigned int _brokenHashVersion;
    char _retainLeopardStyleDictionaries;
    char _modelHasPrecomputedKeyOrder;
    char _hasVirtualToOnes;
}

- (NSString *)configurationName;
- (NSSQLModel *)initWithManagedObjectModel:(NSManagedObjectModel *)arg0 configurationName:(NSString *)arg1 retainHashHack:(char)arg2;
- (id)entityNamed:(id)arg0;
- (unsigned long)entityIDForName:(NSString *)arg0;
- (NSSQLModel *)initWithManagedObjectModel:(NSManagedObjectModel *)arg0 configurationName:(NSString *)arg1 brokenHashVersion:(unsigned int)arg2;
- (NSObject *)entityForID:(unsigned long)arg0;
- (char)_modelHasPrecomputedKeyOrder;
- (void)_recordHasVirtualToOnes;
- (char)_useLeopardStyleHashing;
- (char)_useSnowLeopardStyleHashing;
- (NSObject *)_precomputedKeyOrderForEntity:(NSObject *)arg0;
- (void)_addIndexedEntity:(NSObject *)arg0;
- (char)_generateModel:(NSObject *)arg0 error:(id *)arg1;
- (NSSQLModel *)initWithManagedObjectModel:(NSManagedObjectModel *)arg0 configurationName:(NSString *)arg1 retainHashHack:(char)arg2 brokenHashVersion:(unsigned int)arg3;
- (id)_entityMapping;
- (NSSQLModel *)initWithManagedObjectModel:(NSManagedObjectModel *)arg0 configurationName:(NSString *)arg1;
- (NSString *)_sqlEntityWithRenamingIdentifier:(NSString *)arg0;
- (char)_retainHashHack;
- (void)dealloc;
- (NSManagedObjectModel *)managedObjectModel;
- (NSKnownKeysDictionary *)entitiesByName;
- (NSMutableArray *)entities;
- (void)finalize;

@end
