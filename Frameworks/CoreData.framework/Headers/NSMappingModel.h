/* Runtime dump - NSMappingModel
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMappingModel : NSObject
{
    void * _reserved;
    void * _reserved1;
    void * _reserved2;
    NSMutableArray * _entityMappings;
    NSMutableDictionary * _entityMappingsByName;
    struct __modelMappingFlags _modelMappingFlags;
}

@property (retain) NSArray * entityMappings;
@property (readonly, copy) NSDictionary * entityMappingsByName;

+ (int)migrationDebugLevel;
+ (NSMappingModel *)_modelPathsFromBundles:(id)arg0;
+ (NSArray *)_newMappingModelFromPaths:(NSArray *)arg0 forSourceHashes:(id)arg1 destinationHashes:(id)arg2;
+ (NSMappingModel *)mappingModelFromBundles:(id)arg0 forSourceModel:(NSObject *)arg1 destinationModel:(NSManagedObjectModel *)arg2;
+ (NSObject *)inferredMappingModelForSourceModel:(NSObject *)arg0 destinationModel:(NSManagedObjectModel *)arg1 error:(id *)arg2;
+ (void)initialize;
+ (void)setMigrationDebugLevel:(int)arg0;

- (void)setEntityMappings:(NSArray *)arg0;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(char)arg0;
- (char)_hasInferredMappingNeedingValidation;
- (NSArray *)entityMappings;
- (NSMappingModel *)_initWithEntityMappings:(NSArray *)arg0;
- (NSDictionary *)entityMappingsByName;
- (void)_addEntityMapping:(NSEntityMapping *)arg0;
- (char)_isInferredMappingModel;
- (NSString *)_sourceEntityVersionHashesByName;
- (NSString *)_destinationEntityVersionHashesByName;
- (void)dealloc;
- (NSMappingModel *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSMappingModel *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isEditable;
- (NSMappingModel *)copyWithZone:(struct _NSZone *)arg0;
- (NSMappingModel *)initWithContentsOfURL:(NSURL *)arg0;

@end
