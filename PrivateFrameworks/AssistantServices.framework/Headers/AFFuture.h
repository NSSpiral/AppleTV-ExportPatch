/* Runtime dump - AFFuture
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFFuture : NSObject
{
    NSObject<OS_dispatch_group> * _executionGroup;
    id _result;
}

+ (AFFuture *)futureWithResultGenerator:(id)arg0;
+ (AFFuture *)futureWithSynchronousResultGenerator:(id)arg0;

- (AFFuture *)init;
- (void).cxx_destruct;
- (CKDPResponseOperationResult *)result;
- (AFFuture *)initWithResultGenerator:(id)arg0;
- (AFFuture *)initWithSynchronousResultGenerator:(id)arg0;
- (void)_wait;
- (id)chainResultGenerator:(id)arg0;
- (id)notifyWithCompletion:(id /* block */)arg0;

@end
