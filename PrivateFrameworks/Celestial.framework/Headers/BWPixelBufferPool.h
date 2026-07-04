/* Runtime dump - BWPixelBufferPool
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPixelBufferPool : NSObject
{
    BWVideoFormat * _videoFormat;
    unsigned long _capacity;
    NSString * _name;
    char _clientProvidesPool;
    NSDictionary * _additionalPixelBufferAttributes;
    long _pixelBufferPoolOnce;
    struct __CVPixelBufferPool * _pixelBufferPool;
    NSDictionary * _pixelBufferPoolAuxAttributes;
    long _pixelBufferPoolCreateError;
}

@property (readonly, nonatomic) unsigned long capacity;
@property (readonly, nonatomic) struct __CVPixelBufferPool * cvPixelBufferPool;
@property (readonly, nonatomic) struct __CFDictionary * cvPixelBufferPoolAuxAttributes;

+ (void)initialize;

- (struct __CVBuffer *)newPixelBuffer;
- (void)dealloc;
- (BWPixelBufferPool *)initWithVideoFormat:(BWVideoFormat *)arg0 capacity:(unsigned long)arg1 name:(NSString *)arg2;
- (void)preallocateWithCompletionHandler:(id /* block */)arg0;
- (void)prefetchWithCompletionHandler:(id /* block */)arg0;
- (long)preallocate;
- (BWPixelBufferPool *)initWithVideoFormat:(BWVideoFormat *)arg0 capacity:(unsigned long)arg1 name:(NSString *)arg2 clientProvidesPool:(char)arg3;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool *)arg0 attributes:(struct __CFDictionary *)arg1;
- (long)_ensurePool;
- (BWPixelBufferPool *)initWithVideoFormat:(BWVideoFormat *)arg0 capacity:(unsigned long)arg1 name:(NSString *)arg2 additionalPixelBufferAttributes:(NSDictionary *)arg3;
- (struct __CVPixelBufferPool *)cvPixelBufferPool;
- (struct __CFDictionary *)cvPixelBufferPoolAuxAttributes;
- (unsigned long)capacity;

@end
