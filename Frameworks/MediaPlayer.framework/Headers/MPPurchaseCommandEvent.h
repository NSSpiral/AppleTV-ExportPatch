/* Runtime dump - MPPurchaseCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPurchaseCommandEvent : MPRemoteCommandEvent
{
    int _type;
    NSNumber * _trackID;
    NSString * _stationHash;
    NSNumber * _stationID;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSNumber * trackID;
@property (readonly, nonatomic) NSString * stationHash;
@property (readonly, nonatomic) NSNumber * stationID;

- (MPPurchaseCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (NSString *)stationHash;
- (NSNumber *)stationID;
- (int)type;
- (void).cxx_destruct;
- (NSNumber *)trackID;

@end
