/* Runtime dump - BBSectionIcon
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSSet * _variants;
}

@property (copy, nonatomic) NSSet * variants;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBSectionIcon *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BBSectionIcon *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)_bestVariantForFormat:(int)arg0;
- (NSString *)_bestVariantForUIFormat:(int)arg0;
- (NSSet *)variants;
- (void)setVariants:(NSSet *)arg0;
- (void)addVariant:(VKPGenericShieldVariant *)arg0;

@end
