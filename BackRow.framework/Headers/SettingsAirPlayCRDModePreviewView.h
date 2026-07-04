/* Runtime dump - SettingsAirPlayCRDModePreviewView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVAirPlayCRDModeMessageControl, BRTextControl;
@interface SettingsAirPlayCRDModePreviewView : BRControl
{
    ATVAirPlayCRDModeMessageControl * _messageControl;
    BRTextControl * _instructions;
}

- (void)layoutSubcontrols;
- (void)setInstructionText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (SettingsAirPlayCRDModePreviewView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;

@end
