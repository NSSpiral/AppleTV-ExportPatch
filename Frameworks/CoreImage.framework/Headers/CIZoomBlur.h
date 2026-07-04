/* Runtime dump - CIZoomBlur
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIZoomBlur : CILinearBlur
{
    CIVector * inputCenter;
}

@property (retain, nonatomic) CIVector * inputCenter;

+ (NSArray *)customAttributes;

- (struct CGRect)regionOf:(GEORegionalResourceRegion *)arg0 destRect:(SEL)arg1 userInfo:(int)arg2;
- (id)_blur:(id)arg0 pass:(int)arg1 weightsFactor:(float)arg2;
- (CIKernel *)_kernel;
- (CIVector *)inputCenter;
- (void)setInputCenter:(CIVector *)arg0;

@end
