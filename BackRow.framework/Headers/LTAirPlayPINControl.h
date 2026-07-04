/* Runtime dump - LTAirPlayPINControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent, BRImageControl, BRTextControl;
@interface LTAirPlayPINControl : BRControl
{
    BRControl * _dialogBox;
    BRImageControl * _dividerImage;
    BRImageControl * _airPlayImage;
    BRTextControl * _airPlayText;
    BRTextControl * _pinText;
    BRTextControl * _deviceNameText;
    NSString * _pin;
    NSString * _deviceName;
}

@property (retain, nonatomic) NSString * pin;
@property (retain, nonatomic) NSString * deviceName;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (LTAirPlayPINControl *)initWithPIN:(id)arg0 deviceName:(NSString *)arg1;
- (NSString *)pin;
- (void)setPin:(NSString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (NSString *)deviceName;
- (void)setDeviceName:(NSString *)arg0;

@end
