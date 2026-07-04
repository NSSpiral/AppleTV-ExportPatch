/* Runtime dump - AXHearingAidDetailCell
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingAidDetailCell : PSTableCell
{
    AXRemoteHearingAidDevice * _device;
    UILabel * _leftLabel;
    UIImageView * _leftBattery;
    UILabel * _rightLabel;
    UIImageView * _rightBattery;
    UIActivityIndicatorView * _loadingIndicator;
    NSNumberFormatter * _numberFormatter;
    char _bluetoothAvailable;
}

@property (retain, nonatomic) AXRemoteHearingAidDevice * device;

- (void)setDevice:(AXRemoteHearingAidDevice *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (NSString *)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (AXHearingAidDetailCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 andDevice:(NSObject *)arg2;
- (void)bluetoothAvailabilityDidChange:(NSDictionary *)arg0;
- (UIImage *)imageForBatteryLevel:(float)arg0;
- (void)updateAvailability;
- (AXHearingAidDetailCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (AXRemoteHearingAidDevice *)device;

@end
