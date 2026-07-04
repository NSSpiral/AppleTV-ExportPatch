/* Runtime dump - NSCTGlyphInfo
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSCTGlyphInfo : NSGlyphInfo

- (unsigned long)_cfTypeID;
- (NSCTGlyphInfo *)retain;
- (void)release;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (unsigned int)_glyphForFont:(UIFont *)arg0 baseString:(NSString *)arg1;
- (NSString *)_baseString;
- (NSString *)glyphName;
- (unsigned int)characterIdentifier;
- (unsigned int)characterCollection;
- (void)finalize;

@end
