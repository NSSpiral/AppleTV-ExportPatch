/* Runtime dump - ABFaceTimeCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABFaceTimeCell : ABLabeledCell
{
    char _isFaceTimeAudioAvailable;
    ABTransportButton * _transportIcon1;
    ABTransportButton * _transportIcon2;
    <ABPropertyCellDelegate> * _delegate;
    UILabel * _faceTimeLabel;
}

@property (readonly, nonatomic) ABTransportButton * transportIcon1;
@property (readonly, nonatomic) ABTransportButton * transportIcon2;
@property (nonatomic) <ABPropertyCellDelegate> * delegate;
@property (readonly, nonatomic) UILabel * faceTimeLabel;
@property (nonatomic) char isFaceTimeAudioAvailable;

- (void)performDefaultAction;
- (char)isFaceTimeAudioAvailable;
- (NSArray *)variableConstraints;
- (UIView<ABText> *)labelView;
- (float)minCellHeight;
- (NSArray *)constantConstraints;
- (UIView *)rightMostView;
- (void)setIsFaceTimeAudioAvailable:(char)arg0;
- (void)transportButtonClicked:(id)arg0;
- (ABTransportButton *)transportIcon1;
- (ABTransportButton *)transportIcon2;
- (UILabel *)faceTimeLabel;
- (void)dealloc;
- (void)setDelegate:(<ABPropertyCellDelegate> *)arg0;
- (ABFaceTimeCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (<ABPropertyCellDelegate> *)delegate;
- (void)tintColorDidChange;

@end
