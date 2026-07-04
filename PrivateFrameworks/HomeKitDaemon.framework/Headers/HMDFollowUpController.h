/* Runtime dump - HMDFollowUpController
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFollowUpController : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;

- (HMDFollowUpController *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)clearFollowUpItems;
- (void)_postFollowUpItemWithUniqueIdentifier:(NSString *)arg0 title:(NSString *)arg1 informativeText:(NSString *)arg2 actionURL:(NSURL *)arg3 actionLabelText:(NSString *)arg4 showNotification:(char)arg5;
- (void)_clearFollowUpItems;
- (void)postFollowUpItemForIncomingInvitations:(id)arg0;
- (void)postFollowUpItemWithUniqueIdentifier:(NSString *)arg0 title:(NSString *)arg1 informativeText:(NSString *)arg2 actionURL:(NSURL *)arg3 actionLabelText:(NSString *)arg4 showNotification:(char)arg5;

@end
