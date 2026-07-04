/* Runtime dump - ABStarkFaceTimeCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkFaceTimeCell : ABContactCell
{
    <ABPropertyCellDelegate> * _delegate;
    NSDictionary * _labelTextAttributes;
    UILabel * _faceTimeLabel;
    ABTransportButton * _transportIcon;
}

@property (nonatomic) <ABPropertyCellDelegate> * delegate;
@property (copy, nonatomic) NSDictionary * labelTextAttributes;
@property (retain, nonatomic) UILabel * faceTimeLabel;
@property (readonly, nonatomic) ABTransportButton * transportIcon;

+ (char)requiresConstraintBasedLayout;

- (void)performDefaultAction;
- (void)setLabelTextAttributes:(NSDictionary *)arg0;
- (ABTransportButton *)transportIcon;
- (NSArray *)constantConstraints;
- (NSDictionary *)labelTextAttributes;
- (void)transportButtonClicked:(id)arg0;
- (UILabel *)faceTimeLabel;
- (void)setFaceTimeLabel:(UILabel *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPropertyCellDelegate> *)arg0;
- (ABStarkFaceTimeCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (<ABPropertyCellDelegate> *)delegate;
- (void)tintColorDidChange;
- (void)setHighlighted:(char)arg0 animated:(char)arg1;
- (void)setSelected:(char)arg0 animated:(char)arg1;

@end
