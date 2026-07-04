/* Runtime dump - ATVGameMenuItemContents
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVGameMenuItemContents : BRControl
{
    char _waitingForImages;
    char _dimmed;
    char _highlightText;
    ATVImage * _leftImage;
    <BRImageProxy> * _leftImageProxy;
    ATVImage * _rightImage;
    <BRImageProxy> * _rightImageProxy;
    NSString * _imageSeparatorText;
    NSString * _text;
    NSString * _detailedText;
    NSString * _rightJustifiedText;
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
@property char highlightText;

- (NSString *)rightJustifiedText;
- (void)setRightJustifiedText:(NSString *)arg0;
- (void)setDetailedText:(NSString *)arg0;
- (void)setHighlightText:(char)arg0;
- (<BRImageProxy> *)leftImageProxy;
- (void)setLeftImageProxy:(<BRImageProxy> *)arg0;
- (ATVImage *)rightImage;
- (void)setRightImage:(ATVImage *)arg0;
- (<BRImageProxy> *)rightImageProxy;
- (void)setRightImageProxy:(<BRImageProxy> *)arg0;
- (NSString *)imageSeparatorText;
- (void)setImageSeparatorText:(NSString *)arg0;
- (NSString *)detailedText;
- (void)_setWaitingForImages:(char)arg0;
- (void)_drawText:(NSString *)arg0 inFrame:(struct CGRect)arg1 clippingFrame:(struct CGSize)arg2 context:(NSObject *)arg3;
- (void)_getRightJustifiedAttributed:(id *)arg0 textRect:(struct CGRect *)arg1;
- (char)highlightText;
- (void)_imageLoadSucceeded:(id)arg0;
- (void)_imageLoadFailed:(id)arg0;
- (void)setLeftImage:(ATVImage *)arg0;
- (ATVImage *)leftImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (ATVGameMenuItemContents *)init;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setDimmed:(char)arg0;
- (char)dimmed;

@end
