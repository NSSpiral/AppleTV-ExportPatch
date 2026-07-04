/* Runtime dump - UIMenuItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMenuItem : NSObject
{
    NSString * _title;
    SEL _action;
    char _dontDismiss;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) SEL action;
@property (nonatomic) char dontDismiss;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (SEL)action;
- (NSString *)title;
- (void)setAction:(SEL)arg0;
- (UIMenuItem *)initWithTitle:(NSString *)arg0 action:(SEL)arg1;
- (void)setDontDismiss:(char)arg0;
- (char)dontDismiss;

@end
