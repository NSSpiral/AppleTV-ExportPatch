/* Runtime dump - WDBorder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDBorder : NSObject <NSCopying>
{
    int mStyle;
    OITSUColor * mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    char mShadow;
    char mFrame;
}

- (void)dealloc;
- (WDBorder *)init;
- (void)setFrame:(char)arg0;
- (char)frame;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (WDBorder *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setStyle:(int)arg0;
- (unsigned char)width;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void)setWidth:(unsigned char)arg0;
- (char)shadow;
- (void)setShadow:(char)arg0;
- (void)setSpace:(unsigned char)arg0;
- (unsigned char)space;
- (char)isEqualToBorder:(id)arg0;
- (void)setSingleBlackBorder;
- (void)setNullBorder;
- (void)setBorder:(NSString *)arg0;

@end
