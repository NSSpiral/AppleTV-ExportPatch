/* Runtime dump - SFActivityAdvertiser
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient>
{
    <SFActivityAdvertiserDelegate> * _delegate;
    <SFActivityAdvertiserProtocol> * _connectionProxy;
    SFInternalAdvertisement * _currentAdvertisement;
}

@property <SFActivityAdvertiserDelegate> * delegate;
@property (retain) <SFActivityAdvertiserProtocol> * connectionProxy;
@property (retain) SFInternalAdvertisement * currentAdvertisement;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SFActivityAdvertiser *)sharedAdvertiser;

- (void)setupXPCConnection;
- (void)dealloc;
- (void)setDelegate:(<SFActivityAdvertiserDelegate> *)arg0;
- (SFActivityAdvertiser *)init;
- (<SFActivityAdvertiserDelegate> *)delegate;
- (void)setConnectionProxy:(<SFActivityAdvertiserProtocol> *)arg0;
- (<SFActivityAdvertiserProtocol> *)connectionProxy;
- (void)xpcManagerConnectionInterrupted;
- (SFInternalAdvertisement *)currentAdvertisement;
- (void)setCurrentAdvertisement:(SFInternalAdvertisement *)arg0;
- (void)activityPayloadForAdvertisementPayload:(NSData *)arg0 requestedByDevice:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)didSendPayloadForActivityIdentifier:(NSString *)arg0 toDevice:(NSObject *)arg1 error:(NSError *)arg2;
- (void)advertiseAdvertisementPayload:(NSData *)arg0 options:(NSDictionary *)arg1;

@end
