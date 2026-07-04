/* Runtime dump - TIKeyboardTouchEvent
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding>
{
    float _radius;
    int _pathIndex;
    int _stage;
    int _forcedKeyCode;
    struct CGPoint _location;
    double _timestamp;
}

@property (readonly, nonatomic) int stage;
@property (readonly, nonatomic) struct CGPoint location;
@property (readonly, nonatomic) float radius;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) int pathIndex;
@property (readonly, nonatomic) int forcedKeyCode;

+ (char)supportsSecureCoding;
+ (NSObject *)touchEventWithStage:(int)arg0 location:(struct CGPoint)arg1 radius:(float)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 forcedKeyCode:(int)arg5;

- (TIKeyboardTouchEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (double)timestamp;
- (struct CGPoint)location;
- (int)stage;
- (int)pathIndex;
- (float)radius;
- (TIKeyboardTouchEvent *)initWithStage:(int)arg0 location:(struct CGPoint)arg1 radius:(float)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 forcedKeyCode:(int)arg5;
- (int)forcedKeyCode;

@end
