/* Runtime dump - LKNSDictionaryCodingProxy
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface LKNSDictionaryCodingProxy : CACodingProxy
{
    NSDictionary * _dict;
}

- (NSObject *)decodedObject;
- (void)dealloc;
- (LKNSDictionaryCodingProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (LKNSDictionaryCodingProxy *)initWithObject:(NSObject *)arg0;

@end
