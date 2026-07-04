/* Runtime dump - TSWPArchivedSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPArchivedSelection : TSPObject <TSKArchivedSelection>
{
    TSWPSelection * _selection;
}

@property (retain, nonatomic) TSWPSelection * selection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSWPArchivedSelection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TSWPSelection *)selection;
- (void)setSelection:(TSWPSelection *)arg0;
- (TSWPArchivedSelection *)initWithContext:(TSPObjectContext *)arg0;

@end
