/* Runtime dump - MPArtworkColorAnalysis
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    UIColor * _backgroundColor;
    char _backgroundColorLight;
    UIColor * _primaryTextColor;
    char _primaryTextColorLight;
    UIColor * _secondaryTextColor;
    char _secondaryTextColorLight;
}

@property (readonly, nonatomic) UIColor * backgroundColor;
@property (readonly, nonatomic) char backgroundColorLight;
@property (readonly, nonatomic) UIColor * primaryTextColor;
@property (readonly, nonatomic) char primaryTextColorLight;
@property (readonly, nonatomic) UIColor * secondaryTextColor;
@property (readonly, nonatomic) char secondaryTextColorLight;

+ (char)supportsSecureCoding;

- (char)isBackgroundColorLight;
- (UIColor *)primaryTextColor;
- (char)isPrimaryTextColorLight;
- (UIColor *)secondaryTextColor;
- (char)isSecondaryTextColorLight;
- (NSObject *)_copyWithClass:(Class)arg0;
- (MPArtworkColorAnalysis *)initWithCoder:(NSCoder *)arg0;
- (UIColor *)backgroundColor;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (MPArtworkColorAnalysis *)copyWithZone:(struct _NSZone *)arg0;
- (MPArtworkColorAnalysis *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
