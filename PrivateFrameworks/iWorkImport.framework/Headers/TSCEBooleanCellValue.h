/* Runtime dump - TSCEBooleanCellValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEBooleanCellValue : TSCECellValue
{
    struct TSCEBooleanValue * mBooleanValue;
}

- (void)encodeToArchive:(struct BooleanCellValueArchive *)arg0;
- (char)isEqualToCellValue:(id)arg0;
- (TSCEBooleanCellValue *)initWithArchive:(struct BooleanCellValueArchive *)arg0 locale:(struct BooleanCellValueArchive)arg1;
- (TSCEBooleanCellValue *)initWithBooleanValue:(struct TSCEBooleanValue *)arg0 locale:(NSObject *)arg1;
- (TSCEBooleanCellValue *)initWithBoolean:(char)arg0 locale:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)displayString;
- (TSCEBooleanCellValue *)copyWithZone:(struct _NSZone *)arg0;
- (struct ?)formatStruct;
- (struct TSCEBooleanValue *)booleanValue;

@end
