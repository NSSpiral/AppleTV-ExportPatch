/* Runtime dump - CAStateRemoveElement
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateRemoveElement : CAStateElement
{
    NSString * _keyPath;
    id _object;
}

@property (copy, nonatomic) NSString * keyPath;
@property (retain, nonatomic) id object;

- (void)apply:(id /* block */)arg0;
- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)dealloc;
- (CAStateRemoveElement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (CAStateRemoveElement *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;
- (void)setKeyPath:(NSString *)arg0;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
