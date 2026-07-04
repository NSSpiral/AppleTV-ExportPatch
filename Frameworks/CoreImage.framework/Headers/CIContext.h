/* Runtime dump - CIContext
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIContext : NSObject
{
    struct CIContextInternal * _priv;
}

+ (NSDictionary *)clContextOptions:(NSDictionary *)arg0;
+ (NSDictionary *)glesContextOptions:(NSDictionary *)arg0;
+ (struct Context *)glesInternalContextWithEAGLContext:(struct CGColorSpace *)arg0 options:(int)arg1;
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg0 toBitmap:(void *)arg1 rowBytes:(int)arg2 bounds:(struct CGRect)arg3 format:(struct CGSize)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (NSString *)_singletonContext;
+ (struct Context *)glesInternalContextWithOptions:(struct CGColorSpace *)arg0;
+ (NSDictionary *)contextWithOptions:(NSDictionary *)arg0;
+ (NSString *)context;
+ (NSString *)contextWithEAGLContext:(NSObject *)arg0;
+ (NSString *)contextWithEAGLContext:(NSObject *)arg0 options:(NSDictionary *)arg1;

- (void)render:(id)arg0 toBitmap:(void *)arg1 rowBytes:(int)arg2 bounds:(struct CGRect)arg3 format:(struct CGSize)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (CIContext *)initWithEAGLContext:(NSObject *)arg0;
- (CIContext *)initWithEAGLContext:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (NSDictionary *)_initWithInternalRepresentation:(void *)arg0;
- (void)_gpuContextCheck;
- (struct CGColorSpace *)_colorspace;
- (void)render:(id)arg0 toCVPixelBuffer:(struct __CVBuffer *)arg1 bounds:(struct CGRect)arg2 colorSpace:(struct CGSize)arg3;
- (void)render:(id)arg0 toIOSurface:(struct __IOSurface *)arg1 bounds:(struct CGRect)arg2 colorSpace:(struct CGSize)arg3;
- (BOOL)_isEAGLBackedContext;
- (struct CGImage *)createCGImage:(UIImage *)arg0 fromRect:(struct CGRect)arg1 format:(struct CGSize)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (void)render:(id)arg0 toCVPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_insertEventMarker:(char *)arg0;
- (void)drawImage:(UIImage *)arg0 atPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2;
- (void)render:(id)arg0 toTexture:(unsigned int)arg1 bounds:(struct CGRect)arg2 colorSpace:(struct CGSize)arg3;
- (struct __IOSurface *)createIOSurface:(NSObject *)arg0;
- (struct CGImage *)createCGImage:(UIImage *)arg0 fromRect:(struct CGRect)arg1 format:(struct CGSize)arg2;
- (unsigned long)maximumInputImageSize;
- (unsigned long)maximumOutputImageSize;
- (struct CGSize)inputImageMaximumSize;
- (struct CGSize)outputImageMaximumSize;
- (id)createColorCubeDataForFilters:(id)arg0 dimension:(int)arg1;
- (void)dealloc;
- (CIContext *)init;
- (void)lock;
- (void)unlock;
- (struct CGImage *)createCGImage:(UIImage *)arg0 fromRect:(struct CGRect)arg1;
- (struct __IOSurface *)createIOSurface:(NSObject *)arg0 fromRect:(struct CGRect)arg1;
- (void)drawImage:(UIImage *)arg0 inRect:(struct CGRect)arg1 fromRect:(struct CGSize)arg2;

@end
