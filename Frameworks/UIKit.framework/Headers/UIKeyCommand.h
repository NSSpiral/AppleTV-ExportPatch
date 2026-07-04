/* Runtime dump - UIKeyCommand
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommand : NSObject <NSCopying, NSSecureCoding>
{
    NSIndexSet * _keyCodes;
    SEL _action;
    int _buttonType;
    UIEvent * _triggeringEvent;
    NSString * _segueIdentifier;
    UIViewController * _controllerForSegue;
    NSString * _input;
    int _modifierFlags;
}

@property (readonly, nonatomic) NSString * input;
@property (readonly, nonatomic) int modifierFlags;

+ (UIKeyCommand *)keyCommandWithInput:(NSString *)arg0 modifierFlags:(int)arg1 action:(SEL)arg2;
+ (char)supportsSecureCoding;
+ (UIKeyCommand *)keyCommandWithKeyCodes:(NSIndexSet *)arg0 modifierFlags:(int)arg1 action:(SEL)arg2;
+ (UIKeyCommand *)keyCommandWithKeyCodes:(NSIndexSet *)arg0 modifierFlags:(int)arg1 buttonType:(int)arg2;
+ (UIKeyCommand *)keyCommandWithInput:(NSString *)arg0 modifierFlags:(int)arg1 buttonType:(int)arg2;
+ (UIKeyCommand *)keyCommandWithInput:(NSString *)arg0 modifierFlags:(int)arg1 segueIdentifier:(NSString *)arg2;

- (void)dealloc;
- (UIKeyCommand *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SEL)action;
- (int)_buttonType;
- (char)triggerSegueIfPossible;
- (void)_setButtonType:(int)arg0;
- (UIKeyCommand *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(SEL)arg0;
- (void)_setTriggeringEvent:(NSObject *)arg0;
- (NSString *)_segueIdentifier;
- (void)_setViewControllerForSegue:(id)arg0;
- (NSString *)input;
- (int)modifierFlags;
- (NSIndexSet *)_keyCodes;
- (UIKeyCommand *)initWithKeyCodes:(NSIndexSet *)arg0 modifierFlags:(int)arg1 action:(SEL)arg2;
- (UIKeyCommand *)initWithInput:(NSString *)arg0 modifierFlags:(int)arg1 segueIdentifier:(NSString *)arg2;
- (UIKeyCommand *)initWithInput:(NSString *)arg0 modifierFlags:(int)arg1 action:(SEL)arg2;
- (UIKeyCommand *)initWithKeyCodes:(NSIndexSet *)arg0 modifierFlags:(int)arg1 buttonType:(int)arg2;
- (UIKeyCommand *)initWithInput:(NSString *)arg0 modifierFlags:(int)arg1 buttonType:(int)arg2;
- (UIViewController *)_controllerForSegue;
- (UIEvent *)_triggeringEvent;

@end
