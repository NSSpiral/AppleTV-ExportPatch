/* Runtime dump - TRAuthorizationStatusPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent
{
    int _authorizationStatus;
}

@property (readonly, nonatomic) int authorizationStatus;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (int)authorizationStatus;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRAuthorizationStatusPacketEvent *)initWithAuthorizationStatus:(int)arg0;

@end
