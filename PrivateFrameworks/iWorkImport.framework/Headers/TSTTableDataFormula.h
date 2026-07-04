/* Runtime dump - TSTTableDataFormula
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataFormula : TSTTableDataObject
{
    struct TSCEFormula * mFormula;
}

- (TSTTableDataFormula *)initObjectWithFormula:(struct TSCEFormula *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
