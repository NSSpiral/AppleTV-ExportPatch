/* Runtime dump - TPStarkPhoneCallViewCell
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkPhoneCallViewCell : UIControl
{
    NSLayoutConstraint * _containerSpecificLeftConstraint;
    NSLayoutConstraint * _containerSpecificRightConstraint;
    UILabel * _mainLabel;
    UILabel * _subtitleLabel;
}

@property (retain) NSLayoutConstraint * containerSpecificLeftConstraint;
@property (retain) NSLayoutConstraint * containerSpecificRightConstraint;
@property (retain) UILabel * mainLabel;
@property (retain) UILabel * subtitleLabel;

- (TPStarkPhoneCallViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (UILabel *)subtitleLabel;
- (void)setSubtitleLabel:(UILabel *)arg0;
- (void)setDimmed:(char)arg0 animated:(char)arg1;
- (UILabel *)mainLabel;
- (void)setTitle:(NSString *)arg0 subtitle:(NSString *)arg1 animated:(char)arg2;
- (NSLayoutConstraint *)containerSpecificLeftConstraint;
- (void)setContainerSpecificLeftConstraint:(NSLayoutConstraint *)arg0;
- (NSLayoutConstraint *)containerSpecificRightConstraint;
- (void)setContainerSpecificRightConstraint:(NSLayoutConstraint *)arg0;
- (void)setMainLabel:(UILabel *)arg0;

@end
