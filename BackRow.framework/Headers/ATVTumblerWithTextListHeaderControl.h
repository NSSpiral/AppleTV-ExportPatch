/* Runtime dump - ATVTumblerWithTextListHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRTextControl, BRTumblerControl;
@interface ATVTumblerWithTextListHeaderControl : BRControl
{
    char _customTextOnTop;
    float _tumblerMaxWidth;
    BRTumblerControl * _tumbler;
    BRTextControl * _customText;
}

@property (readonly) BRTumblerControl * tumbler;
@property (nonatomic) float tumblerMaxWidth;
@property (readonly) BRTextControl * customText;
@property (nonatomic) char customTextOnTop;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)setCustomTextOnTop:(char)arg0;
- (float)tumblerMaxWidth;
- (void)setTumblerMaxWidth:(float)arg0;
- (BRTumblerControl *)tumbler;
- (BRTextControl *)customText;
- (char)customTextOnTop;
- (void)dealloc;
- (ATVTumblerWithTextListHeaderControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;

@end
