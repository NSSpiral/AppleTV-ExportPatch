/* Runtime dump - NSPropertyDescription
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying>
{
    NSString * _versionHashModifier;
    id _underlyingProperty;
    NSData * _versionHash;
    NSEntityDescription * _entity;
    NSString * _name;
    NSArray * _validationPredicates;
    NSArray * _validationWarnings;
    struct __propertyDescriptionFlags _propertyDescriptionFlags;
    void * _extraIvars;
    NSMutableDictionary * _userInfo;
    long _entitysReferenceIDForProperty;
    char _indexedBySpotlight;
    char _storedInExternalRecord;
}

@property (readonly, nonatomic) NSEntityDescription * entity;
@property (copy, nonatomic) NSString * name;
@property char optional;
@property char transient;
@property (readonly) NSArray * validationPredicates;
@property (readonly) NSArray * validationWarnings;
@property (retain, nonatomic) NSDictionary * userInfo;
@property char indexed;
@property (readonly, copy) NSData * versionHash;
@property (copy) NSString * versionHashModifier;
@property char indexedBySpotlight;
@property char storedInExternalRecord;
@property (copy) NSString * renamingIdentifier;

+ (void)initialize;

- (char)_isRelationship;
- (long)_entitysReferenceID;
- (NSString *)renamingIdentifier;
- (unsigned int)_propertyType;
- (NSData *)versionHash;
- (char)isOptional;
- (char)isIndexed;
- (void)setIndexed:(char)arg0;
- (struct _NSExtraPropertyIVars *)_extraIVars;
- (void)_throwIfNotEditable;
- (NSArray *)validationPredicates;
- (NSArray *)validationWarnings;
- (NSString *)_initWithName:(NSString *)arg0;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (char)_comparePredicatesAndWarnings:(id)arg0;
- (void)_createCachesAndOptimizeState;
- (void)_replaceValidationPredicates:(id)arg0 andWarnings:(id)arg1;
- (char)_nonPredicateValidateValue:(id *)arg0 forKey:(NSString *)arg1 inObject:(NSObject *)arg2 error:(id *)arg3;
- (void)_versionHash:(char *)arg0 inStyle:(unsigned int)arg1;
- (void)_appendPropertyFieldsToData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 entitiesSlots:(id)arg5;
- (void)_writeIntoData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6;
- (NSString *)versionHashModifier;
- (void)setRenamingIdentifier:(NSString *)arg0;
- (void)_setEntity:(NSObject *)arg0;
- (void)setVersionHashModifier:(NSString *)arg0;
- (void)setElementID:(NSString *)arg0;
- (NSString *)elementID;
- (char)_isEditable;
- (char)isIndexedBySpotlight;
- (char)isIndexedBySpotlight;
- (char)isStoredInExternalRecord;
- (char)isStoredInExternalRecord;
- (void)_setEntitysReferenceID:(long)arg0;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (char)_skipValidation;
- (char)_isToManyRelationship;
- (char)_isOrdered;
- (void)_initializeExtraIVars;
- (void)setOptional:(char)arg0;
- (void)setTransient:(char)arg0;
- (void)setValidationPredicates:(NSArray *)arg0 withValidationWarnings:(NSArray *)arg1;
- (void)setIndexedBySpotlight:(char)arg0;
- (void)setIndexedBySpotlight:(char)arg0;
- (void)setStoredInExternalRecord:(char)arg0;
- (void)setStoredInExternalRecord:(char)arg0;
- (void)_setOrdered:(char)arg0;
- (char)isSpotlightIndexed;
- (void)setSpotlightIndexed:(char)arg0;
- (char)isStoredInTruthFile;
- (void)setStoredInTruthFile:(char)arg0;
- (char)isStoredInTruth;
- (void)setStoredInTruth:(char)arg0;
- (void)dealloc;
- (NSPropertyDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSPropertyDescription *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSPropertyDescription *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)userInfo;
- (char)isTransient;
- (void)setReadOnly:(char)arg0;
- (char)isReadOnly;
- (NSEntityDescription *)entity;

@end
