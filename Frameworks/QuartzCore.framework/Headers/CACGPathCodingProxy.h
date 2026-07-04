/* Runtime dump - CACGPathCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACGPathCodingProxy : CACodingProxy
{
    struct CGPath * _path;
}

- (NSObject *)decodedObject;
- (void)dealloc;
- (CACGPathCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CACGPathCodingProxy *)initWithObject:(NSObject *)arg0;

@end
