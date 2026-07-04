/* Runtime dump - CMBordersProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMBordersProperty : CMProperty
{
    OITSUColor * mBorderColor;
    OITSUColor * mBorderTopColor;
    OITSUColor * mBorderLeftColor;
    OITSUColor * mBorderBottomColor;
    OITSUColor * mBorderRightColor;
    id mBorderStyle;
    id mBorderWidth;
    int mCustomWidth;
}

+ (char)isStroked:(id)arg0;

- (NSString *)colorString;
- (CMBordersProperty *)init;
- (NSString *)styleString;
- (NSString *)cssStringForName:(NSString *)arg0;
- (CMBordersProperty *)initWithOADStroke:(OADStroke *)arg0;
- (void)adjustValues;
- (NSString *)cssString;
- (NSString *)widthString;
- (NSString *)stringFromStyleEnum:(int)arg0;
- (NSString *)stringFromWidthEnum:(int)arg0;
- (UIColor *)stringFromColor:(UIColor *)arg0;
- (char)isNoneAtLocation:(int)arg0;
- (void)setNoneAtLocation:(int)arg0;
- (void)setFromOadStroke:(id)arg0 atLocation:(int)arg1 state:(NSObject *)arg2;

@end
