/* Runtime dump - TSCEFormulaRewriteTableResizedInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewriteTableResizedInfo : NSObject
{
    struct TSCERangeCoordinate _oldTableSize;
    struct TSCERangeCoordinate _newTableSize;
}

@property (nonatomic) struct TSCERangeCoordinate oldTableSize;
@property (nonatomic) struct TSCERangeCoordinate newTableSize;

- (struct TSCERangeCoordinate)oldTableSize;
- (void)setOldTableSize:(struct TSCERangeCoordinate)arg0;
- (struct TSCERangeCoordinate)newTableSize;
- (void)setNewTableSize:(struct TSCERangeCoordinate)arg0;
- (TSCEFormulaRewriteTableResizedInfo *)init;
- (void).cxx_construct;

@end
