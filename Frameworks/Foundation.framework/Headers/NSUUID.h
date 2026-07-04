/* Runtime dump - NSUUID
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <NSCopying, NSSecureCoding, PQLValuable, PQLValuable, PASerializable>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSString * UUIDString;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;
+ (NSUUID *)uuid:(NSUUID *)arg0 identifierSalt:(id)arg1 withSalts:(id)arg2;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0 identifierSalt:(id)arg1;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0 identifierSalt:(id)arg1 withSalts:(id)arg2;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0 withSalts:(id)arg1;
+ (NSUUID *)deriveUUIDForAssistantFromBaseUUID:(id)arg0;
+ (NSUUID *)deriveUUIDForAssistantFromBaseUUID:(id)arg0 withSalts:(id)arg1;
+ (void)setIdentifierSalt:(id)arg0 assistantIdentifierSalt:(id)arg1;
+ (NSUUID *)newFromSqliteValue:(struct Mem *)arg0;
+ (NSUUID *)newFromSqliteValue:(struct Mem *)arg0;
+ (NSUUID *)uuid:(NSUUID *)arg0 identifierSalt:(id)arg1 withSalts:(id)arg2;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0 identifierSalt:(id)arg1;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0 identifierSalt:(id)arg1 withSalts:(id)arg2;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0;
+ (NSUUID *)deriveUUIDFromBaseUUID:(id)arg0 withSalts:(id)arg1;
+ (NSUUID *)deriveUUIDForAssistantFromBaseUUID:(id)arg0;
+ (NSUUID *)deriveUUIDForAssistantFromBaseUUID:(id)arg0 withSalts:(id)arg1;
+ (void)setIdentifierSalt:(id)arg0 assistantIdentifierSalt:(id)arg1;
+ (NSUUID *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSString *)UUID;

- (void)tsp_saveToMessage:(struct UUID *)arg0;
- (NSString *)tsp_initWithMessage:(struct UUID *)arg0;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (NSData *)convertToData;
- (NSString *)description;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (NSData *)convertToData;
- (NSString *)description;
- (id)plistArchiveWithCPLArchiver:(id)arg0;
- (NSUUID *)initWithCPLArchiver:(CPLArchiver *)arg0;
- (unsigned long)_cfTypeID;
- (struct __CFString *)_cfUUIDString;
- (NSUUID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSUUID *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)UUIDString;
- (NSUUID *)initWithUUIDString:(NSString *)arg0;
- (NSUUID *)copyWithZone:(struct _NSZone *)arg0;
- (void)getUUIDBytes:(NSData *)arg0;
- (NSUUID *)initWithUUIDBytes:(NSData *)arg0;

@end
