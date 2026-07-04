/* Runtime dump - CAStateAddAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateAddAnimation : CAStateElement
{
    NSString * _key;
    CAAnimation * _animation;
}

@property (copy, nonatomic) NSString * key;
@property (retain, nonatomic) CAAnimation * animation;

- (void)apply:(id /* block */)arg0;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)dealloc;
- (CAStateAddAnimation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (NSString *)key;
- (CAStateAddAnimation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;
- (CAAnimation *)animation;
- (void)setAnimation:(CAAnimation *)arg0;
- (void)setKey:(NSString *)arg0;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
