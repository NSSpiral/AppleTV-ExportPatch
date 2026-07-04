/* Runtime dump - PLIOSurfaceData
 * Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface PLIOSurfaceData : NSData
{
    struct __IOSurface * _surface;
    void * _bytes;
    unsigned int _length;
}

+ (NSObject *)dataWithIOSurface:(void *)arg0;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (PLIOSurfaceData *)copyWithZone:(struct _NSZone *)arg0;
- (PLIOSurfaceData *)initWithIOSurface:(void *)arg0;
- (PLIOSurfaceData *)initWithIOSurface:(void *)arg0 length:(unsigned int)arg1;

@end
