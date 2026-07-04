/* Runtime dump - ABPersonCellContentView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonCellContentView : UIView
{
    struct CGRect _labelViewRect;
    struct CGRect _valueViewRect;
    UILabel * _label;
    UIImageView * _badge;
    char _editing;
    <ABStyleProvider> * _styleProvider;
}

@property (readonly, nonatomic) UILabel * label;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;

+ (struct CGSize)layoutSubviewsForView:(NSObject *)arg0 usingSize:(struct CGSize)arg1 styleProvider:(<ABStyleProvider> *)arg2 whenEditing:(char)arg3;
+ (struct CGRect)firstValueFrameForValueViewFrame:(NSObject *)arg0 styleProvider:(SEL)arg1 whenEditing:(struct CGRect)arg2;
+ (void)computeLabelViewFrame:(struct CGRect *)arg0 valueViewFrame:(struct CGSize)arg1 forSize:(struct CGSize)arg2 styleProvider:(struct CGRect *)arg3 whenEditing:(struct CGSize)arg4;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)setLabelText:(NSString *)arg0;
- (void)layoutLabel;
- (void)setBadgeIcon:(UIImage *)arg0;
- (struct CGRect)rectForView:(NSObject *)arg0;
- (struct CGRect)backgroundRectForView:(NSObject *)arg0;
- (float)labelBaselineAdjustment;
- (struct CGRect)frameForLabel;
- (struct CGRect)frameForBadge;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (UILabel *)label;

@end
