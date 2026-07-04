/* Runtime dump - TSDArchivedDrawableSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDArchivedDrawableSelection : TSPObject <TSKArchivedSelection>
{
    TSDDrawableSelection * mDrawableSelection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (TSDArchivedDrawableSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSDArchivedDrawableSelection *)subclassInitFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0 intoMessage:(struct DrawableSelectionArchive *)arg1;
- (void)dealloc;
- (NSString *)description;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;

@end
