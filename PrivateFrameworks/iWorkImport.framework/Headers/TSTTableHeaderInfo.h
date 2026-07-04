/* Runtime dump - TSTTableHeaderInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableHeaderInfo : NSObject
{
    TSTCellStyle * mCellStyle;
    TSWPParagraphStyle * mTextStyle;
    float mSize;
    unsigned char mHidingState;
    unsigned short mNumberOfCells;
}

@property (retain, nonatomic) TSTCellStyle * cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle * textStyle;
@property (nonatomic) float size;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned short numberOfCells;

- (void)setHidingState:(unsigned char)arg0;
- (unsigned char)hidingState;
- (unsigned short)numberOfCells;
- (void)setNumberOfCells:(unsigned short)arg0;
- (void)dealloc;
- (float)size;
- (NSString *)description;
- (void)setSize:(float)arg0;
- (TSWPParagraphStyle *)textStyle;
- (void)setTextStyle:(TSWPParagraphStyle *)arg0;
- (TSTCellStyle *)cellStyle;
- (void)setCellStyle:(TSTCellStyle *)arg0;

@end
