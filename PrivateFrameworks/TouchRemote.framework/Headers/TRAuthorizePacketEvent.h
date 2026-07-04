/* Runtime dump - TRAuthorizePacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthorizePacketEvent : TRPacketEvent
{
    NSString * _deviceIdentifier;
    NSString * _passcode;
}

@property (readonly, nonatomic) NSString * deviceIdentifier;
@property (readonly, nonatomic) NSString * passcode;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)deviceIdentifier;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRAuthorizePacketEvent *)initWithPasscode:(NSString *)arg0;
- (NSString *)passcode;

@end
