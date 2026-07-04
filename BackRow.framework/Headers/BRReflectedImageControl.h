/* Runtime dump - BRReflectedImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRReflectionControl;
@interface BRReflectedImageControl : BRControl
{
    BRImageControl * _image;
    BRReflectionControl * _reflection;
    float _offset;
}

- (void)layoutSubcontrols;
- (void)setImageAsContents:(id)arg0;
- (void)setReflectionOffset:(float)arg0;
- (void)setAutomaticDownsample:(char)arg0;
- (void)setImageBorderColor:(struct CGColor *)arg0;
- (void)setImageBorderWidth:(float)arg0;
- (char)automaticDownsample;
- (struct CGRect)reflectedImageFrameForImageFrame:(NSObject *)arg0 reflectionAmount:(SEL)arg1;
- (float)reflectionOffset;
- (struct CGColor *)imageBorderColor;
- (void)dealloc;
- (void)setImage:(BRImageControl *)arg0;
- (BRReflectedImageControl *)init;
- (BRImageControl *)image;
- (float)imageBorderWidth;

@end
