/* Runtime dump - TSDArchivedPathSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDArchivedPathSelection : TSPObject <TSKArchivedSelection>
{
    TSDPathSelection * mPathSelection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) TSKSelection * selection;

- (TSDArchivedPathSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSKSelection *)selection;
- (void)setSelection:(TSKSelection *)arg0;

@end
