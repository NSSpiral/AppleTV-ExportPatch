/* Runtime dump - NSGlyphInfo
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSGlyphInfo : NSObject <NSCopying, NSCoding>
{
    NSString * _baseString;
}

+ (void)initialize;
+ (char)supportsSecureCoding;
+ (NSGlyphInfo *)glyphInfoWithGlyph:(unsigned int)arg0 forFont:(UIFont *)arg1 baseString:(NSString *)arg2;
+ (NSGlyphInfo *)glyphInfoWithCharacterIdentifier:(unsigned int)arg0 collection:(unsigned int)arg1 baseString:(NSString *)arg2;
+ (NSGlyphInfo *)glyphInfoWithGlyphName:(unsigned int)arg0 forFont:(UIFont *)arg1 baseString:(NSString *)arg2;

- (Class)classForKeyedArchiver;
- (void)dealloc;
- (NSGlyphInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSGlyphInfo *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)_glyphForFont:(UIFont *)arg0 baseString:(NSString *)arg1;
- (NSGlyphInfo *)initWithBaseString:(NSString *)arg0;
- (NSString *)_baseString;
- (NSString *)glyphName;
- (unsigned int)characterIdentifier;
- (unsigned int)characterCollection;

@end
