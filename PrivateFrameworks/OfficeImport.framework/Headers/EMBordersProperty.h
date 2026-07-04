/* Runtime dump - EMBordersProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMBordersProperty : CMProperty <NSCopying>
{
    EDBorders * edValue;
    OITSUColor * mBorderColor;
    OITSUColor * mBorderTopColor;
    OITSUColor * mBorderLeftColor;
    OITSUColor * mBorderBottomColor;
    OITSUColor * mBorderRightColor;
    id mBorderStyle;
    id mBorderWidth;
}

- (NSString *)colorString;
- (char)isEqual:(NSObject *)arg0;
- (EMBordersProperty *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)styleString;
- (UIColor *)borderColor;
- (NSString *)cssStringForName:(NSString *)arg0;
- (EMBordersProperty *)initWithOADStroke:(OADStroke *)arg0;
- (NSString *)cssString;
- (NSString *)widthString;
- (NSString *)stringFromStyleEnum:(int)arg0;
- (NSString *)stringFromWidthEnum:(int)arg0;
- (UIColor *)stringFromColor:(UIColor *)arg0;
- (char)isNoneAtLocation:(int)arg0;
- (void)setNoneAtLocation:(int)arg0;
- (char)hasSameColorsAs:(id)arg0;
- (char)hasSameStylesAs:(id)arg0;
- (char)hasSameWidthsAs:(id)arg0;
- (void)setBorderStyleAndWidth:(int)arg0 location:(unsigned int)arg1;
- (EMBordersProperty *)initWithEDBorders:(EDBorders *)arg0;
- (int *)borderStyles;
- (int *)borderWidths;
- (NSNumber *)styleHashNumber;
- (NSNumber *)widthHashNumber;

@end
