/* Runtime dump - HAPCharacteristicReadCompletionTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicReadCompletionTuple : NSObject
{
    id _handler;
    NSObject<OS_dispatch_queue> * _completionQueue;
}

@property (copy, nonatomic) id handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * completionQueue;

+ (HAPCharacteristicReadCompletionTuple *)readCompletionTupleWithHandler:(id /* block */)arg0 queue:(/* block */ id)arg1;

- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)completionQueue;

@end
