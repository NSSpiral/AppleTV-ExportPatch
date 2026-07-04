/* Runtime dump - CIMotionBlur
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMotionBlur : CILinearBlur
{
    NSNumber * inputAngle;
}

@property (retain, nonatomic) NSNumber * inputAngle;

+ (NSArray *)customAttributes;

- (struct CGRect)regionOf:(GEORegionalResourceRegion *)arg0 destRect:(SEL)arg1 userInfo:(int)arg2;
- (id)_blur:(id)arg0 pass:(int)arg1 weightsFactor:(float)arg2;
- (CIKernel *)_kernel;
- (NSNumber *)inputAngle;
- (void)setInputAngle:(NSNumber *)arg0;

@end
