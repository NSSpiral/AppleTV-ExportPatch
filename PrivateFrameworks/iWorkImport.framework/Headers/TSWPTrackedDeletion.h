/* Runtime dump - TSWPTrackedDeletion
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction>
{
    struct _NSRange _range;
    TSWPChangeSession * _changeSession;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)performWithStorage:(id)arg0 delta:(int)arg1 actionBuilder:(struct TSWPStorageActionBuilder *)arg2 withFlags:(struct TSWPStorageTransaction)arg3 replaceBlock:(struct TSWPStorageTransactionObject *)arg4;
- (struct _NSRange)insertedRange;
- (TSWPTrackedDeletion *)initWithRange:(struct _NSRange)arg0 changeSession:(TSWPChangeSession *)arg1;
- (unsigned int)targetCharIndex;
- (void)dealloc;
- (int)delta;
- (void).cxx_construct;

@end
