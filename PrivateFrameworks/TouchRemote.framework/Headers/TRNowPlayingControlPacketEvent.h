/* Runtime dump - TRNowPlayingControlPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNowPlayingControlPacketEvent : TRPacketEvent
{
    int _controlCommand;
}

@property (readonly, nonatomic) int controlCommand;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (int)controlCommand;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRNowPlayingControlPacketEvent *)initWithControlCommand:(int)arg0;

@end
