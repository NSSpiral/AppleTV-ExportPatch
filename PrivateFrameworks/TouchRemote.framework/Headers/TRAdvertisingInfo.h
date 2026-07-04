/* Runtime dump - TRAdvertisingInfo
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAdvertisingInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSData * _pairingPublicKey;
    NSData * _wirelessProximityIdentifier;
}

@property (readonly, copy, nonatomic) NSData * pairingPublicKey;
@property (readonly, copy, nonatomic) NSData * wirelessProximityIdentifier;

+ (char)supportsSecureCoding;

- (TRAdvertisingInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TRAdvertisingInfo *)copyWithZone:(struct _NSZone *)arg0;
- (TRAdvertisingInfo *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSDictionary *)_initWithTXTRecordRepresentation:(NSDictionary *)arg0;
- (NSData *)pairingPublicKey;
- (NSDictionary *)_TXTRecordRepresentation;
- (NSData *)wirelessProximityIdentifier;

@end
