/* Runtime dump - VoiceChatSessionRoster
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionRoster : NSObject
{
    GKSessionInternal * _gkSession;
    NSString * _peerID;
    GKVoiceChatSessionInternal * _gkvs;
    NSObject<OS_dispatch_queue> * _sendQueue;
    NSMutableArray * _connectedPeers;
    NSMutableDictionary * _peerStateTable;
    struct _opaque_pthread_mutex_t resMutex;
    char _needsUpdateBeaconList;
    char _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    char _isBeaconUp;
    char _hasFocus;
}

- (void)dealloc;
- (void)cleanup;
- (VoiceChatSessionRoster *)initWithGKSession:(NSObject *)arg0 peerID:(NSString *)arg1 voiceChatSession:(NSObject *)arg2 sendQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)startBeaconWrapper:(NSObject *)arg0;
- (unsigned int)focusID;
- (id)subscribedPeers;
- (void)stopBeacon;
- (void)peer:(NSString *)arg0 didChangeState:(int)arg1;
- (void)receivedBeacon:(id)arg0 fromPeer:(MCPeerID *)arg1;
- (char)recalculateFocusRating;
- (void)updateBeacon;
- (void)configureDeviceRating;
- (void)startBeacon;
- (void)sendBeacons;
- (void)calculateFocus:(id)arg0;
- (void)sendBeacon:(struct tagVoiceChatBeacon *)arg0 ToPeer:(NSObject *)arg1;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon *)arg0 beaconState:(NSObject *)arg1 fromPeer:(MCPeerID *)arg2;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon *)arg0 beaconState:(NSObject *)arg1 fromPeer:(MCPeerID *)arg2;
- (char)hasFocus;

@end
