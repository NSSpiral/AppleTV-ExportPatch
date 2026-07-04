/* Runtime dump - EDDifferentialStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDDifferentialStyle : NSObject <NSCopying>
{
    EDAlignmentInfo * mAlignmentInfo;
    EDBorders * mBorders;
    EDFill * mFill;
    EDFont * mFont;
    EDProtection * mProtection;
    EDContentFormat * mContentFormat;
}

@property (retain, nonatomic) EDAlignmentInfo * alignmentInfo;
@property (retain, nonatomic) EDBorders * borders;
@property (retain, nonatomic) EDFill * fill;
@property (retain, nonatomic) EDFont * font;
@property (retain, nonatomic) EDProtection * protection;
@property (retain, nonatomic) EDContentFormat * contentFormat;

+ (NSObject *)differentialStyle;

- (void)dealloc;
- (EDDifferentialStyle *)copyWithZone:(struct _NSZone *)arg0;
- (EDFill *)fill;
- (void)setFont:(EDFont *)arg0;
- (EDFont *)font;
- (void)setFill:(EDFill *)arg0;
- (EDAlignmentInfo *)alignmentInfo;
- (EDContentFormat *)contentFormat;
- (EDBorders *)borders;
- (void)setContentFormat:(EDContentFormat *)arg0;
- (void)setAlignmentInfo:(EDAlignmentInfo *)arg0;
- (void)setBorders:(EDBorders *)arg0;
- (void)setProtection:(EDProtection *)arg0;
- (EDProtection *)protection;

@end
