/* Runtime dump - UITableViewCellSelectedBackground
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellSelectedBackground : UIView
{
    int _selectionStyle;
    UIColor * _multiselectBackgroundColor;
    UIColor * _selectionTintColor;
    char _multiselect;
}

@property (nonatomic) int selectionStyle;
@property (retain, nonatomic) UIColor * multiselectBackgroundColor;
@property (nonatomic) char multiselect;
@property (retain, nonatomic) UIColor * selectionTintColor;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setSelectionTintColor:(UIColor *)arg0;
- (void)setMultiselect:(char)arg0;
- (char)isMultiselect;
- (void)setSelectionStyle:(int)arg0;
- (int)selectionStyle;
- (UIColor *)multiselectBackgroundColor;
- (void)setMultiselectBackgroundColor:(UIColor *)arg0;
- (UIColor *)selectionTintColor;

@end
