/* Runtime dump - NSShadow
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSShadow : NSObject <NSCopying, NSCoding>
{
    unsigned int _shadowFlags;
    struct CGSize _shadowOffset;
    float _shadowBlurRadius;
    NSColor * _shadowColor;
}

@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) float shadowBlurRadius;
@property (retain, nonatomic) id shadowColor;

+ (void)initialize;
+ (NSShadow *)shadow;
+ (NSShadow *)defaultShadowColor;

- (void)dealloc;
- (NSShadow *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSShadow *)copyWithZone:(struct _NSZone *)arg0;
- (void)setShadowColor:(NSColor *)arg0;
- (void)setShadowOffset:(struct CGSize)arg0;
- (struct CGSize)shadowOffset;
- (NSColor *)shadowColor;
- (void)setShadowBlurRadius:(float)arg0;
- (float)shadowBlurRadius;
- (NSShadow *)initWithShadow:(TSDShadow *)arg0;

@end
