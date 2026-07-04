/* Runtime dump - AceObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface AceObject : NSObject <AceObject>
{
    NSNumber * _deserializationDuration;
    NSString * _aceId;
    NSString * _refId;
    NSData * _plistData;
    NSMutableDictionary * _dict;
}

@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;
@property (readonly, nonatomic) NSData * plistData;
@property (readonly, nonatomic) NSMutableDictionary * dict;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSObject *)newAceObjectWithGenericCommand:(NSObject *)arg0 context:(NSObject *)arg1;
+ (NSDictionary *)newAceObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSDictionary *)_newAceObjectWithMutableDictionary:(NSDictionary *)arg0;
+ (AceObject *)aceObjectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSSet *)_filteredDictionaryForKeySet:(struct __CFSet *)arg0 plistData:(NSData *)arg1;
+ (AceObject *)aceObjectWithGenericCommand:(NSObject *)arg0 context:(NSObject *)arg1;
+ (NSDictionary *)_aceObjectWithMutableDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (AceObject *)aceObjectArrayWithDictionaryArray:(NSArray *)arg0 baseClass:(Class)arg1 context:(NSObject *)arg2;
+ (AceObject *)aceObjectDictionaryWithDictionary:(NSDictionary *)arg0 baseClass:(Class)arg1 context:(NSObject *)arg2;
+ (AceObject *)aceObjectArrayWithDictionaryArray:(NSArray *)arg0 baseProtocol:(NSObject *)arg1 context:(NSObject *)arg2;
+ (AceObject *)aceObjectDictionaryWithDictionary:(NSDictionary *)arg0 baseProtocol:(NSObject *)arg1 context:(NSObject *)arg2;
+ (NSArray *)dictionaryArrayWithAceObjectArray:(NSArray *)arg0;
+ (NSDictionary *)dictionaryWithAceObjectDictionary:(NSDictionary *)arg0;
+ (AceObject *)aceObjectWithPlistData:(NSData *)arg0;

- (NSString *)groupIdentifier;
- (void)dealloc;
- (AceObject *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AceObject *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AceObject *)initWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)dictionary;
- (AceObject *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)_serializedData;
- (AceObject *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)properties;
- (NSMutableDictionary *)dict;
- (NSString *)propertyForKey:(NSString *)arg0;
- (void)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (NSData *)plistData;
- (AceObject *)initWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
- (NSString *)encodedClassName;
- (NSString *)aceId;
- (void)setAceId:(NSString *)arg0;
- (NSString *)refId;
- (void)setRefId:(NSString *)arg0;
- (NSData *)_initWithPlistData:(NSData *)arg0 aceId:(NSString *)arg1 refId:(NSString *)arg2;
- (NSDictionary *)_initWithMutableDictionary:(NSDictionary *)arg0;
- (void)_deserializeFromPlistData;
- (NSString *)topLevelPropertyForKey:(NSString *)arg0;
- (NSMutableDictionary *)_dict;
- (void)setTopLevelProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)_appendDescriptionOfObject:(NSObject *)arg0 toString:(NSString *)arg1 atDepth:(int)arg2 withPrefixes:(NSMutableArray *)arg3;
- (id)propertyForKeyWithoutDeserializing:(id)arg0;
- (char)hasArrayForPropertyForKey:(NSString *)arg0;
- (id)forceEagerDeserialization;
- (NSNumber *)deserializationDuration;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
