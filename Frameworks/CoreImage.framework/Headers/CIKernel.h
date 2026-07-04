/* Runtime dump - CIKernel
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernel : NSObject
{
    void * _priv;
}

+ (NSString *)kernelsWithString:(NSString *)arg0;
+ (NSString *)_getDictForSourceString:(NSString *)arg0 dimensionality:(int *)arg1;
+ (NSString *)kernelWithString:(NSString *)arg0;

- (void *)_internalRepresentation;
- (NSDictionary *)_initWithInternalRepresentation:(void *)arg0;
- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 arguments:(NSDictionary *)arg2;
- (CIKernel *)initWithDict:(id)arg0;
- (int)_argumentTypeAtIndex:(int)arg0;
- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 andArguments:(NSDictionary *)arg2;
- (id)applyWithExtent:(struct CGRect)arg0 roiCallback:(struct CGSize)arg1 cpuCallback:(id /* block */)arg2 colorManagement:(int)arg3 andArguments:(/* block */ id)arg4;
- (CIKernel *)init;
- (NSString *)description;
- (NSString *)name;
- (CIKernel *)initWithString:(NSString *)arg0;

@end
