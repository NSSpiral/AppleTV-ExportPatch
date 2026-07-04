/* Runtime dump - ATVStackItemAttributes
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVStackItemAttributes : NSObject
{
    char _flipHorizontally;
    char _flipVertically;
    float _imageAlpha;
    float _borderWidth;
    UIColor * _borderColor;
    struct CGRect _imageContentsRect;
}

@property (nonatomic) float imageAlpha;
@property (nonatomic) struct CGRect imageContentsRect;
@property (nonatomic) char flipHorizontally;
@property (nonatomic) char flipVertically;
@property (nonatomic) float borderWidth;
@property (retain, nonatomic) UIColor * borderColor;

- (float)imageAlpha;
- (void)setImageAlpha:(float)arg0;
- (struct CGRect)imageContentsRect;
- (void)setImageContentsRect:(struct CGRect)arg0;
- (void)setFlipHorizontally:(char)arg0;
- (void)setFlipVertically:(char)arg0;
- (void)setBorderWidth:(float)arg0;
- (void)setBorderColor:(UIColor *)arg0;
- (float)borderWidth;
- (UIColor *)borderColor;
- (void).cxx_destruct;
- (char)flipVertically;
- (char)flipHorizontally;

@end
