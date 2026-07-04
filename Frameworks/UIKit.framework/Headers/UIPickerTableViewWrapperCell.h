/* Runtime dump - UIPickerTableViewWrapperCell
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell
{
    UIView * _wrappedView;
    UIView * _wrappedViewContainer;
    struct CGSize _wrappedViewSize;
}

@property (retain, nonatomic) UIView * wrappedView;

- (void)dealloc;
- (UIView *)wrappedView;
- (UIPickerTableViewWrapperCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setWrappedView:(UIView *)arg0;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg0;
- (void)prepareForReuse;
- (void)_setIsCenterCell:(char)arg0 shouldModifyAlphaOfView:(char)arg1;
- (void)_updateWrappedViewFrame;
- (void)_updateWrappedView;
- (NSString *)_anyDateLabel;

@end
