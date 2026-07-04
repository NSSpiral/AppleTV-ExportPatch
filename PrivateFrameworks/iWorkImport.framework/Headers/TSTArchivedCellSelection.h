/* Runtime dump - TSTArchivedCellSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection>
{
    TSTCellSelection * mCellSelection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (TSTArchivedCellSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;

@end
