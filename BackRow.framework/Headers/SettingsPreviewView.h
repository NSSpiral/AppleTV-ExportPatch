/* Runtime dump - SettingsPreviewView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRImageControl, BRProgressBarWidget, BRReflectionControl, BRTextControl;
@interface SettingsPreviewView : BRControl
{
    BRAsyncImageControl * _image;
    BRReflectionControl * _imageReflectionControl;
    BRImageControl * _overlayControl;
    BRReflectionControl * _overlayReflectionControl;
    BRTextControl * _progressLabel;
    BRProgressBarWidget * _progressBar;
    struct CGPoint _imageOffset;
    struct CGSize _imageScale;
    struct CGPoint _overlayOffset;
    struct CGSize _overlayScale;
    struct ? _previewImageWidth;
    struct ? _previewImageOriginX;
    BRTextControl * _instructionsLabel;
    struct ? _instructionTextWidthIncreaseAmount;
}

@property (readonly, retain, nonatomic) BRTextControl * instructionsLabel;
@property (readonly, retain, nonatomic) BRAsyncImageControl * image;
@property (nonatomic) struct ? previewImageWidth;
@property (nonatomic) struct ? previewImageOriginX;
@property (nonatomic) struct ? instructionTextWidthIncreaseAmount;

+ (SettingsPreviewView *)defaultProductImageProxy;

- (void)layoutSubcontrols;
- (void)setInstructionText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)_imageLoaded:(id)arg0;
- (BRTextControl *)instructionsLabel;
- (void)setImageProxy:(NSObject *)arg0 withOffset:(struct CGPoint)arg1 scale:(struct CGSize)arg2;
- (void)setProgressLabel:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setProgressHidden:(char)arg0;
- (void)setImageReflectionAmount:(float)arg0;
- (void)setPreviewImageWidth:(struct ?)arg0;
- (void)setPreviewImageOriginX:(struct ?)arg0;
- (void)setInstructionTextWidthIncreaseAmount:(struct ?)arg0;
- (void)setOverlayReflectionAmount:(float)arg0;
- (struct ?)previewImageWidth;
- (struct ?)previewImageOriginX;
- (struct ?)instructionTextWidthIncreaseAmount;
- (void)setImage:(BRAsyncImageControl *)arg0 withOffset:(struct CGPoint)arg1 scale:(struct CGSize)arg2;
- (void)setOverlayImage:(ATVImage *)arg0 withOffset:(struct CGPoint)arg1 scale:(struct CGSize)arg2;
- (char)isProgressHidden;
- (BRTextControl *)progressLabel;
- (void)dealloc;
- (SettingsPreviewView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRAsyncImageControl *)image;
- (NSString *)accessibilityLabel;
- (NSNumber *)progress;
- (void).cxx_destruct;
- (void)setImageProxy:(NSObject *)arg0;
- (void)setProgressPercentage:(float)arg0;

@end
