/* Runtime dump - ATVImagePosterDecorator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVImageDecorator;
@interface ATVImagePosterDecorator : NSObject <ATVImageDecorator>
{
    char _deletterBoxImage;
    char _fullGradient;
    char _drawsFakeAntiAliasTopLine;
    float _reflectionHeight;
    float _reflectionGradientFactor;
    float _borderWidth;
    struct CGColor * _borderColor;
    struct ? _cornerRadius;
}

@property (nonatomic) char deletterBoxImage;
@property (nonatomic) float reflectionHeight;
@property (nonatomic) float reflectionGradientFactor;
@property (nonatomic) char fullGradient;
@property (nonatomic) float borderWidth;
@property (retain, nonatomic) struct CGColor * borderColor;
@property (nonatomic) struct ? cornerRadius;
@property (nonatomic) char drawsFakeAntiAliasTopLine;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setFullGradient:(char)arg0;
- (void)setReflectionGradientFactor:(float)arg0;
- (float)reflectionHeight;
- (void)setReflectionHeight:(float)arg0;
- (char)drawsFakeAntiAliasTopLine;
- (char)fullGradient;
- (float)reflectionGradientFactor;
- (char)deletterBoxImage;
- (void)setDeletterBoxImage:(char)arg0;
- (void)setDrawsFakeAntiAliasTopLine:(char)arg0;
- (struct ?)cornerRadius;
- (void)setCornerRadius:(struct ?)arg0;
- (void)setBorderWidth:(float)arg0;
- (void)setBorderColor:(struct CGColor *)arg0;
- (float)borderWidth;
- (struct CGColor *)borderColor;
- (ATVImage *)decorate:(ATVImage *)arg0 scaledToSize:(struct CGSize)arg1 crop:(char)arg2;
- (NSString *)decoratorIdentifier;

@end
