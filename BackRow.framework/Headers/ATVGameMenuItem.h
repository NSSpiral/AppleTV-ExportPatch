/* Runtime dump - ATVGameMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVGameMenuItemContents, BRControl;
@interface ATVGameMenuItem : BRControl
{
    ATVGameMenuItemContents * _contents;
}

@property (retain) <BRImageProxy> * leftImageProxy;
@property (retain) ATVImage * leftImage;
@property (retain) ATVImage * rightImage;
@property (retain) <BRImageProxy> * rightImageProxy;
@property (copy) NSString * imageSeparatorText;
@property (copy) NSString * text;
@property (copy) NSString * detailedText;
@property (copy) NSString * rightJustifiedText;
@property char dimmed;

+ (struct CGRect)contentFrameForControl:(BRControl *)arg0;

- (NSString *)rightJustifiedText;
- (void)setRightJustifiedText:(NSString *)arg0;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (struct CGRect)focusCursorFrame;
- (void)setDetailedText:(NSString *)arg0;
- (float)accessibilityDelayForScreenContent;
- (<BRImageProxy> *)leftImageProxy;
- (void)setLeftImageProxy:(<BRImageProxy> *)arg0;
- (ATVImage *)rightImage;
- (void)setRightImage:(ATVImage *)arg0;
- (<BRImageProxy> *)rightImageProxy;
- (void)setRightImageProxy:(<BRImageProxy> *)arg0;
- (NSString *)imageSeparatorText;
- (void)setImageSeparatorText:(NSString *)arg0;
- (NSString *)detailedText;
- (NSArray *)accessibilityTraitsList;
- (void)setLeftImage:(ATVImage *)arg0;
- (ATVImage *)leftImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVGameMenuItem *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;
- (void)setDimmed:(char)arg0;
- (char)dimmed;

@end
