/* Runtime dump - ATVAirTunesConnectionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRTextControl, BRWaitSpinnerControl;
@interface ATVAirTunesConnectionControl : BRControl
{
    BRControl * _background;
    BRWaitSpinnerControl * _spinner;
    BRTextControl * _text;
}

- (void)layoutSubcontrols;
- (void)dealloc;
- (ATVAirTunesConnectionControl *)init;
- (void)setStatus:(GEORPProblemStatus *)arg0;

@end
