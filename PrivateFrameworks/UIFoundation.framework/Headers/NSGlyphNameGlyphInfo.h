/* Runtime dump - NSGlyphNameGlyphInfo
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo
{
    NSString * _name;
}

+ (void)initialize;

- (void)dealloc;
- (NSGlyphNameGlyphInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSGlyphNameGlyphInfo *)initWithGlyphName:(unsigned int)arg0 glyph:(unsigned int)arg1 forFont:(UIFont *)arg2 baseString:(NSString *)arg3;
- (NSString *)glyphName;

@end
