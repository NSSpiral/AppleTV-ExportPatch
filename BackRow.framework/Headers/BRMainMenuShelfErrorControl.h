/* Runtime dump - BRMainMenuShelfErrorControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRTextControl;
@interface BRMainMenuShelfErrorControl : BRControl
{
    BRTextControl * _text;
    BRTextControl * _subtext;
}

- (void)layoutSubcontrols;
- (void)setSubtext:(BRTextControl *)arg0;
- (NSDictionary *)_subtextAttributes;
- (BRTextControl *)subtext;
- (void)dealloc;
- (BRMainMenuShelfErrorControl *)init;
- (BRTextControl *)text;
- (void)setText:(BRTextControl *)arg0;
- (NSString *)accessibilityLabel;
- (NSDictionary *)_textAttributes;

@end
