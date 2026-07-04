/* Runtime dump - HMDAccessoryRetrievalCompletionTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryRetrievalCompletionTuple : NSObject
{
    int _linkType;
    NSObject<OS_dispatch_queue> * _queue;
    id _completion;
}

@property (nonatomic) int linkType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (copy, nonatomic) id completion;

+ (NSObject *)tupleWithLinkType:(int)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 completion:(id /* block */)arg2;

- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (int)linkType;
- (void)setLinkType:(int)arg0;

@end
