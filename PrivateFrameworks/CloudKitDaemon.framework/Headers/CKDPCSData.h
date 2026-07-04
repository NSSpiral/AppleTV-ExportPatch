/* Runtime dump - CKDPCSData
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSData : NSObject <NSSecureCoding>
{
    struct _OpaquePCSShareProtection * _pcs;
    NSString * _etag;
    NSData * _pcsData;
}

@property (readonly, nonatomic) <NSSecureCoding> * itemID;
@property (nonatomic) struct _OpaquePCSShareProtection * pcs;
@property (copy, nonatomic) NSString * etag;
@property (copy, nonatomic) NSData * pcsData;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (CKDPCSData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (<NSSecureCoding> *)itemID;
- (NSString *)CKPropertiesDescription;
- (void)setPcs:(struct _OpaquePCSShareProtection *)arg0;
- (struct _OpaquePCSShareProtection *)pcs;
- (void)setPcsData:(NSData *)arg0;
- (NSData *)pcsData;
- (CKDPCSData *)initWithPCSData:(NSData *)arg0;
- (char)decryptPCSDataWithManager:(NSObject *)arg0 error:(id *)arg1;

@end
