/* Runtime dump - GKNearbyDevice
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKNearbyDevice : NSObject
{
    NSString * _deviceID;
    GKDiscovery * _discovery;
    GKPlayer * _player;
    int _state;
    NSDictionary * _pendingInvite;
}

@property (retain, nonatomic) NSString * deviceID;
@property (nonatomic) int state;
@property (retain, nonatomic) GKDiscovery * discovery;
@property (retain, nonatomic) NSDictionary * pendingInvite;
@property (retain, nonatomic) GKPlayer * player;

+ (GKNearbyDevice *)nearbyDeviceWithID:(int)arg0 discovery:(GKDiscovery *)arg1;

- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)deviceID;
- (void)setDeviceID:(NSString *)arg0;
- (void)setDiscovery:(GKDiscovery *)arg0;
- (void)sendDictionary:(NSDictionary *)arg0;
- (GKDiscovery *)discovery;
- (NSDictionary *)pendingInvite;
- (void)setPendingInvite:(NSDictionary *)arg0;
- (void)setPlayer:(GKPlayer *)arg0;
- (GKPlayer *)player;

@end
