/* Runtime dump - UIVisualEffectView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffectView : UIView <NSSecureCoding>
{
    UIView * _maskView;
    struct ? _effectViewFlags;
    _UIVisualEffectContentView * _contentView;
    NSString * _groupName;
    UIVisualEffect * _effect;
}

@property (retain, nonatomic) UIView * contentView;
@property (copy, nonatomic) UIVisualEffect * effect;
@property (copy, nonatomic) NSString * _groupName;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (UIVisualEffectView *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)_commonInit;
- (UIView *)contentView;
- (void)setContentView:(UIView *)arg0;
- (void)setMaskView:(UIView *)arg0;
- (UIView *)maskView;
- (void)viewDidMoveToSuperview;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (NSString *)_groupName;
- (UIVisualEffectView *)initWithEffect:(UIVisualEffect *)arg0;
- (void)_setGroupName:(NSString *)arg0;
- (void)_configureForCurrentEffect;
- (void)_createContentViewIfNecessary;
- (void)_setEffect:(NSObject *)arg0;
- (UIVisualEffect *)effect;
- (void)_configureForEffectSettings:(NSDictionary *)arg0;
- (void)_configureForEffectConfig:(NSObject *)arg0;
- (void)_applyGroupNameToSubviews;
- (NSObject *)_whatsWrongWithThisEffect;
- (void)setEffect:(UIVisualEffect *)arg0;

@end
