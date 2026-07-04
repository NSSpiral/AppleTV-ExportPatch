/* Runtime dump - UIAlertAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertAction : NSObject <NSCopying>
{
    NSString * _title;
    int _titleTextAlignment;
    char _enabled;
    char _checked;
    char _isDefault;
    UIColor * _imageTintColor;
    UIColor * _titleTextColor;
    int _style;
    id _handler;
    id _simpleHandler;
    UIImage * _image;
    id _shouldDismissHandler;
    NSString * __descriptiveText;
    UIViewController * _contentViewController;
    <_UIAlertActionRepresenting> * __representer;
    UIAlertController * __alertController;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) int style;
@property (nonatomic) char enabled;
@property (copy, nonatomic) id handler;
@property (copy, nonatomic) id simpleHandler;
@property (retain, nonatomic) UIImage * image;
@property (copy, nonatomic) id shouldDismissHandler;
@property (copy, nonatomic) NSString * _descriptiveText;
@property (retain, nonatomic) UIViewController * contentViewController;
@property <_UIAlertActionRepresenting> * _representer;
@property char _isDefault;
@property (nonatomic) UIAlertController * _alertController;

+ (NSString *)actionWithTitle:(NSString *)arg0 style:(int)arg1 handler:(id /* block */)arg2;
+ (NSString *)_actionWithTitle:(NSString *)arg0 image:(UIImage *)arg1 style:(int)arg2 handler:(id /* block */)arg3 shouldDismissHandler:(/* block */ id)arg4;
+ (NSString *)_actionWithTitle:(NSString *)arg0 descriptiveText:(NSString *)arg1 image:(UIImage *)arg2 style:(int)arg3 handler:(id /* block */)arg4 shouldDismissHandler:(/* block */ id)arg5;
+ (NSObject *)_actionWithContentViewController:(UIViewController *)arg0 style:(int)arg1;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (UIAlertAction *)copyWithZone:(struct _NSZone *)arg0;
- (UIImage *)image;
- (int)style;
- (void)setStyle:(int)arg0;
- (UIColor *)_titleTextColor;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)_setAlertController:(BRController *)arg0;
- (void)setSimpleHandler:(id /* block */)arg0;
- (void)setShouldDismissHandler:(id /* block */)arg0;
- (id /* block */)shouldDismissHandler;
- (id /* block */)simpleHandler;
- (UIViewController *)_contentViewController;
- (UIAlertController *)_alertController;
- (void)_setDescriptiveText:(NSString *)arg0;
- (void)_setTitleTextAlignment:(int)arg0;
- (void)_setChecked:(char)arg0;
- (void)_setIsDefault:(char)arg0;
- (void)_setContentViewController:(BRController *)arg0;
- (<_UIAlertActionRepresenting> *)_representer;
- (char)_isDefault;
- (char)_isChecked;
- (NSString *)_descriptiveText;
- (int)_titleTextAlignment;
- (UIColor *)_imageTintColor;
- (void)_setImageTintColor:(UIColor *)arg0;
- (void)_setTitleTextColor:(UIColor *)arg0;
- (void)_willAddContentViewController;
- (void)_didAddContentViewController;
- (void)_setRepresenter:(id)arg0;

@end
