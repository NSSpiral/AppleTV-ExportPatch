/* Runtime dump - CAStateSetValue
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateSetValue : CAStateElement
{
    NSString * _keyPath;
    id _value;
}

@property (copy, nonatomic) NSString * keyPath;
@property (retain, nonatomic) id value;

- (void)apply:(id /* block */)arg0;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)dealloc;
- (CAStateSetValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (CAStateSetValue *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)keyPath;
- (void)setKeyPath:(NSString *)arg0;
- (void)foreachLayer:(id)arg0;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
