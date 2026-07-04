/* Runtime dump - ATVImagePreviewView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRAsyncImageControl, BRReflectionControl, BRTextControl;
@interface ATVImagePreviewView : BRControl
{
    BRAsyncImageControl * image;
    BRTextControl * instructionsLabel;
    struct ? _textWidth;
    struct ? _textYOffset;
    BRReflectionControl * _reflection;
    struct CGPoint imageOffset;
    struct CGSize imageScale;
}

@property (nonatomic) struct ? textWidth;
@property (nonatomic) float reflectionAmount;
@property (nonatomic) struct ? textYOffset;
@property (retain, nonatomic) BRAsyncImageControl * image;
@property (retain, nonatomic) BRReflectionControl * reflection;
@property (retain, nonatomic) BRTextControl * instructionsLabel;
@property (nonatomic) struct CGPoint imageOffset;
@property (nonatomic) struct CGSize imageScale;

- (void)layoutSubcontrols;
- (void)setReflectionAmount:(float)arg0;
- (float)reflectionAmount;
- (void)setTextYOffset:(struct ?)arg0;
- (void)setInstructionText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)_imageLoaded:(id)arg0;
- (BRTextControl *)instructionsLabel;
- (struct ?)textYOffset;
- (void)setImageProxy:(NSObject *)arg0 withOffset:(struct CGPoint)arg1 scale:(struct CGSize)arg2;
- (void)setInstructionsLabel:(BRTextControl *)arg0;
- (void)dealloc;
- (void)setImage:(BRAsyncImageControl *)arg0;
- (ATVImagePreviewView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRAsyncImageControl *)image;
- (NSString *)accessibilityLabel;
- (void)setTextWidth:(struct ?)arg0;
- (void).cxx_destruct;
- (struct CGPoint)imageOffset;
- (void)setImageOffset:(struct CGPoint)arg0;
- (struct ?)textWidth;
- (void)setImageProxy:(NSObject *)arg0;
- (BRReflectionControl *)reflection;
- (void)setReflection:(BRReflectionControl *)arg0;
- (void)setImageScale:(struct CGSize)arg0;
- (struct CGSize)imageScale;

@end
