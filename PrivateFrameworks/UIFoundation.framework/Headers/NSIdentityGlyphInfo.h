/* Runtime dump - NSIdentityGlyphInfo
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSIdentityGlyphInfo : NSGlyphInfo
{
    NSFont * _font;
    unsigned int _glyph;
}

+ (void)initialize;
+ (NSIdentityGlyphInfo *)glyphInfoWithGlyph:(unsigned int)arg0 forFont:(UIFont *)arg1 baseString:(NSString *)arg2;

- (void)dealloc;
- (NSIdentityGlyphInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (UIFont *)_font;
- (unsigned int)_glyphForFont:(UIFont *)arg0 baseString:(NSString *)arg1;
- (NSIdentityGlyphInfo *)initWithGlyph:(unsigned int)arg0 forFont:(UIFont *)arg1 baseString:(NSString *)arg2;
- (unsigned int)_glyph;

@end
