/* Runtime dump - CKDMMCSItemGroupContext
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling>
{
    CKDMMCS * _MMCS;
    CKDMMCSItemGroup * _itemGroup;
    id _progressBlock;
    id _startBlock;
    id _completionBlock;
    NSMutableDictionary * _itemsByID;
}

@property (retain, nonatomic) CKDMMCS * MMCS;
@property (retain, nonatomic) CKDMMCSItemGroup * itemGroup;
@property (copy, nonatomic) id progressBlock;
@property (copy, nonatomic) id startBlock;
@property (copy, nonatomic) id completionBlock;
@property (retain, nonatomic) NSMutableDictionary * itemsByID;

- (void)cancel;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)start;
- (void).cxx_destruct;
- (CKDMMCS *)MMCS;
- (void)setMMCS:(NSSet *)arg0;
- (void)didCompleteRequestWithError:(NSError *)arg0;
- (CKDMMCSItemGroupContext *)initWithMMCS:(id)arg0 itemGroup:(CKDMMCSItemGroup *)arg1 progress:(NSProgress *)arg2 start:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (char)_setupItemsWithError:(id *)arg0;
- (id /* block */)startBlock;
- (CKDMMCSItemGroup *)itemGroup;
- (NSMutableDictionary *)itemsByID;
- (void)_cleanupItems;
- (void)didPutItemID:(unsigned long long)arg0 signature:(NSObject *)arg1 receipt:(IDSSocketPairSMSDeliveryReceipt *)arg2 error:(NSError *)arg3;
- (void)updateProgressForItemID:(unsigned long long)arg0 state:(int)arg1 progress:(double)arg2 error:(NSError *)arg3;
- (void)didGetItemID:(unsigned long long)arg0 signature:(NSObject *)arg1 path:(NSString *)arg2 error:(NSError *)arg3;
- (void)didPutSectionWithItemID:(unsigned long long)arg0 signature:(NSObject *)arg1 receipt:(IDSSocketPairSMSDeliveryReceipt *)arg2 error:(NSError *)arg3;
- (void)setItemGroup:(CKDMMCSItemGroup *)arg0;
- (void)setStartBlock:(id /* block */)arg0;
- (void)setItemsByID:(NSMutableDictionary *)arg0;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg0;

@end
