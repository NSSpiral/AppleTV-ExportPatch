/* Runtime dump - KNArchivedCanvasSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedCanvasSelection : TSPObject <TSKArchivedSelection>
{
    TSKSelection<TSDCanvasSelection> * mSelection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (KNArchivedCanvasSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;
- (KNArchivedCanvasSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
