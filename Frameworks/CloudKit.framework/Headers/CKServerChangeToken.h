/* Runtime dump - CKServerChangeToken
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKServerChangeToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData * _data;
}

@property (retain, nonatomic) NSData * data;

+ (char)supportsSecureCoding;

- (CKServerChangeToken *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKServerChangeToken *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKServerChangeToken *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (CKServerChangeToken *)initWithData:(NSData *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;

@end
