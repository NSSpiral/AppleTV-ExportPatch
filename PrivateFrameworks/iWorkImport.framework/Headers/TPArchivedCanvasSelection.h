/* Runtime dump - TPArchivedCanvasSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedCanvasSelection : TSPObject <TSKArchivedSelection>
{
    TPCanvasSelection * _selection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (TPArchivedCanvasSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;
- (TPArchivedCanvasSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
