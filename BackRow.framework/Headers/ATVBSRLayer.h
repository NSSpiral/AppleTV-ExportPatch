/* Runtime dump - ATVBSRLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVBSRLayer : BRControl
{
    BRImageControl * _appleLogo;
    BRTextControl * _currentResolutionLabel;
    BRTextControl * _countDownToNextResolutionLabel;
    BRTextControl * _canYouSeeTheAppleLogoLabel;
}

- (void)layoutSubcontrols;
- (void)setCurrentResolutionString:(NSString *)arg0;
- (void)setSecondsLeftBeforeNextDisplayModeChangeString:(NSString *)arg0;
- (NSDictionary *)_bsrCountDownLabelAttributes;
- (NSDictionary *)_centeredTextAttributesForAttributes:(NSDictionary *)arg0;
- (void)dealloc;
- (ATVBSRLayer *)init;

@end
