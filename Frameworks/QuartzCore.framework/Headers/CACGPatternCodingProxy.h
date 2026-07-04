/* Runtime dump - CACGPatternCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACGPatternCodingProxy : CACodingProxy
{
    struct CGPattern * _pattern;
}

- (NSObject *)decodedObject;
- (void)dealloc;
- (CACGPatternCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CACGPatternCodingProxy *)initWithObject:(NSObject *)arg0;

@end
