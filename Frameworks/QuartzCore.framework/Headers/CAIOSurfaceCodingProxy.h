/* Runtime dump - CAIOSurfaceCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAIOSurfaceCodingProxy : CACodingProxy
{
    struct __IOSurface * _surface;
}

- (NSObject *)decodedObject;
- (void)dealloc;
- (CAIOSurfaceCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAIOSurfaceCodingProxy *)initWithObject:(NSObject *)arg0;

@end
