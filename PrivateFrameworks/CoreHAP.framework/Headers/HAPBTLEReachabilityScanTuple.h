/* Runtime dump - HAPBTLEReachabilityScanTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEReachabilityScanTuple : NSObject
{
    id _completion;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _identifier;
}

@property (copy, nonatomic) id completion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSString * identifier;

+ (HAPBTLEReachabilityScanTuple *)reachabilityScanTupleWithCompletion:(id /* block */)arg0 workQueue:(/* block */ id)arg1 identifier:(NSString *)arg2;

- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
