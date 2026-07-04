/* Runtime dump - ATVAirPlayCRDModeMessageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRImageControl, BRTextControl;
@interface ATVAirPlayCRDModeMessageControl : BRControl
{
    int _style;
    BRImageControl * _photo;
    BRControl * _background;
    BRControl * _topEdge;
    BRControl * _bottomEdge;
    BRControl * _leftEdge;
    BRControl * _rightEdge;
    BRImageControl * _airPlayIcon;
    BRTextControl * _airPlayLabel;
    BRTextControl * _baseMessage1;
    BRTextControl * _baseMessage2;
    BRTextControl * _customMessage;
    BRImageControl * _divider;
    BRImageControl * _customMsgDivider;
    BRTextControl * _instructions1Number;
    BRTextControl * _instructions1Label;
    BRTextControl * _instructions1Text;
    BRTextControl * _instructions2Number;
    BRTextControl * _instructions2Label;
    BRTextControl * _instructions2Text;
}

+ (NSObject *)controlWithStyle:(int)arg0;

- (void)layoutSubcontrols;
- (NSString *)accessibilityRangeString;
- (void)_configureControls;
- (void)_reconfigureControls:(id)arg0;
- (void)_layoutSubcontrolsForNormalStyle;
- (void)_layoutSubcontrolsForPhotoStyle;
- (void)_layoutSubcontrolsForSmallStyle;
- (void)dealloc;
- (ATVAirPlayCRDModeMessageControl *)init;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)_setStyle:(int)arg0;
- (void).cxx_destruct;
- (struct CGSize)preferredSize;

@end
