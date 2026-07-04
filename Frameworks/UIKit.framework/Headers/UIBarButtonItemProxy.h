/* Runtime dump - UIBarButtonItemProxy
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBarButtonItemProxy : NSObject
{
    UIBarButtonItem * _item;
    UIView * _view;
}

- (void)dealloc;
- (UIView *)view;
- (UIBarButtonItem *)item;
- (UIBarButtonItemProxy *)initWithItem:(UIBarButtonItem *)arg0 inToolbar:(UIToolbar *)arg1;

@end
