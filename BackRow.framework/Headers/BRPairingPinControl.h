/* Runtime dump - BRPairingPinControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRPairingPinControl : BRControl
{
    ATVImage * _boxImage;
    NSString * _pin;
}

- (void)layoutSubcontrols;
- (id)_layerForPINDigit:(id)arg0;
- (void)dealloc;
- (BRPairingPinControl *)init;
- (NSString *)accessibilityLabel;
- (id)PIN;
- (void)setPIN:(NSSet *)arg0;

@end
