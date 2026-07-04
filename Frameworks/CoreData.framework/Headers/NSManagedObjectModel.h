/* Runtime dump - NSManagedObjectModel
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    id _dataForOptimization;
    id * _optimizationHints;
    id _localizationPolicy;
    NSMutableDictionary * _entities;
    NSMutableDictionary * _configurations;
    NSMutableDictionary * _fetchRequestTemplates;
    NSSet * _versionIdentifiers;
    struct __managedObjectModelFlags _managedObjectModelFlags;
}

@property (readonly, copy) NSDictionary * entitiesByName;
@property (retain) NSArray * entities;
@property (readonly) NSArray * configurations;
@property (retain) NSDictionary * localizationDictionary;
@property (readonly, copy) NSDictionary * fetchRequestTemplatesByName;
@property (copy) NSSet * versionIdentifiers;
@property (readonly, copy) NSDictionary * entityVersionHashesByName;

+ (NSManagedObjectModel *)_modelPathsFromBundles:(id)arg0;
+ (NSManagedObjectModel *)modelByMergingModels:(id)arg0;
+ (void)_deepCollectEntitiesInArray:(NSArray *)arg0 entity:(NSObject *)arg1;
+ (NSManagedObjectModel *)modelByMergingModels:(id)arg0 forStoreMetadata:(NSDictionary *)arg1;
+ (NSManagedObjectModel *)mergedModelFromBundles:(id)arg0 forStoreMetadata:(NSDictionary *)arg1;
+ (NSString *)_newModelFromOptimizedEncoding:(NSString *)arg0 error:(id *)arg1;
+ (void)initialize;
+ (NSManagedObjectModel *)mergedModelFromBundles:(id)arg0;

- (NSData *)versionHash;
- (NSDictionary *)entitiesForConfiguration:(NSDictionary *)arg0;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (NSString *)_entityForName:(NSString *)arg0;
- (void)_removeEntity:(NSObject *)arg0;
- (void)_addEntity:(NSObject *)arg0;
- (void)_setIsEditable:(char)arg0;
- (void)_flattenProperties;
- (char)_isOptimizedForEncoding;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (NSObject *)_localizationPolicy;
- (NSDictionary *)fetchRequestTemplatesByName;
- (NSString *)fetchRequestTemplateForName:(NSString *)arg0;
- (void)_setLocalizationPolicy:(NSObject *)arg0;
- (void)_addEntities:(id)arg0 toConfiguration:(NSDictionary *)arg1;
- (void)setFetchRequestTemplate:(id)arg0 forName:(NSString *)arg1;
- (NSSet *)versionIdentifiers;
- (void)_addVersionIdentifiers:(id)arg0;
- (id)_modelForVersionHashes:(id)arg0;
- (NSManagedObjectModel *)_initWithEntities:(NSArray *)arg0;
- (NSManagedObjectModel *)initWithContentsOfOptimizedURL:(NSURL *)arg0;
- (void)setEntities:(NSArray *)arg0;
- (void)setEntities:(NSArray *)arg0 forConfiguration:(NSDictionary *)arg1;
- (void)setVersionIdentifiers:(NSSet *)arg0;
- (NSDictionary *)localizationDictionary;
- (void)setLocalizationDictionary:(NSDictionary *)arg0;
- (NSObject *)_entityVersionHashesByNameInStyle:(unsigned int)arg0;
- (char)_isConfiguration:(NSDictionary *)arg0 inStyle:(unsigned int)arg1 compatibleWithStoreMetadata:(NSDictionary *)arg2;
- (NSArray *)configurations;
- (NSString *)fetchRequestFromTemplateWithName:(NSString *)arg0 substitutionVariables:(NSDictionary *)arg1;
- (NSDictionary *)entityVersionHashesByName;
- (char)isConfiguration:(NSDictionary *)arg0 compatibleWithStoreMetadata:(NSDictionary *)arg1;
- (void)_setIsEditable:(char)arg0 optimizationStyle:(unsigned int)arg1;
- (NSString *)_optimizedEncoding:(id *)arg0;
- (NSManagedObjectModel *)initWithContentsOfURL:(NSURL *)arg0 forStoreMetadata:(NSDictionary *)arg1;
- (char)_hasPrecomputedKeyOrder;
- (void)_removeEntities:(id)arg0 fromConfiguration:(NSDictionary *)arg1;
- (void)_removeEntityNamed:(id)arg0;
- (NSObject *)_precomputedKeysForEntity:(NSObject *)arg0;
- (NSString *)_configurationsByName;
- (NSDictionary *)_sortedEntitiesForConfiguration:(NSDictionary *)arg0;
- (id)_entitiesByVersionHash;
- (NSArray *)_versionIdentifiersAsArray;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (NSManagedObjectModel *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSManagedObjectModel *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isEditable;
- (NSManagedObjectModel *)copyWithZone:(struct _NSZone *)arg0;
- (NSManagedObjectModel *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSManagedObjectModel *)initWithContentsOfURL:(NSURL *)arg0;
- (NSDictionary *)entitiesByName;
- (NSArray *)entities;

@end
