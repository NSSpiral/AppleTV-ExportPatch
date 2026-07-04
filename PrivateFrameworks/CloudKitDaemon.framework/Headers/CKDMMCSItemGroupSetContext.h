/* Runtime dump - CKDMMCSItemGroupSetContext
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling>
{
    CKDMMCSItemGroupSet * _itemGroupSet;
    NSMutableArray * _itemGroupContexts;
    id _itemGroupCompletionBlock;
    id _itemGroupSetCompletionBlock;
    NSObject<OS_dispatch_group> * _itemGroupSetCompletionGroup;
}

@property (retain, nonatomic) CKDMMCSItemGroupSet * itemGroupSet;
@property (retain, nonatomic) NSMutableArray * itemGroupContexts;
@property (copy, nonatomic) id itemGroupCompletionBlock;
@property (copy, nonatomic) id itemGroupSetCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * itemGroupSetCompletionGroup;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (CKDMMCSItemGroupSetContext *)initWithItemGroupSet:(CKDMMCSItemGroupSet *)arg0 completionHandler:(id /* block */)arg1;
- (id /* block */)itemGroupCompletionBlock;
- (void)_addItemGroupContext:(NSObject *)arg0;
- (NSObject<OS_dispatch_group> *)itemGroupSetCompletionGroup;
- (NSMutableArray *)itemGroupContexts;
- (id /* block */)itemGroupSetCompletionBlock;
- (CKDMMCSItemGroupSet *)itemGroupSet;
- (void)setItemGroupSetCompletionBlock:(id /* block */)arg0;
- (void)setItemGroupSet:(CKDMMCSItemGroupSet *)arg0;
- (void)setItemGroupContexts:(NSMutableArray *)arg0;
- (void)setItemGroupCompletionBlock:(id /* block */)arg0;
- (void)setItemGroupSetCompletionGroup:(NSObject<OS_dispatch_group> *)arg0;

@end
