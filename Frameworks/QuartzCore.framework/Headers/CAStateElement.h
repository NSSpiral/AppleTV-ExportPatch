/* Runtime dump - CAStateElement
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateElement : NSObject <NSCopying, NSCoding>
{
    CALayer * _target;
    CAStateElement * _source;
}

@property (weak, nonatomic) CALayer * target;
@property (retain, nonatomic) CAStateElement * source;
@property (readonly, copy, nonatomic) NSString * keyPath;

+ (void)CAMLParserStartElement:(NSObject *)arg0;

- (id)save;
- (void)apply:(id /* block */)arg0;
- (void)CAMLParser:(NSObject *)arg0 setValue:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)encodeWithCAMLWriter:(NSObject *)arg0;
- (NSString *)CAMLTypeForKey:(NSString *)arg0;
- (void)dealloc;
- (CAStateElement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTarget:(CALayer *)arg0;
- (CAStateElement *)copyWithZone:(struct _NSZone *)arg0;
- (CALayer *)target;
- (NSString *)keyPath;
- (CAStateElement *)source;
- (void)setSource:(CAStateElement *)arg0;
- (void)foreachLayer:(id)arg0;
- (NSString *)targetName;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
