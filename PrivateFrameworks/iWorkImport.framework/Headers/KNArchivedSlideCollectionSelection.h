/* Runtime dump - KNArchivedSlideCollectionSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection>
{
    KNSlideCollectionSelection * mSelection;
}

@property (readonly, nonatomic) KNSlideCollectionSelection * slideCollectionSelection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (KNArchivedSlideCollectionSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (KNSlideCollectionSelection *)slideCollectionSelection;
- (void)dealloc;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;
- (KNArchivedSlideCollectionSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
