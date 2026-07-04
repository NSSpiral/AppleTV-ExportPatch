/* Runtime dump - BBColor
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBColor : NSObject <BBUniquableObject, NSSecureCoding, NSCopying>
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

@property (readonly, copy, nonatomic) UIColor * uiColor;
@property (readonly, nonatomic) float red;
@property (readonly, nonatomic) float green;
@property (readonly, nonatomic) float blue;
@property (readonly, nonatomic) float alpha;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BBColor *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (char)supportsSecureCoding;

- (UIColor *)uiColor;
- (void)dealloc;
- (BBColor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (float)alpha;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (BBColor *)copyWithZone:(struct _NSZone *)arg0;
- (float)red;
- (float)green;
- (float)blue;
- (NSString *)uniqueIdentifier;
- (BBColor *)_initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;

@end
