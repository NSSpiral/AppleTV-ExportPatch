/* Runtime dump - BBAppearance
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAppearance : NSObject <BBUniquableObject, NSSecureCoding, NSCopying>
{
    NSString * _title;
    BBColor * _titleColor;
    BBImage * _image;
    BBColor * _color;
    int _style;
    NSString * _viewClassName;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) BBColor * titleColor;
@property (copy, nonatomic) BBImage * image;
@property (copy, nonatomic) BBColor * color;
@property (nonatomic) int style;
@property (copy, nonatomic) NSString * viewClassName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSString *)appearanceWithTitle:(NSString *)arg0;

- (void)dealloc;
- (void)setImage:(BBImage *)arg0;
- (BBAppearance *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)title;
- (BBAppearance *)copyWithZone:(struct _NSZone *)arg0;
- (BBImage *)image;
- (int)style;
- (void)setStyle:(int)arg0;
- (BBColor *)color;
- (void)setColor:(BBColor *)arg0;
- (NSString *)uniqueIdentifier;
- (BBColor *)titleColor;
- (void)setTitleColor:(BBColor *)arg0;
- (NSString *)viewClassName;
- (void)setViewClassName:(NSString *)arg0;

@end
