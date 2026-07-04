/* Runtime dump - ATVStampView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRTextControl;
@interface ATVStampView : BRControl
{
    <BRImageProxy> * _imageProxy;
    NSAttributedString * _text;
    struct ? _textLeftMargin;
    BRTextControl * _textControl;
    BRAsyncImageControl * _imageControl;
    NSURL * _imageURL;
    struct ? _preferredImageSize;
}

@property (retain, nonatomic) <BRImageProxy> * imageProxy;
@property (retain, nonatomic) NSAttributedString * text;
@property (nonatomic) struct ? textLeftMargin;
@property (nonatomic) struct ? preferredImageSize;
@property (retain, nonatomic) BRTextControl * textControl;
@property (retain, nonatomic) BRAsyncImageControl * imageControl;
@property (retain, nonatomic) NSURL * imageURL;

+ (ATVStampView *)defaultTextAttributes;

- (void)layoutSubcontrols;
- (BRTextControl *)textControl;
- (BRAsyncImageControl *)imageControl;
- (struct ?)preferredImageSize;
- (struct ?)textLeftMargin;
- (void)setTextLeftMargin:(struct ?)arg0;
- (void)setPreferredImageSize:(struct ?)arg0;
- (void)setTextControl:(BRTextControl *)arg0;
- (void)setImageControl:(BRAsyncImageControl *)arg0;
- (ATVStampView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)text;
- (void)setText:(NSAttributedString *)arg0;
- (struct CGSize)imageSize;
- (void).cxx_destruct;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (void)setImageURL:(NSURL *)arg0;
- (NSURL *)imageURL;

@end
