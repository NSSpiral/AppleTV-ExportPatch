/* Runtime dump - HMPendingRequests
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPendingRequests : NSObject
{
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableArray * _contextLists;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;
@property (retain, nonatomic) NSMutableArray * contextLists;

- (void)addCompletionBlock:(id /* block */)arg0 forIdentifier:(NSString *)arg1;
- (NSString *)removeCompletionBlockForIdentifier:(NSString *)arg0;
- (void)addEvent:(NSObject *)arg0 andCompletionBlock:(id /* block */)arg1 forIdentifier:(NSString *)arg2;
- (NSString *)removeEventForIdentifier:(NSString *)arg0;
- (NSString *)removeTriggerForIdentifier:(NSString *)arg0;
- (NSString *)removeAccessoryForIdentifier:(NSString *)arg0;
- (void)addAccessory:(HMAccessory *)arg0 andCompletionBlock:(id /* block */)arg1 forIdentifier:(NSString *)arg2;
- (void)addTrigger:(HMTrigger *)arg0 andCompletionBlock:(id /* block */)arg1 forIdentifier:(NSString *)arg2;
- (NSMutableArray *)contextLists;
- (void)_addRequest:(NSURLRequest *)arg0 ofType:(int)arg1 forIdentifier:(NSString *)arg2;
- (NSObject *)_removeRequestOfType:(int)arg0 forIdentifier:(NSString *)arg1;
- (void)addRequest:(NSURLRequest *)arg0 ofType:(int)arg1 forIdentifier:(NSString *)arg2;
- (NSObject *)removeRequestOfType:(int)arg0 forIdentifier:(NSString *)arg1;
- (void)addAction:(NSObject *)arg0 andCompletionBlock:(id /* block */)arg1 forIdentifier:(NSString *)arg2;
- (NSString *)removeActionForIdentifier:(NSString *)arg0;
- (void)setContextLists:(NSMutableArray *)arg0;
- (HMPendingRequests *)init;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
