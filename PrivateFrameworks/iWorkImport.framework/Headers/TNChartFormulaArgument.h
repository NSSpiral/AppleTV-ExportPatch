/* Runtime dump - TNChartFormulaArgument
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaArgument : NSObject
{
    int mType;
    void * mData;
}

@property (readonly) int type;
@property (readonly) char isCellReference;
@property (readonly) char isRangeReference;
@property (readonly) char isStaticValue;
@property (readonly) char isReference;
@property (readonly) struct ? cellReference;
@property (readonly) struct ? rangeReference;
@property (readonly) struct TSCEValue * staticValue;

- (struct ?)rangeReference;
- (TNChartFormulaArgument *)initWithRangeReference:(struct ?)arg0;
- (TNChartFormulaArgument *)initWithCellReference:(struct ?)arg0;
- (char)isReference;
- (char)isStaticValue;
- (struct TSCEValue *)staticValue;
- (struct ?)cellReference;
- (char)isRangeReference;
- (TNChartFormulaArgument *)initWithStaticValue:(struct TSCEValue *)arg0;
- (void)dealloc;
- (NSString *)description;
- (int)type;
- (char)isCellReference;

@end
