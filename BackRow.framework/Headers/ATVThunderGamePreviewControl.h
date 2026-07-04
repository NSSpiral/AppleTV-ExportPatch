/* Runtime dump - ATVThunderGamePreviewControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVThunderGameCourtView, ATVThunderLineScoreView;
@interface ATVThunderGamePreviewControl : BRControl
{
    ATVThunderLineScoreView * _lineScore;
    ATVThunderGameCourtView * _gameCourt;
}

- (void)layoutSubcontrols;
- (void)dealloc;
- (ATVThunderGamePreviewControl *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
