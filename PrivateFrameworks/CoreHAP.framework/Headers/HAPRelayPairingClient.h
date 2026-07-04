/* Runtime dump - HAPRelayPairingClient
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayPairingClient : NSObject
{
    <HAPRelayPairingClientDelegate> * _delegate;
    NSURL * _accessoryBagURL;
}

@property (weak) <HAPRelayPairingClientDelegate> * delegate;
@property (readonly, nonatomic) NSURL * accessoryBagURL;

- (void)setDelegate:(<HAPRelayPairingClientDelegate> *)arg0;
- (<HAPRelayPairingClientDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (NSURL *)accessoryBagURL;
- (void)requestControllerIdentifier;
- (void)requestAccessTokenForAccessoryIdentifier:(NSString *)arg0 pairingToken:(NSString *)arg1;

@end
