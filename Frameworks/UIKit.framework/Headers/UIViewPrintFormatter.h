/* Runtime dump - UIViewPrintFormatter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewPrintFormatter : UIPrintFormatter
{
    UIView * _view;
}

@property (readonly, nonatomic) UIView * view;

- (void)dealloc;
- (UIView *)view;
- (UIViewPrintFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (int)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(NSObject *)arg0;
- (void)drawInRect:(struct CGRect)arg0 forPageAtIndex:(struct CGSize)arg1;
- (NSObject *)_initWithView:(UIView *)arg0;

@end
