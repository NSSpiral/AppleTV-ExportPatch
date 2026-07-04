/* Runtime dump - UIPhysicalKeyboardEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent
{
    NSString * _modifiedInput;
    NSString * _unmodifiedInput;
    NSString * _shiftModifiedInput;
    NSString * _commandModifiedInput;
    NSString * _markedInput;
    int _modifierFlags;
    int _inputFlags;
    NSString * _privateInput;
}

@property (retain, nonatomic) NSString * _modifiedInput;
@property (retain, nonatomic) NSString * _unmodifiedInput;
@property (retain, nonatomic) NSString * _shiftModifiedInput;
@property (retain, nonatomic) NSString * _commandModifiedInput;
@property (retain, nonatomic) NSString * _markedInput;
@property (retain, nonatomic) NSString * _privateInput;
@property (nonatomic) int _modifierFlags;
@property (readonly, nonatomic) int _gsModifierFlags;
@property (readonly, nonatomic) char _isKeyDown;
@property (readonly, nonatomic) long _keyCode;
@property (nonatomic) int _inputFlags;

+ (NSObject *)_eventWithInput:(NSObject *)arg0 inputFlags:(int)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (int)type;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg0 keyboard:(struct __GSKeyboard *)arg1;
- (char)_isKeyDown;
- (long)_keyCode;
- (char)_matchesKeyCommand:(NSObject *)arg0;
- (int)_modifierFlags;
- (int)_gsModifierFlags;
- (NSString *)_modifiedInput;
- (int)_inputFlags;
- (NSString *)_unmodifiedInput;
- (void)set_modifiedInput:(NSString *)arg0;
- (NSObject *)_cloneEvent;
- (void)_privatizeInput;
- (NSString *)_markedInput;
- (void)set_modifierFlags:(int)arg0;
- (void)set_inputFlags:(int)arg0;
- (void)set_unmodifiedInput:(NSString *)arg0;
- (void)set_markedInput:(NSString *)arg0;
- (void)set_shiftModifiedInput:(NSString *)arg0;
- (void)set_commandModifiedInput:(NSString *)arg0;
- (void)set_privateInput:(NSString *)arg0;
- (NSString *)_commandModifiedInput;
- (NSString *)_shiftModifiedInput;
- (NSString *)_privateInput;

@end
