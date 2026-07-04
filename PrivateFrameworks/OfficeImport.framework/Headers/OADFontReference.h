/* Runtime dump - OADFontReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADFontReference : NSObject <NSCopying>
{
    int mIndex;
    OADColor * mColor;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OADFontReference *)copyWithZone:(struct _NSZone *)arg0;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (int)index;
- (void)setIndex:(int)arg0;
- (void)applyToParagraphProperties:(NSDictionary *)arg0;

@end
