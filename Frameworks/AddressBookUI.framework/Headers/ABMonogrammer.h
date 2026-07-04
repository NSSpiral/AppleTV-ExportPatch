/* Runtime dump - ABMonogrammer
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMonogrammer : NSObject
{
    UIImage * _silhouetteMonogram;
    UIImage * _questionMarkMonogram;
    UIImage * _knockoutMaskMonogram;
    float _innerBorderWidth;
    NSString * _silhouetteImageName;
    int _monogrammerStyle;
    UIColor * _tintColor;
    float _scale;
    char _textKnockout;
    float _diameter;
    UIColor * _backgroundColor;
    UIFont * _font;
    UIColor * _textColor;
}

@property (nonatomic) float diameter;
@property (retain, nonatomic) UIColor * backgroundColor;
@property (retain, nonatomic) UIFont * font;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) char textKnockout;

- (void)_clearMonogramCache;
- (NSObject *)_initialsForPerson:(void *)arg0;
- (char)hasImageOrInitialsForPerson:(void *)arg0;
- (NSData *)_copyMonogramWithImageData:(struct __CFData *)arg0;
- (id)_copyMonogramWithInitials:(id)arg0;
- (UIImage *)silhouetteMonogram;
- (NSObject *)monogramForPerson:(void *)arg0 isPersonImage:(char *)arg1;
- (NSString *)_initialsForFirstName:(NSString *)arg0 lastName:(NSString *)arg1;
- (id)_copyMonogramWithSilhouette;
- (NSObject *)_copyMonogramWithKnockoutMask;
- (UIImage *)knockoutMaskMonogram;
- (UIImage *)questionMarkMonogram;
- (ABMonogrammer *)initWithStyle:(int)arg0 diameter:(float)arg1;
- (void)monogramsAsFlatImages;
- (void)monogramsWithTint:(float)arg0;
- (void)monogramsForStark;
- (void)setDiameter:(float)arg0;
- (void)setTextKnockout:(char)arg0;
- (float)innerBorderWidth;
- (NSString *)silhouetteImageName;
- (char)hasMonogramForPerson:(void *)arg0;
- (NSObject *)monogramForPerson:(void *)arg0;
- (NSString *)monogramForPersonWithFirstName:(NSString *)arg0 lastName:(NSString *)arg1;
- (id)maskForMonogram;
- (id)defaultMonogram;
- (float)diameter;
- (char)textKnockout;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (ABMonogrammer *)init;
- (void)setTextColor:(UIColor *)arg0;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (UIColor *)textColor;

@end
