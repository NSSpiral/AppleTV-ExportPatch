/* Runtime dump - BRResumeMenuControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent, BRImageControl, BRListControl, BRTextControl;
@interface BRResumeMenuControl : BRControl
{
    BRTextControl * _title;
    BRTextControl * _footnote;
    BRListControl * _resumeMenu;
    BRImageControl * _blurControl;
    float _blurOversizeFactor;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (struct CGColor *)blurControlBackgroundColor;
- (void)setBlurOversizeFactor:(float)arg0;
- (void)dealloc;
- (void)setImage:(ATVImage *)arg0;
- (BRResumeMenuControl *)init;
- (void)setTitle:(BRTextControl *)arg0;
- (BRTextControl *)title;
- (CPList *)list;
- (BRTextControl *)footnote;
- (void)setFootnote:(BRTextControl *)arg0;

@end
