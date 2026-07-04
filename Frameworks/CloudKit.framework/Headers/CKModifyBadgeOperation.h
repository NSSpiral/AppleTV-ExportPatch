/* Runtime dump - CKModifyBadgeOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyBadgeOperation : CKOperation
{
    unsigned int _badgeValue;
    id _modifyBadgeCompletionBlock;
}

@property (nonatomic) unsigned int badgeValue;
@property (copy, nonatomic) id modifyBadgeCompletionBlock;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (void)performCKOperation;
- (id /* block */)modifyBadgeCompletionBlock;
- (void)setModifyBadgeCompletionBlock:(id /* block */)arg0;
- (CKModifyBadgeOperation *)init;
- (void)setBadgeValue:(unsigned int)arg0;
- (unsigned int)badgeValue;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (CKModifyBadgeOperation *)initWithBadgeValue:(unsigned int)arg0;

@end
