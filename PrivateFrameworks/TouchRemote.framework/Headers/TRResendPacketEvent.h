/* Runtime dump - TRResendPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRResendPacketEvent : TRPacketEvent
{
    NSArray * _resendPacketEventClasses;
}

@property (readonly, nonatomic) NSArray * resendPacketEventClasses;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRResendPacketEvent *)initWithResendPacketEventClasses:(NSArray *)arg0;
- (NSArray *)resendPacketEventClasses;

@end
