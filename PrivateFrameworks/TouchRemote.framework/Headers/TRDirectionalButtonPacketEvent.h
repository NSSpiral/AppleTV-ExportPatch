/* Runtime dump - TRDirectionalButtonPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDirectionalButtonPacketEvent : TRPacketEvent
{
    int _buttonType;
    int _gestureState;
    int _gestureType;
}

@property (readonly, nonatomic) int buttonType;
@property (readonly, nonatomic) int gestureState;
@property (readonly, nonatomic) int gestureType;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (int)gestureType;
- (int)buttonType;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (int)gestureState;
- (TRDirectionalButtonPacketEvent *)initWithButtonType:(int)arg0 gestureType:(int)arg1 gestureState:(int)arg2;

@end
