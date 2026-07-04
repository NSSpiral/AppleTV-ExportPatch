/* Runtime dump - NSAttributeDescription
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAttributeDescription : NSPropertyDescription
{
    Class _attributeValueClass;
    NSString * _valueTransformerName;
    unsigned int _type;
    NSString * _attributeValueClassName;
    struct __attributeDescriptionFlags _attributeDescriptionFlags;
    id _defaultValue;
}

@property unsigned int attributeType;
@property (copy) NSString * attributeValueClassName;
@property (retain) id defaultValue;
@property (readonly, copy) NSData * versionHash;
@property (copy) NSString * valueTransformerName;
@property char allowsExternalBinaryDataStorage;

+ (NSObject *)_classNameForType:(unsigned int)arg0;
+ (void)initialize;

- (unsigned int)_propertyType;
- (NSData *)versionHash;
- (unsigned int)attributeType;
- (char)storesBinaryDataExternally;
- (NSString *)valueTransformerName;
- (NSString *)attributeValueClassName;
- (char)isIndexed;
- (void)setAttributeValueClassName:(NSString *)arg0;
- (NSArray *)validationPredicates;
- (NSArray *)validationWarnings;
- (void)setAttributeType:(unsigned int)arg0;
- (void)setValueTransformerName:(NSString *)arg0;
- (char)allowsExternalBinaryDataStorage;
- (void)setAllowsExternalBinaryDataStorage:(char)arg0;
- (Class)_attributeValueClass;
- (NSString *)_initWithName:(NSString *)arg0 type:(unsigned int)arg1 withClassName:(NSString *)arg2;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (int)_canConvertPredicate:(NSPredicate *)arg0 andWarning:(id)arg1;
- (char)_comparePredicatesAndWarnings:(id)arg0;
- (char)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(NSString *)arg0;
- (void)_createCachesAndOptimizeState;
- (char)_nonPredicateValidateValue:(id *)arg0 forKey:(NSString *)arg1 inObject:(NSObject *)arg2 error:(id *)arg3;
- (void)_versionHash:(char *)arg0 inStyle:(unsigned int)arg1;
- (NSString *)_initWithName:(NSString *)arg0 type:(unsigned int)arg1;
- (void)setStoresBinaryDataExternally:(char)arg0;
- (void)_writeIntoData:(NSData *)arg0 propertiesDict:(id)arg1 uniquedPropertyNames:(id)arg2 uniquedStrings:(id)arg3 uniquedData:(NSData *)arg4 entitiesSlots:(id)arg5 fetchRequests:(id)arg6;
- (void)dealloc;
- (NSAttributeDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSAttributeDescription *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)defaultValue;
- (NSObject *)_initWithType:(unsigned int)arg0;
- (void)setDefaultValue:(NSString *)arg0;

@end
