/* Runtime dump - TNArchivedFormSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNArchivedFormSelection : TSPObject <TSKArchivedSelection>
{
    TNFormSelection * _selection;
}

@property (retain, nonatomic) TNFormSelection * selection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TNArchivedFormSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TNFormSelection *)selection;
- (void)setSelection:(TNFormSelection *)arg0;
- (TNArchivedFormSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
