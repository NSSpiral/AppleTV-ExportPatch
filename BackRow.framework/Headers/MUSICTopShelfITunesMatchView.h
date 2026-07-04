/* Runtime dump - MUSICTopShelfITunesMatchView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRTextControl;
@interface MUSICTopShelfITunesMatchView : BRControl
{
    BRAsyncImageControl * _iTunesMatchLogo;
    BRTextControl * _title;
    BRTextControl * _iTunesMatchDescription;
    float _maxWidth;
    char _showsLogo;
}

@property (nonatomic) char showsLogo;

- (void)layoutSubcontrols;
- (void)setShowsLogo:(char)arg0;
- (void)setTitleKey:(NSString *)arg0;
- (void)setDescriptionKey:(NSString *)arg0;
- (void)setMaxDescriptionWidth:(float)arg0;
- (NSDictionary *)_subtextAttributes;
- (char)showsLogo;
- (MUSICTopShelfITunesMatchView *)init;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (NSDictionary *)_titleAttributes;

@end
