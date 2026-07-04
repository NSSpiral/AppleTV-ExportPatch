/* Runtime dump - TSDArchivedCanvasSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDArchivedCanvasSelection : TSPObject <TSKArchivedSelection>
{
    TSKSelection<TSDCanvasSelection> * mSelection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (TSDArchivedCanvasSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;
- (TSDArchivedCanvasSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
