/* Runtime dump - TSDCAAnimationGroupContextCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache
{
    NSArray * _animations;
    NSArray * _animationContextCaches;
}

@property (readonly, nonatomic) NSArray * animations;
@property (readonly, nonatomic) NSArray * animationContextCaches;

- (TSDCAAnimationGroupContextCache *)initWithAnimation:(NSObject *)arg0;
- (void)verifyCacheWithAnimation:(NSObject *)arg0;
- (NSArray *)animationContextCaches;
- (void)dealloc;
- (NSArray *)animations;

@end
