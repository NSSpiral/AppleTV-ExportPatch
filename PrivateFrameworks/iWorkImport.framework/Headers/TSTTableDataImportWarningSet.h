/* Runtime dump - TSTTableDataImportWarningSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataImportWarningSet : TSTTableDataObject
{
    TSTImportWarningSet * mImportWarningSet;
}

- (TSTTableDataImportWarningSet *)initObjectWithImportWarningSet:(NSSet *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
