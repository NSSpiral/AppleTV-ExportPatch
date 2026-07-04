/* Runtime dump - MCAdvertiserAssistant
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate>
{
    <MCAdvertiserAssistantDelegate> * _delegate;
    char _isAdvertising;
    char _wasAdvertising;
    MCSession * _session;
    NSDictionary * _discoveryInfo;
    NSString * _serviceType;
    MCPeerID * _myPeerID;
    MCNearbyServiceAdvertiser * _advertiser;
    NSMutableArray * _invitationsBuffer;
    id _invitationHandlerForPresentedAlert;
    NSString * _appName;
    NSBundle * _frameworkBundle;
    UIAlertView * _alertView;
}

@property (weak, nonatomic) <MCAdvertiserAssistantDelegate> * delegate;
@property (retain, nonatomic) MCSession * session;
@property (copy, nonatomic) NSDictionary * discoveryInfo;
@property (copy, nonatomic) NSString * serviceType;
@property (copy, nonatomic) MCPeerID * myPeerID;
@property (retain, nonatomic) MCNearbyServiceAdvertiser * advertiser;
@property (retain, nonatomic) NSMutableArray * invitationsBuffer;
@property (copy, nonatomic) id invitationHandlerForPresentedAlert;
@property (readonly, copy, nonatomic) NSString * appName;
@property (nonatomic) char isAdvertising;
@property (nonatomic) char wasAdvertising;
@property (retain, nonatomic) NSBundle * frameworkBundle;
@property (retain, nonatomic) UIAlertView * alertView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MCPeerID *)myPeerID;
- (void)setMyPeerID:(MCPeerID *)arg0;
- (NSBundle *)frameworkBundle;
- (void)setFrameworkBundle:(NSBundle *)arg0;
- (void)applicationDidEnterBackgroundNotification:(NSNotification *)arg0;
- (void)applicationWillTerminateNotification:(NSNotification *)arg0;
- (NSDictionary *)discoveryInfo;
- (char)isAdvertising;
- (void)setIsAdvertising:(char)arg0;
- (void)setWasAdvertising:(char)arg0;
- (char)wasAdvertising;
- (void)advertiser:(MCNearbyServiceAdvertiser *)arg0 didReceiveInvitationFromPeer:(MCPeerID *)arg1 withContext:(NSData *)arg2 invitationHandler:(id /* block */)arg3;
- (void)setDiscoveryInfo:(NSDictionary *)arg0;
- (MCNearbyServiceAdvertiser *)advertiser;
- (id)invitationHandlerForPresentedAlert;
- (NSMutableArray *)invitationsBuffer;
- (void)setInvitationHandlerForPresentedAlert:(id)arg0;
- (NSString *)appName;
- (void)setAlertView:(UIAlertView *)arg0;
- (UIAlertView *)alertView;
- (void)presentNextInvitation;
- (MCAdvertiserAssistant *)initWithServiceType:(NSString *)arg0 discoveryInfo:(NSDictionary *)arg1 session:(MCSession *)arg2;
- (void)setAdvertiser:(MCNearbyServiceAdvertiser *)arg0;
- (void)setInvitationsBuffer:(NSMutableArray *)arg0;
- (void)dealloc;
- (void)setDelegate:(<MCAdvertiserAssistantDelegate> *)arg0;
- (NSString *)description;
- (<MCAdvertiserAssistantDelegate> *)delegate;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)stop;
- (void)start;
- (void)willPresentAlertView:(UIAlertView *)arg0;
- (MCSession *)session;
- (void)setSession:(MCSession *)arg0;
- (NSString *)serviceType;
- (void)setServiceType:(NSString *)arg0;

@end
