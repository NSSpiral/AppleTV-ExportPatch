/* Runtime dump - PipelineJPEGDecoder
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface PipelineJPEGDecoder : NSObject
{
    struct ? pool420;
    struct ? poolJPEG;
    struct CGSize imageSize;
    unsigned int requestedImageCount;
    int current420SurfaceCount;
    unsigned int maxJPEGSize;
}

@property unsigned int maxJPEGSize;

+ (PipelineJPEGDecoder *)_hardwareSemaphore;
+ (NSOperationQueue *)_hardwareSemaphoreWaitQueue;
+ (struct ? *)_transferSessionPool;
+ (struct __IOSurfaceAccelerator *)_createAccelerator;
+ (void)_poolSurfaceAccelerator:(struct __IOSurfaceAccelerator *)arg0;
+ (struct __IOSurfaceAccelerator *)_getPooledSurfaceAccelerator;

- (void)dealloc;
- (void)setMaxJPEGSize:(unsigned int)arg0;
- (struct __IOSurface *)_create420Surface;
- (void)_pool420Surface:(struct __IOSurface *)arg0;
- (void)_receivedMemoryWarning:(id)arg0;
- (struct __IOSurface *)_getPooledJPEGSurfaceOfSize:(unsigned int)arg0;
- (struct __IOSurface *)_getPooled420Surface;
- (void)_decodeJPEG:(id)arg0 withInputSurface:(struct __IOSurface *)arg1 toIOSurface:(struct __IOSurface *)arg2;
- (void)_poolJPEGSurface:(struct __IOSurface *)arg0;
- (struct __IOSurface *)newSurfaceFromJPEGData:(NSData *)arg0;
- (char)_remove420Surface;
- (char)_removeJPEGSurface;
- (unsigned int)maxJPEGSize;
- (struct __IOSurface *)_createJPEGSurface;
- (PipelineJPEGDecoder *)initWithSize:(struct CGSize)arg0 cachedCount:(int)arg1;
- (void)returnToPool:(struct __IOSurface *)arg0;
- (void)decodeSurfaceFromJPEGData:(NSData *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;
- (void)decodeSurfaceFromJPEGPath:(NSString *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(id /* block */)arg2;

@end
