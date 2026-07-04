/* Runtime dump - BRHeaderControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface BRHeaderControl : BRControl
{
    BRTextControl * _title;
    BRTextControl * _subtitle;
    struct ? _subtitleSpacing;
    BRImageControl * _icon;
    float _iconHorizontalOffset;
    float _iconKerningFactor;
    float _iconScaleFactor;
    float _iconEdgeSpace;
    int _iconPosition;
    char _titleHidesIcon;
    char _titleShinksToFit;
    NSAttributedString * _originalTitle;
}

@property (nonatomic) char titleHidesIcon;
@property (nonatomic) char titleShinksToFit;
@property (retain, nonatomic) NSAttributedString * originalTitle;

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (void)setTitle:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setSubtitle:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setIcon:(BRImageControl *)arg0 horizontalOffset:(float)arg1 kerningFactor:(float)arg2;
- (void)setIcon:(BRImageControl *)arg0 position:(int)arg1 edgeSpace:(float)arg2;
- (void)setTitleShinksToFit:(char)arg0;
- (void)setIconScaleFactor:(float)arg0;
- (void)setSubtitleSpacing:(struct ?)arg0;
- (float)iconHorizontalOffset;
- (float)iconKerningFactor;
- (void)setIconHorizontalOffset:(float)arg0;
- (void)setIconKerningFactor:(float)arg0;
- (void)setOriginalTitle:(NSAttributedString *)arg0;
- (NSAttributedString *)originalTitle;
- (void)setIconPosition:(int)arg0;
- (void)setIconEdgeSpace:(float)arg0;
- (char)titleShinksToFit;
- (void)_layoutSubcontrolsForShrinkingTitle;
- (struct ?)subtitleSpacing;
- (float)iconScaleFactor;
- (int)iconPosition;
- (float)iconEdgeSpace;
- (struct CGRect)iconFrame;
- (void)setIconHidden:(char)arg0;
- (char)titleHidesIcon;
- (void)setTitleHidesIcon:(char)arg0;
- (BRImageControl *)icon;
- (void)setAttributedSubtitle:(NSAttributedString *)arg0;
- (void)dealloc;
- (BRHeaderControl *)init;
- (void)setAttributedTitle:(NSAttributedString *)arg0;
- (void)setTitle:(BRTextControl *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRTextControl *)title;
- (NSString *)accessibilityLabel;
- (BRTextControl *)subtitle;
- (void)setSubtitle:(BRTextControl *)arg0;

@end
