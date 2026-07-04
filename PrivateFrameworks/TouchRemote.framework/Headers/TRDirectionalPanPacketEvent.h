/* Runtime dump - TRDirectionalPanPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDirectionalPanPacketEvent : TRPacketEvent
{
    int _gestureState;
    struct CGPoint _location;
    struct CGPoint _velocity;
}

@property (readonly, nonatomic) struct CGPoint location;
@property (readonly, nonatomic) int gestureState;
@property (readonly, nonatomic) struct CGPoint velocity;

+ (unsigned int)_packetEventType;

- (NSString *)description;
- (struct CGPoint)velocity;
- (struct CGPoint)location;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (TRDirectionalPanPacketEvent *)initWithGestureState:(int)arg0 location:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (int)gestureState;

@end
