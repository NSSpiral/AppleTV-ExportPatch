/* Runtime dump - TUAudioRoute
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRoute : NSObject
{
    NSDictionary * _route;
}

@property (readonly, nonatomic) char receiver;
@property (readonly, nonatomic) char speaker;
@property (readonly, nonatomic) char wirelessHeadset;
@property (readonly, nonatomic) char airTunes;
@property (readonly, nonatomic) char carAudio;
@property (readonly, nonatomic) char bluetooth;
@property (readonly, nonatomic) int bluetoothEndpointType;
@property (retain, nonatomic) NSDictionary * route;

- (TUAudioRoute *)initWithDictionary:(NSDictionary *)arg0;
- (char)_routeNameEqualTo:(id)arg0;
- (char)isBluetooth;
- (char)isReceiver;
- (char)isSpeaker;
- (char)isWirelessHeadset;
- (char)isAirTunes;
- (char)isCarAudio;
- (int)bluetoothEndpointType;
- (void)setRoute:(NSDictionary *)arg0;
- (NSDictionary *)route;

@end
