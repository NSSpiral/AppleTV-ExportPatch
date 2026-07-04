/* Runtime dump - BRPosterReflectionControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRPosterReflectionControl : BRControl
{
    <BRPosterImageDataSource> * _imageDataSource;
    struct ? _cornerRadius;
    struct ? _reflectionHeight;
    struct ? _imageHeight;
    float _reflectionGradientFactor;
    char _fullGradient;
}

- (BRPosterReflectionControl *)initWithImageDataSource:(<BRPosterImageDataSource> *)arg0 imageHeight:(struct ?)arg1 reflectionHeight:(struct ?)arg2 cornerRadius:(struct ?)arg3 reflectionGradientFactor:(float)arg4 fullGradient:(struct ?)arg5;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;

@end
