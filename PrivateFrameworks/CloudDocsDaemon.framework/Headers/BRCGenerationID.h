/* Runtime dump - BRCGenerationID
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable>
{
    unsigned int _generationID;
    NSData * _signature;
}

@property (readonly, nonatomic) NSNumber * fsGenerationID;
@property (readonly, nonatomic) NSData * signature;
@property (readonly, nonatomic) NSString * generationIDString;
@property (readonly, nonatomic) char * UTF8String;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (BRCGenerationID *)newFromSqliteValue:(struct Mem *)arg0;

- (char *)UTF8String;
- (BRCGenerationID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (BRCGenerationID *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (BRCGenerationID *)initWithRelativePath:(NSString *)arg0;
- (NSData *)signature;
- (NSNumber *)fsGenerationID;
- (void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1;
- (BRCGenerationID *)initWithFSGenerationID:(unsigned int)arg0;
- (char)isEqualToGenerationID:(NSObject *)arg0 orSignature:(NSObject *)arg1;
- (NSString *)generationIDString;
- (BRCGenerationID *)initWithSignature:(void *)arg0 length:(void)arg1;
- (char)isEqualToFSGenerationID:(unsigned int)arg0;

@end
