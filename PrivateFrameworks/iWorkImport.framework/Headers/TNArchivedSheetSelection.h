/* Runtime dump - TNArchivedSheetSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection>
{
    TNSheetSelection * mSelection;
}

@property (retain, nonatomic) TNSheetSelection * selection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TNArchivedSheetSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TNSheetSelection *)selection;
- (void)setSelection:(TNSheetSelection *)arg0;
- (TNArchivedSheetSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
