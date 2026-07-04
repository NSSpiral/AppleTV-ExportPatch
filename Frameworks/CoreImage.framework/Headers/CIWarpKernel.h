/* Runtime dump - CIWarpKernel
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIWarpKernel : CIKernel

- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 inputImage:(UIImage *)arg2 arguments:(NSDictionary *)arg3;
- (CIWarpKernel *)initWithDict:(id)arg0;
- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 andArguments:(NSDictionary *)arg2;
- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 inputImage:(UIImage *)arg2 andArguments:(NSDictionary *)arg3;
- (CIWarpKernel *)initWithString:(NSString *)arg0;

@end
