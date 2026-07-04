/* Runtime dump - FigIOSurfaceData
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigIOSurfaceData : NSData
{
    struct __IOSurface * _surface;
    unsigned int _length;
    void * _bytes;
}

+ (void)initialize;
+ (NSObject *)dataWithIOSurface:(struct __IOSurface *)arg0;
+ (NSObject *)dataWithIOSurface:(struct __IOSurface *)arg0 length:(unsigned int)arg1;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (FigIOSurfaceData *)copyWithZone:(struct _NSZone *)arg0;
- (FigIOSurfaceData *)initWithIOSurface:(struct __IOSurface *)arg0;
- (FigIOSurfaceData *)initWithIOSurface:(struct __IOSurface *)arg0 length:(unsigned int)arg1;

@end
