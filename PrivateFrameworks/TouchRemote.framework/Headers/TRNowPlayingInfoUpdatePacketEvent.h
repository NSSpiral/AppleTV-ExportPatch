/* Runtime dump - TRNowPlayingInfoUpdatePacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNowPlayingInfoUpdatePacketEvent : TRPacketEvent
{
    NSDictionary * _nowPlayingInfo;
}

@property (readonly, copy, nonatomic) NSDictionary * nowPlayingInfo;

+ (unsigned int)_packetEventType;

- (NSDictionary *)nowPlayingInfo;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRNowPlayingInfoUpdatePacketEvent *)initWithNowPlayingInfo:(NSDictionary *)arg0;

@end
