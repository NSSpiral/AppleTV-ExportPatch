/* Runtime dump - CKEncryptedData
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding>
{
    NSData * _data;
    NSData * _encryptedData;
}

@property (copy, nonatomic) NSData * data;
@property (copy, nonatomic) NSData * encryptedData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (NSDictionary *)_prettyDictionaryRepresentation;
- (CKEncryptedData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKEncryptedData *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKEncryptedData *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (CKEncryptedData *)initWithData:(NSData *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (NSData *)encryptedData;
- (CKEncryptedData *)initWithEncryptedData:(NSData *)arg0;
- (void)setEncryptedData:(NSData *)arg0;

@end
