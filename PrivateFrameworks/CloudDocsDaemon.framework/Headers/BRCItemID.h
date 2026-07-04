/* Runtime dump - BRCItemID
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable>
{
    unsigned char _kind;
    id _uuid;
}

@property (readonly, nonatomic) char isRoot;
@property (readonly, nonatomic) char isDocuments;
@property (readonly, nonatomic) NSString * itemIDString;
@property (readonly, nonatomic) NSString * shortItemIDString;
@property (readonly, nonatomic) char * UTF8String;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (BRCItemID *)newFromSqliteValue:(struct Mem *)arg0;
+ (NSObject *)rootItemID;
+ (BRCItemID *)newItemIDFromEnclosureUUID:(id)arg0;
+ (NSObject *)documentsItemID;
+ (NSObject *)parseMangledItemID:(NSObject *)arg0 mangledContainerID:(id *)arg1 etag:(id *)arg2;

- (char *)UTF8String;
- (BRCItemID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BRCItemID *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BRCItemID *)copyWithZone:(struct _NSZone *)arg0;
- (BRCItemID *)initWithString:(NSString *)arg0;
- (char)isEqualToItemID:(NSObject *)arg0;
- (char)isRoot;
- (NSString *)itemIDString;
- (char)isDocuments;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (NSString *)shortItemIDString;
- (NSString *)derivedAliasItemIDWithOwnerName:(NSString *)arg0;
- (NSObject *)contentsRecordIDInZoneID:(NSObject *)arg0;
- (NSObject *)validatingDirectoryReferenceInZoneID:(NSObject *)arg0;
- (BRCItemID *)initWithKind:(unsigned char)arg0 bytes:(void *)arg1 length:(void)arg2;
- (NSString *)itemUUIDString;
- (BRCItemID *)initWithItemID:(NSObject *)arg0;

@end
