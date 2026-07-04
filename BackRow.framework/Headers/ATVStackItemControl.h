/* Runtime dump - ATVStackItemControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVStackItemControl : BRControl
{
    char _imageEdgeAntialiasingEnabled;
    ATVImage * _image;
}

@property (retain, nonatomic) ATVImage * image;
@property (nonatomic) char imageEdgeAntialiasingEnabled;

- (void)setImageEdgeAntialiasingEnabled:(char)arg0;
- (char)imageEdgeAntialiasingEnabled;
- (void)setImage:(ATVImage *)arg0;
- (ATVImage *)image;
- (void)setCenter:(struct CGPoint)arg0;
- (void).cxx_destruct;

@end
