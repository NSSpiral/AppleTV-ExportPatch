/* Runtime dump - TSDCABasicAnimationContextCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache
{
    char _isObjectTypeCGColor;
    id _fromValue;
    id _toValue;
}

@property (readonly, nonatomic) id fromValue;
@property (readonly, nonatomic) id toValue;
@property (readonly, nonatomic) char isObjectTypeCGColor;

- (TSDCABasicAnimationContextCache *)initWithAnimation:(NSObject *)arg0;
- (void)verifyCacheWithAnimation:(NSObject *)arg0;
- (char)isObjectTypeCGColor;
- (NSValue *)fromValue;
- (NSValue *)toValue;

@end
