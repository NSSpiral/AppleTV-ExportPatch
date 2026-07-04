/* Runtime dump - TSCEDateCellValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEDateCellValue : TSCECellValue
{
    struct TSCEDateValue * mDateValue;
}

- (void)encodeToArchive:(struct DateCellValueArchive *)arg0;
- (char)isEqualToCellValue:(id)arg0;
- (TSCEDateCellValue *)initWithArchive:(struct DateCellValueArchive *)arg0 locale:(struct DateCellValueArchive)arg1;
- (TSCEDateCellValue *)initWithDateValue:(struct TSCEDateValue *)arg0 locale:(struct ?)arg1;
- (TSCEDateCellValue *)initWithDate:(NSDate *)arg0 locale:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)displayString;
- (TSCEDateCellValue *)copyWithZone:(struct _NSZone *)arg0;
- (struct TSCEDateValue *)dateValue;
- (struct ?)formatStruct;

@end
