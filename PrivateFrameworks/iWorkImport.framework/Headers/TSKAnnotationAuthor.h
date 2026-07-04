/* Runtime dump - TSKAnnotationAuthor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnnotationAuthor : TSPObject
{
    NSString * mName;
    TSUColor * mColor;
}

@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) TSUColor * storageColor;
@property (readonly, nonatomic) TSUColor * popoverAuthorLabelColor;
@property (readonly, nonatomic) TSUColor * popoverButtonTintColor;
@property (readonly, nonatomic) TSUColor * textMarkupColor;
@property (readonly, nonatomic) TSUColor * textHighlightColor;
@property (readonly, nonatomic) TSUColor * cellViolatorColor;
@property (readonly, nonatomic) TSUColor * flagStrokeColor;
@property (readonly, nonatomic) TSUColor * flagPressedColor;
@property (readonly, nonatomic) TSUColor * changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor * flagFillColor;
@property (readonly, nonatomic) TSUColor * popoverColor;
@property (readonly, nonatomic) TSUColor * sidebarDecoratorLineColor;
@property (readonly, nonatomic) TSUColor * sidebarHoverColor;
@property (readonly, nonatomic) TSUColor * sidebarSelectedColor;
@property (readonly, nonatomic) TSUColor * sidebarUsernameColor;
@property (readonly, nonatomic) TSUColor * sidebarChangeBarColor;
@property (readonly, nonatomic) TSUColor * sidebarSelectedBorderColor;
@property (readonly, nonatomic) TSUColor * gradientStartColor;
@property (readonly, nonatomic) TSUColor * gradientEndColor;
@property (readonly, nonatomic) TSUColor * indicatorLightColor;
@property (readonly, nonatomic) TSUColor * indicatorDarkColor;
@property (readonly, nonatomic) NSString * authorColorName;
@property (readonly, nonatomic) NSString * appearanceColorForAuthor;
@property (readonly, nonatomic) NSString * menuSwatchColorForAuthor;
@property (readonly, nonatomic) char showAuthorComments;

+ (NSString *)normalizedAuthorNameForAuthorName:(NSString *)arg0;
+ (unsigned int)presetColorCount;
+ (NSObject *)authorStorageColorForIndex:(unsigned int)arg0;
+ (unsigned int)p_authorColorIndexWithColor:(UIColor *)arg0 forIndicator:(char)arg1;
+ (NSObject *)authorColorForIndex:(unsigned int)arg0 forKey:(NSString *)arg1;
+ (NSObject *)authorTextMarkupColorForIndex:(unsigned int)arg0;
+ (NSObject *)indicatorLightColorForIndex:(unsigned int)arg0;
+ (NSObject *)indicatorDarkColorForIndex:(unsigned int)arg0;
+ (NSObject *)authorColorNameForIndex:(unsigned int)arg0;
+ (NSObject *)authorColorAppearanceNameForIndex:(unsigned int)arg0;
+ (NSObject *)authorMenuSwatchColorForIndex:(unsigned int)arg0;
+ (UIColor *)indicatorDarkColorByLightColor:(UIColor *)arg0;
+ (TSKAnnotationAuthor *)defaultAuthorName;

- (TSKAnnotationAuthor *)initFromUnarchiver:(NSObject *)arg0;
- (TSPObject *)componentRootObject;
- (char)allowsImplicitComponentOwnership;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSUColor *)storageColor;
- (void)setStorageColor:(TSUColor *)arg0;
- (TSKAnnotationAuthor *)initWithContext:(NSObject *)arg0 name:(NSString *)arg1 color:(UIColor *)arg2;
- (unsigned int)p_authorColorIndex;
- (TSUColor *)popoverButtonTintColor;
- (TSUColor *)popoverAuthorLabelColor;
- (TSUColor *)textMarkupColor;
- (TSUColor *)textHighlightColor;
- (TSUColor *)cellViolatorColor;
- (TSUColor *)flagStrokeColor;
- (TSUColor *)flagPressedColor;
- (TSUColor *)changeAdornmentsColor;
- (TSUColor *)flagFillColor;
- (TSUColor *)popoverColor;
- (TSUColor *)sidebarDecoratorLineColor;
- (TSUColor *)sidebarHoverColor;
- (TSUColor *)sidebarSelectedColor;
- (TSUColor *)sidebarUsernameColor;
- (TSUColor *)sidebarChangeBarColor;
- (TSUColor *)sidebarSelectedBorderColor;
- (TSUColor *)gradientStartColor;
- (TSUColor *)gradientEndColor;
- (TSUColor *)indicatorLightColor;
- (TSUColor *)indicatorDarkColor;
- (NSString *)authorColorName;
- (NSString *)appearanceColorForAuthor;
- (NSString *)menuSwatchColorForAuthor;
- (char)showAuthorComments;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;

@end
