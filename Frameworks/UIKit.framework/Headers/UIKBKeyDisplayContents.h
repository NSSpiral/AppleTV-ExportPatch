/* Runtime dump - UIKBKeyDisplayContents
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyDisplayContents : NSObject
{
    char _isCustomGlyph;
    char _secondaryIsCustomGlyph;
    char _fillPath;
    char _force1xImages;
    char _stringKeycapOverImage;
    NSString * _displayString;
    NSString * _displayStringImage;
    NSString * _secondaryDisplayStringImage;
    NSString * _secondaryDisplayString;
    NSArray * _variantDisplayContents;
    NSArray * _highlightedVariantsList;
    int _displayPathType;
    UIKBKeyDisplayContents * _fallbackContents;
}

@property (retain, nonatomic) NSString * displayString;
@property (retain, nonatomic) NSString * displayStringImage;
@property (retain, nonatomic) NSString * secondaryDisplayStringImage;
@property (nonatomic) char isCustomGlyph;
@property (retain, nonatomic) NSString * secondaryDisplayString;
@property (nonatomic) char secondaryIsCustomGlyph;
@property (retain, nonatomic) NSArray * variantDisplayContents;
@property (retain, nonatomic) NSArray * highlightedVariantsList;
@property (nonatomic) int displayPathType;
@property (nonatomic) char fillPath;
@property (nonatomic) char force1xImages;
@property (nonatomic) char stringKeycapOverImage;
@property (retain, nonatomic) UIKBKeyDisplayContents * fallbackContents;

+ (UIKBKeyDisplayContents *)displayContents;

- (void)dealloc;
- (NSString *)description;
- (void)setDisplayString:(NSString *)arg0;
- (NSString *)displayString;
- (void)setVariantDisplayContents:(NSArray *)arg0;
- (void)setHighlightedVariantsList:(NSArray *)arg0;
- (void)setDisplayPathType:(int)arg0;
- (void)setDisplayStringImage:(NSString *)arg0;
- (void)setSecondaryDisplayStringImage:(NSString *)arg0;
- (void)setIsCustomGlyph:(char)arg0;
- (NSString *)secondaryDisplayString;
- (NSArray *)highlightedVariantsList;
- (NSString *)displayStringImage;
- (void)setForce1xImages:(char)arg0;
- (char)isCustomGlyph;
- (char)secondaryIsCustomGlyph;
- (NSArray *)variantDisplayContents;
- (int)displayPathType;
- (char)fillPath;
- (char)force1xImages;
- (UIKBKeyDisplayContents *)fallbackContents;
- (char)stringKeycapOverImage;
- (NSString *)secondaryDisplayStringImage;
- (void)setSecondaryDisplayString:(NSString *)arg0;
- (void)setSecondaryIsCustomGlyph:(char)arg0;
- (void)setFillPath:(char)arg0;
- (void)setFallbackContents:(UIKBKeyDisplayContents *)arg0;
- (void)setStringKeycapOverImage:(char)arg0;

@end
