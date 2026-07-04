/* Runtime dump - TSCECellValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellValue : NSObject
{
    int mValueType;
    TSULocale * mLocale;
}

@property (nonatomic) int valueType;
@property (retain, nonatomic) TSULocale * locale;

- (char)isEqualToCellValue:(id)arg0;
- (TSCECellValue *)initCellValueWithArchive:(struct CellValueArchive *)arg0 locale:(struct CellValueArchive)arg1;
- (void)encodeCellValueToArchive:(struct CellValueArchive *)arg0;
- (void)dealloc;
- (NSString *)displayString;
- (void)setLocale:(TSULocale *)arg0;
- (TSULocale *)locale;
- (TSCECellValue *)initWithLocale:(TSULocale *)arg0;
- (struct ?)formatStruct;
- (int)valueType;
- (void)setValueType:(int)arg0;

@end
