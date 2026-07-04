/* Runtime dump - LKCGColorCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface LKCGColorCodingProxy : CACodingProxy
{
    struct CGColor * _color;
}

- (NSObject *)decodedObject;
- (void)dealloc;
- (LKCGColorCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (LKCGColorCodingProxy *)initWithObject:(NSObject *)arg0;

@end
