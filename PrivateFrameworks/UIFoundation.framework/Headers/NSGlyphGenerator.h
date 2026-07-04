/* Runtime dump - NSGlyphGenerator
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSGlyphGenerator : NSObject

+ (void)initialize;
+ (NSGlyphGenerator *)defaultGlyphGenerator;
+ (NSGlyphGenerator *)sharedGlyphGenerator;

- (void)generateGlyphsForGlyphStorage:(id)arg0 desiredNumberOfCharacters:(unsigned int)arg1 glyphIndex:(unsigned int *)arg2 characterIndex:(unsigned int *)arg3;

@end
