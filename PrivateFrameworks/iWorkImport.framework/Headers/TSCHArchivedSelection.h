/* Runtime dump - TSCHArchivedSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHArchivedSelection : TSPObject <TSKArchivedSelection>
{
    TSCHSelection * mSelection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (TSCHArchivedSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;

@end
