/* Runtime dump - LKCGImageCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface LKCGImageCodingProxy : CACodingProxy
{
    struct CGImage * _image;
}

- (NSObject *)decodedObject;
- (void)dealloc;
- (LKCGImageCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (LKCGImageCodingProxy *)initWithObject:(NSObject *)arg0;

@end
