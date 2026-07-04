/* Runtime dump - RMTable
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMTable : NSObject <NSFastEnumeration>
{
    NSMutableArray * _matrix;
    unsigned int _elementCount;
    NSMutableArray * _rowFirstElements;
    NSMutableArray * _columnFirstElements;
    struct CGPDFLayout * _layout;
    struct CGPDFNode * _tableRoot;
    char _rowOrder;
}

@property (readonly) struct CGPDFPage * page;
@property char rowOrder;

- (NSObject *)rowAtIndex:(unsigned int)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (struct CGRect)bounds;
- (struct CGPDFLayout *)layout;
- (unsigned int)rows;
- (struct CGPDFPage *)page;
- (unsigned int)columns;
- (void)dump;
- (RMTable *)initWithRoot:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1;
- (void)setRowOrder:(char)arg0;
- (char)rowOrder;
- (void)matrixDealloc;
- (NSObject *)columnAtIndex:(unsigned int)arg0;

@end
