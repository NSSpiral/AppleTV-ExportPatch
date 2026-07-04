/* Runtime dump - AXEventKeyInfoRepresentation
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventKeyInfoRepresentation : NSObject <NSSecureCoding, NSCopying>
{
    char _keyDown;
    unsigned short _keyCode;
    NSString * _unmodifiedInput;
    NSString * _modifiedInput;
    NSString * _shiftModifiedInput;
    unsigned int _modifierState;
}

@property (nonatomic) unsigned short keyCode;
@property (nonatomic) char keyDown;
@property (retain, nonatomic) NSString * unmodifiedInput;
@property (retain, nonatomic) NSString * modifiedInput;
@property (retain, nonatomic) NSString * shiftModifiedInput;
@property (nonatomic) unsigned int modifierState;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (AXEventKeyInfoRepresentation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AXEventKeyInfoRepresentation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setKeyCode:(unsigned short)arg0;
- (void)setKeyDown:(char)arg0;
- (void)setUnmodifiedInput:(NSString *)arg0;
- (void)setModifiedInput:(NSString *)arg0;
- (void)setShiftModifiedInput:(NSString *)arg0;
- (void)setModifierState:(unsigned int)arg0;
- (NSString *)unmodifiedInput;
- (NSString *)shiftModifiedInput;
- (unsigned int)modifierState;
- (NSString *)modifiedInput;
- (char)keyDown;
- (NSObject *)_hardwareKeyboardLayout;
- (void)translateStringToKeycode;
- (void)translateKeycode;
- (unsigned short)keyCode;

@end
