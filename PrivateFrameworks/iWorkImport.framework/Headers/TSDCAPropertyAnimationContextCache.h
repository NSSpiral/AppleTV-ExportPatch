/* Runtime dump - TSDCAPropertyAnimationContextCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache
{
    char _isAnimationKeyTypeOfRotation;
    char _isAnimationKeyHidden;
    char _isAnimationKeyDoubleSided;
    NSString * _keyPath;
}

@property (readonly, nonatomic) NSString * keyPath;
@property (readonly, nonatomic) char isAnimationKeyTypeOfRotation;
@property (readonly, nonatomic) char isAnimationKeyHidden;
@property (readonly, nonatomic) char isAnimationKeyDoubleSided;

- (TSDCAPropertyAnimationContextCache *)initWithAnimation:(NSObject *)arg0;
- (void)verifyCacheWithAnimation:(NSObject *)arg0;
- (char)isAnimationKeyTypeOfRotation;
- (char)isAnimationKeyHidden;
- (char)isAnimationKeyDoubleSided;
- (NSString *)keyPath;

@end
