/* Runtime dump - TSCENumberCellValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENumberCellValue : TSCECellValue
{
    struct TSCENumberValue * mNumberValue;
}

- (void)encodeToArchive:(struct NumberCellValueArchive *)arg0;
- (char)isEqualToCellValue:(id)arg0;
- (TSCENumberCellValue *)initWithArchive:(struct NumberCellValueArchive *)arg0 locale:(struct NumberCellValueArchive)arg1;
- (TSCENumberCellValue *)initWithNumberValue:(struct TSCENumberValue *)arg0 locale:(struct ?)arg1;
- (TSCENumberCellValue *)initWithDouble:(double)arg0 locale:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)displayString;
- (TSCENumberCellValue *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)formatStruct;
- (struct TSCENumberValue *)numberValue;

@end
