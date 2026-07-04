/* Runtime dump - CIColorKernel
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorKernel : CIKernel

- (id)applyWithExtent:(struct CGRect)arg0 arguments:(struct CGSize)arg1;
- (CIColorKernel *)initWithDict:(id)arg0;
- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 andArguments:(NSDictionary *)arg2;
- (id)applyWithExtent:(struct CGRect)arg0 andArguments:(struct CGSize)arg1;
- (CIColorKernel *)initWithString:(NSString *)arg0;

@end
