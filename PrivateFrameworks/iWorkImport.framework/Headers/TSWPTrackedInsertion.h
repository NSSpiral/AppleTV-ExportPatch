/* Runtime dump - TSWPTrackedInsertion
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction>
{
    TSWPSelection * _selection;
    NSString * _string;
    TSWPChangeSession * _changeSession;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performWithStorage:(id)arg0 delta:(int)arg1 actionBuilder:(struct TSWPStorageActionBuilder *)arg2 withFlags:(struct TSWPStorageTransaction)arg3 replaceBlock:(struct TSWPStorageTransactionObject *)arg4;
- (struct _NSRange)insertedRange;
- (TSWPTrackedInsertion *)initWithSelection:(TSWPSelection *)arg0 string:(NSString *)arg1 changeSession:(TSWPChangeSession *)arg2;
- (unsigned int)targetCharIndex;
- (void)dealloc;
- (int)delta;

@end
