/* Runtime dump - PBCodable
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBCodable : NSObject <NSSecureCoding, PQLValuable>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSData * data;

+ (PBCodable *)newFromSqliteValue:(struct Mem *)arg0;
+ (char)supportsSecureCoding;
+ (NSDictionary *)options;

- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (PBCodable *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (PBCodable *)init;
- (NSData *)data;
- (PBCodable *)initWithData:(NSData *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)formattedText;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;

@end
