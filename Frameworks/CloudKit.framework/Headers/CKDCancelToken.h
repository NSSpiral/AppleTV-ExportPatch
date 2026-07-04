/* Runtime dump - CKDCancelToken
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDCancelToken : NSObject <CKDCancelling>
{
    char _isCancelled;
    id _cancelAction;
}

@property (copy, nonatomic) id cancelAction;

- (void)cancel;
- (char)isCancelled;
- (void)setCancelAction:(NSObject *)arg0;
- (UIAlertAction *)cancelAction;
- (void).cxx_destruct;

@end
