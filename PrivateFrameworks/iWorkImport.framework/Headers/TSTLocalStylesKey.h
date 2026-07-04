/* Runtime dump - TSTLocalStylesKey
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLocalStylesKey : NSObject <NSCopying>
{
    TSTCellStyle * mCellStyle;
    TSWPParagraphStyle * mTextStyle;
}

@property (retain) TSTCellStyle * cellStyle;
@property (retain) TSWPParagraphStyle * textStyle;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSTLocalStylesKey *)copyWithZone:(struct _NSZone *)arg0;
- (TSWPParagraphStyle *)textStyle;
- (void)setTextStyle:(TSWPParagraphStyle *)arg0;
- (TSTCellStyle *)cellStyle;
- (void)setCellStyle:(TSTCellStyle *)arg0;

@end
