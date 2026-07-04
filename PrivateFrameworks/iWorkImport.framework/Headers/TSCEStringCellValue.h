/* Runtime dump - TSCEStringCellValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEStringCellValue : TSCECellValue
{
    struct TSCEStringValue * mStringValue;
}

- (void)encodeToArchive:(struct StringCellValueArchive *)arg0;
- (TSCEStringCellValue *)initWithStringValue:(struct TSCEStringValue *)arg0 locale:(struct TSUFormat)arg1;
- (char)isEqualToCellValue:(id)arg0;
- (TSCEStringCellValue *)initWithArchive:(struct StringCellValueArchive *)arg0 locale:(struct StringCellValueArchive)arg1;
- (TSCEStringCellValue *)initWithString:(NSString *)arg0 locale:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)displayString;
- (TSCEStringCellValue *)copyWithZone:(struct _NSZone *)arg0;
- (struct TSCEStringValue *)stringValue;
- (struct ?)formatStruct;

@end
