/* Runtime dump - TRMutableAdvertisingInfo
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRMutableAdvertisingInfo : TRAdvertisingInfo

@property (copy, nonatomic) NSData * pairingPublicKey;
@property (copy, nonatomic) NSData * wirelessProximityIdentifier;

- (void)setPairingPublicKey:(NSData *)arg0;
- (void)setWirelessProximityIdentifier:(NSData *)arg0;

@end
