/* Runtime dump - ATVMusicStoreRottenTomatoesRatingControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVFeedElement, BRImageControl, BRTextControl;
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl
{
    BRImageControl * _freshnessImageControl;
    BRTextControl * _percentageNumberControl;
    BRTextControl * _percentageGlyphControl;
    char _trickLayouting;
}

@property char trickLayouting;

- (void)layoutSubcontrols;
- (ATVMusicStoreRottenTomatoesRatingControl *)initWithFeedElement:(ATVFeedElement *)arg0;
- (ATVMusicStoreRottenTomatoesRatingControl *)initWithItem:(NSObject *)arg0 textColor:(UIColor *)arg1;
- (ATVMusicStoreRottenTomatoesRatingControl *)initWithFeedDictionary:(NSDictionary *)arg0;
- (void)setTrickLayouting:(char)arg0;
- (void)_configureControlsWithFreshness:(int)arg0 percentage:(id)arg1 textColor:(UIColor *)arg2;
- (char)trickLayouting;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (ATVMusicStoreRottenTomatoesRatingControl *)initWithItem:(NSObject *)arg0;

@end
