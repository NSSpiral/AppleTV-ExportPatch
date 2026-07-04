/* Runtime dump - CAStateRemoveAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateRemoveAnimation : CAStateElement
{
    NSString * _key;
}

@property (copy, nonatomic) NSString * key;

- (void)apply:(id /* block */)arg0;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)dealloc;
- (CAStateRemoveAnimation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (NSString *)key;
- (CAStateRemoveAnimation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;
- (void)setKey:(NSString *)arg0;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
