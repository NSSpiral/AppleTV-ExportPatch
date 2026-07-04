/* Runtime dump - ATVImageAndTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface ATVImageAndTextControl : BRControl
{
    char _imageOnLeft;
    ATVImage * _image;
    NSAttributedString * _text;
    float _preferredImageHeight;
    float _gapBetweenImageAndText;
    BRImageControl * _imageControl;
    BRTextControl * _textControl;
    UIColor * _imageTintColor;
    float _imageAlpha;
}

@property (retain, nonatomic) UIColor * imageTintColor;
@property (nonatomic) ATVImage * image;
@property (nonatomic) NSAttributedString * text;
@property (nonatomic) float imageAlpha;
@property (nonatomic) char imageOnLeft;
@property (nonatomic) float preferredImageHeight;
@property (nonatomic) float gapBetweenImageAndText;
@property (retain) BRImageControl * imageControl;
@property (retain) BRTextControl * textControl;

- (void)layoutSubcontrols;
- (BRTextControl *)textControl;
- (BRImageControl *)imageControl;
- (void)setTextControl:(BRTextControl *)arg0;
- (void)setImageControl:(BRImageControl *)arg0;
- (ATVImageAndTextControl *)initWithImage:(ATVImage *)arg0 text:(NSAttributedString *)arg1;
- (void)setPreferredImageHeight:(float)arg0;
- (void)_imageDidChange;
- (void)setImageOnLeft:(char)arg0;
- (void)setGapBetweenImageAndText:(float)arg0;
- (char)imageOnLeft;
- (float)preferredImageHeight;
- (float)gapBetweenImageAndText;
- (UIColor *)imageTintColor;
- (void)setImageTintColor:(UIColor *)arg0;
- (float)imageAlpha;
- (void)setImageAlpha:(float)arg0;
- (void)dealloc;
- (void)setImage:(ATVImage *)arg0;
- (ATVImageAndTextControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)text;
- (void)setText:(NSAttributedString *)arg0;
- (ATVImage *)image;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)_textDidChange;

@end
