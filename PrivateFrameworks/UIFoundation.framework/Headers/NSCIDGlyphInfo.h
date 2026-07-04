/* Runtime dump - NSCIDGlyphInfo
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSCIDGlyphInfo : NSGlyphInfo
{
    unsigned short _cid;
    unsigned int _collection;
}

+ (void)initialize;
+ (NSString *)glyphInfoWithCharacterIdentifier:(unsigned int)arg0 collection:(unsigned int)arg1 baseString:(NSString *)arg2;

- (NSCIDGlyphInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (unsigned int)_glyphForFont:(UIFont *)arg0 baseString:(NSString *)arg1;
- (unsigned int)characterIdentifier;
- (unsigned int)characterCollection;
- (NSCIDGlyphInfo *)initWithCharacterIdentifier:(unsigned int)arg0 collection:(unsigned int)arg1 baseString:(NSString *)arg2;

@end
