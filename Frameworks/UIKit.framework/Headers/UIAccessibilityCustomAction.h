/* Runtime dump - UIAccessibilityCustomAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomAction : NSObject
{
    id _weakTarget;
    NSString * _name;
    SEL _selector;
}

@property (copy, nonatomic) NSString * name;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setTarget:(NSObject *)arg0;
- (void)setSelector:(SEL)arg0;
- (UIAccessibilityCustomAction *)initWithName:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2;
- (NSObject *)target;
- (SEL)selector;

@end
