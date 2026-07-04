/* Runtime dump - CoreRCHIDEvent
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCHIDEvent : NSObject <NSSecureCoding>
{
    struct __IOHIDEvent * _event;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (CoreRCHIDEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CoreRCHIDEvent *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (struct __IOHIDEvent *)event;
- (CoreRCHIDEvent *)initWithIOHIDEvent:(struct __IOHIDEvent *)arg0;
- (CoreRCHIDEvent *)initWithCECUserControl:(struct CECUserControl)arg0 pressed:(unsigned char)arg1;
- (void)getCommand:(unsigned int *)arg0 pressed:(char *)arg1;
- (char)getCECUserControl:(struct CECUserControl *)arg0 pressed:(unsigned char)arg1;
- (CoreRCHIDEvent *)initKeyboardEventWithUsagePage:(unsigned int)arg0 usageID:(unsigned int)arg1 pressed:(char)arg2;
- (CoreRCHIDEvent *)initWithCommand:(unsigned int)arg0 pressed:(char)arg1;
- (char)isRepeat;

@end
