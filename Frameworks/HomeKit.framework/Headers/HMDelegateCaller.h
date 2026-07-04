/* Runtime dump - HMDelegateCaller
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDelegateCaller : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;

- (void)callCompletion:(id /* block */)arg0 error:(/* block */ id)arg1;
- (void)invokeBlock:(id /* block */)arg0;
- (NSError *)_localizedError:(NSError *)arg0;
- (void)callCompletion:(id /* block */)arg0 error:(/* block */ id)arg1 obj:(NSMutableDictionary *)arg2;
- (void)callCompletion:(id /* block */)arg0 obj:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 value:(/* block */ id)arg1 error:(char)arg2;
- (void)callCompletion:(id /* block */)arg0 errorString:(/* block */ id)arg1;
- (void)callCompletion:(id /* block */)arg0 errorString:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 error:(/* block */ id)arg1 dictionary:(NSDictionary *)arg2;
- (void)callCompletion:(id /* block */)arg0 isUsingHomeKit:(/* block */ id)arg1 isUsingCloudServices:(char)arg2 error:(char)arg3;
- (void)callCompletion:(id /* block */)arg0 home:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 room:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 zone:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 serviceGroup:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 actionSet:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 error:(/* block */ id)arg1 array:(NSArray *)arg2;
- (void)callCompletion:(id /* block */)arg0 invitations:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)callCompletion:(id /* block */)arg0 user:(/* block */ id)arg1 error:(NSError *)arg2;
- (HMDelegateCaller *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;

@end
