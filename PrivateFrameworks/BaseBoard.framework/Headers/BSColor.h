/* Runtime dump - BSColor
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>
{
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

@property (readonly, nonatomic) float red;
@property (readonly, nonatomic) float green;
@property (readonly, nonatomic) float blue;
@property (readonly, nonatomic) float alpha;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BSColor *)colorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
+ (char)supportsSecureCoding;

- (BSColor *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (float)alpha;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BSColor *)copyWithZone:(struct _NSZone *)arg0;
- (float)red;
- (float)green;
- (float)blue;
- (BSColor *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (char)isEqualToColor:(UIColor *)arg0;

@end
