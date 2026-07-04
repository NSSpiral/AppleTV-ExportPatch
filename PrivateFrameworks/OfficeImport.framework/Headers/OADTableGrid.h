/* Runtime dump - OADTableGrid
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableGrid : NSObject
{
    NSMutableArray * mColumns;
}

- (void)dealloc;
- (OADTableGrid *)init;
- (unsigned int)columnCount;
- (NSObject *)columnAtIndex:(unsigned int)arg0;
- (id)addColumn;

@end
