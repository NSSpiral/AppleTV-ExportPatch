/* Runtime dump - LKNSValueCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface LKNSValueCodingProxy : CACodingProxy
{
    int _kind;
    id _u;
}

- (NSObject *)decodedObject;
- (LKNSValueCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_construct;
- (LKNSValueCodingProxy *)initWithObject:(NSObject *)arg0;

@end
