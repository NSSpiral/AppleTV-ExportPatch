/* Runtime dump - NSRelationshipDescription
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSRelationshipDescription : NSPropertyDescription
{
    void * _reserved5;
    void * _reserved6;
    NSEntityDescription * _destinationEntity;
    NSString * _lazyDestinationEntityName;
    NSRelationshipDescription * _inverseRelationship;
    NSString * _lazyInverseRelationshipName;
    unsigned long _maxCount;
    unsigned long _minCount;
    unsigned int _deleteRule;
}

@property (nonatomic) NSEntityDescription * destinationEntity;
@property (nonatomic) NSRelationshipDescription * inverseRelationship;
@property unsigned int maxCount;
@property unsigned int minCount;
@property unsigned int deleteRule;
@property (readonly) char toMany;
@property (readonly, copy) NSData * versionHash;
@property char ordered;

+ (void)initialize;

- (char)_isRelationship;
- (unsigned int)deleteRule;
- (unsigned int)_propertyType;
- (NSData *)versionHash;
- (unsigned int)minCount;
- (NSEntityDescription *)destinationEntity;
- (char)isIndexed;
- (NSString *)_initWithName:(NSString *)arg0;
- (void)_createCachesAndOptimizeState;
- (char)_nonPredicateValidateValue:(id *)arg0 forKey:(NSString *)arg1 inObject:(NSObject *)arg2 error:(id *)arg3;
- (void)_versionHash:(char *)arg0 inStyle:(unsigned int)arg1;
- (void)_writeIntoData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6;
- (char)_isToManyRelationship;
- (void)_updateInverse:(id)arg0;
- (void)setMaxCount:(unsigned int)arg0;
- (void)setMinCount:(unsigned int)arg0;
- (void)setDestinationEntity:(NSEntityDescription *)arg0;
- (void)setDeleteRule:(unsigned int)arg0;
- (void)setInverseRelationship:(NSRelationshipDescription *)arg0;
- (void)setOrdered:(char)arg0;
- (void)_versionHash:(char *)arg0 inStyle:(unsigned int)arg1 proxyContext:(NSObject *)arg2;
- (char)_validateValuesAreOfDestinationEntity:(NSObject *)arg0 source:(NSObject *)arg1;
- (void)_setLazyDestinationEntityName:(NSString *)arg0;
- (void)dealloc;
- (NSRelationshipDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSRelationshipDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSRelationshipDescription *)copyWithZone:(struct _NSZone *)arg0;
- (char)isToMany;
- (char)isOrdered;
- (NSRelationshipDescription *)inverseRelationship;
- (unsigned int)maxCount;

@end
