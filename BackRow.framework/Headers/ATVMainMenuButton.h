/* Runtime dump - ATVMainMenuButton
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRCursorLayer, BRHorizontalSegmentedWidget, BRImageControl, BRMarqueeTextControl, BRReflectionControl;
@interface ATVMainMenuButton : BRControl
{
    BRImageControl * _imageControl;
    BRReflectionControl * _reflectionControl;
    BRMarqueeTextControl * _titleControl;
    BRImageControl * _shadowControl;
    NSDictionary * _attributeDictionary;
    NSDictionary * _reflectionInfo;
    char _alwaysShowsTitle;
    char _shadowEnabled;
    char _reflectionEnabled;
    char _badgeUpdated;
    float _titleGap;
    BRCursorLayer * _cursorLayer;
    int _numberBadgeValue;
    BRHorizontalSegmentedWidget * _numberBadge;
}

@property (nonatomic) ATVImage * image;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) float titleGap;
@property (nonatomic) char alwaysShowsTitle;
@property (nonatomic) char shadowEnabled;
@property (nonatomic) char reflectionEnabled;
@property (retain, nonatomic) BRCursorLayer * cursorLayer;
@property (nonatomic) int numberBadgeValue;
@property (retain, nonatomic) BRHorizontalSegmentedWidget * numberBadge;
@property (nonatomic) char badgeUpdated;

- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (NSArray *)accessibilityTraitsList;
- (BRCursorLayer *)cursorLayer;
- (struct CGRect)_frameForImageControl;
- (float)titleGap;
- (char)isReflectionEnabled;
- (float)preferredCursorRadius;
- (void)setAlwaysShowsTitle:(char)arg0;
- (void)setReflectionEnabled:(char)arg0;
- (void)setCursorLayer:(BRCursorLayer *)arg0;
- (void)setNumberBadgeValue:(int)arg0;
- (void)setTitleGap:(float)arg0;
- (char)alwaysShowsTitle;
- (int)numberBadgeValue;
- (BRHorizontalSegmentedWidget *)numberBadge;
- (void)setNumberBadge:(BRHorizontalSegmentedWidget *)arg0;
- (char)badgeUpdated;
- (void)setBadgeUpdated:(char)arg0;
- (ATVMainMenuButton *)initWithLayout:(NSObject *)arg0;
- (void)setImage:(ATVImage *)arg0;
- (ATVMainMenuButton *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVImage *)image;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (UIImage *)badge;
- (void)setShadowEnabled:(char)arg0;
- (char)isShadowEnabled;
- (NSString *)accessibilitySecondaryLabel;

@end
