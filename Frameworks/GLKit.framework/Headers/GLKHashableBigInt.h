/* Runtime dump - GLKHashableBigInt
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKHashableBigInt : NSObject <NSCopying>
{
    struct GLKBigInt_s _bigInt;
}

- (GLKHashableBigInt *)initWithBigInt:(struct GLKBigInt_s *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (GLKHashableBigInt *)copyWithZone:(struct _NSZone *)arg0;

@end
