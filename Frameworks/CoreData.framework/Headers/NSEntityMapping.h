/* Runtime dump - NSEntityMapping
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSEntityMapping : NSObject
{
    void * _reserved;
    void * _reserved1;
    NSDictionary * _mappingsByName;
    NSString * _name;
    unsigned int _mappingType;
    NSString * _sourceEntityName;
    NSData * _sourceEntityVersionHash;
    NSString * _destinationEntityName;
    NSData * _destinationEntityVersionHash;
    NSExpression * _sourceExpression;
    NSDictionary * _userInfo;
    NSString * _entityMigrationPolicyClassName;
    NSMutableArray * _attributeMappings;
    NSMutableArray * _relationshipMappings;
    struct __entityMappingFlags _entityMappingFlags;
}

@property (copy) NSString * name;
@property unsigned int mappingType;
@property (copy) NSString * sourceEntityName;
@property (copy) NSData * sourceEntityVersionHash;
@property (copy) NSString * destinationEntityName;
@property (copy) NSData * destinationEntityVersionHash;
@property (retain) NSArray * attributeMappings;
@property (retain) NSArray * relationshipMappings;
@property (retain) NSExpression * sourceExpression;
@property (retain, nonatomic) NSDictionary * userInfo;
@property (copy) NSString * entityMigrationPolicyClassName;

+ (void)initialize;

- (unsigned int)mappingType;
- (NSString *)sourceEntityName;
- (NSString *)destinationEntityName;
- (void)setSourceExpression:(NSExpression *)arg0;
- (void)setAttributeMappings:(NSArray *)arg0;
- (void)setRelationshipMappings:(NSArray *)arg0;
- (void)setSourceEntityName:(NSString *)arg0;
- (void)setSourceEntityVersionHash:(NSData *)arg0;
- (void)setDestinationEntityName:(NSString *)arg0;
- (void)setDestinationEntityVersionHash:(NSData *)arg0;
- (void)setMappingType:(unsigned int)arg0;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(char)arg0;
- (NSString *)_initWithSourceEntityDescription:(NSString *)arg0 destinationEntityDescription:(NSString *)arg1;
- (NSData *)sourceEntityVersionHash;
- (NSData *)destinationEntityVersionHash;
- (NSExpression *)sourceExpression;
- (NSString *)entityMigrationPolicyClassName;
- (NSArray *)attributeMappings;
- (NSArray *)relationshipMappings;
- (void)setEntityMigrationPolicyClassName:(NSString *)arg0;
- (NSString *)_mappingsByName;
- (NSObject *)_migrationPolicy;
- (void)_addAttributeMapping:(id)arg0;
- (void)_addRelationshipMapping:(id)arg0;
- (char)_hasInferredMappingNeedingValidation;
- (void)dealloc;
- (NSEntityMapping *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSEntityMapping *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setUserInfo:(NSDictionary *)arg0;
- (char)isEditable;
- (NSEntityMapping *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)userInfo;

@end
