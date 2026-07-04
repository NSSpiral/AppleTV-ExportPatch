/* Runtime dump - UITableViewRowAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRowAction : NSObject <NSCopying>
{
    int _style;
    NSString * _title;
    UIColor * _backgroundColor;
    id _handler;
    _UITableViewCellActionButton * _button;
    UIVisualEffect * _backgroundEffect;
}

@property (readonly, nonatomic) int style;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) UIColor * backgroundColor;
@property (copy, nonatomic) UIVisualEffect * backgroundEffect;
@property (readonly, nonatomic) id handler;

+ (NSObject *)rowActionWithStyle:(int)arg0 title:(NSString *)arg1 handler:(id /* block */)arg2;

- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (UITableViewRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (NSObject *)_initWithStyle:(int)arg0 title:(NSString *)arg1 handler:(id /* block */)arg2;
- (_UITableViewCellActionButton *)_button;
- (void)_setButton:(UIButton *)arg0;
- (UIVisualEffect *)backgroundEffect;
- (void)setBackgroundEffect:(UIVisualEffect *)arg0;
- (<BSXPCConnectionListenerHandler> *)_handler;

@end
