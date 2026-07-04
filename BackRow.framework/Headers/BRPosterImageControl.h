/* Runtime dump - BRPosterImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRPosterImageControl : BRControl
{
    <BRPosterImageDataSource> * _imageDataSource;
    struct ? _cornerRadius;
    float _posterBorderWidth;
    struct CGColor * _posterBorderColor;
}

- (BRPosterImageControl *)initWithImageDataSource:(<BRPosterImageDataSource> *)arg0 cornerRadius:(struct ?)arg1 borderWidth:(float)arg2 borderColor:(float)arg3;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;

@end
