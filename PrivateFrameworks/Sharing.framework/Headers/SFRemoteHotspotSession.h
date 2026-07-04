/* Runtime dump - SFRemoteHotspotSession
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>
{
    char _browsing;
    <SFRemoteHotspotSessionDelegate> * _delegate;
    <SFRemoteHotspotProtocol> * _connectionProxy;
}

@property <SFRemoteHotspotSessionDelegate> * delegate;
@property char browsing;
@property (retain) <SFRemoteHotspotProtocol> * connectionProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setBrowsing:(char)arg0;
- (void)setDelegate:(<SFRemoteHotspotSessionDelegate> *)arg0;
- (SFRemoteHotspotSession *)init;
- (<SFRemoteHotspotSessionDelegate> *)delegate;
- (void)stopBrowsing;
- (void)startBrowsing;
- (char)browsing;
- (void)setConnectionProxy:(<SFRemoteHotspotProtocol> *)arg0;
- (<SFRemoteHotspotProtocol> *)connectionProxy;
- (void)enableHotspotForDevice:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)updatedFoundDeviceList:(NSArray *)arg0;
- (void)xpcManagerConnectionInterrupted;
- (void)enableRemoteHotspotForDevice:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;

@end
