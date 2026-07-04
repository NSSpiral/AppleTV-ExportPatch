/* Runtime dump - HAPAddRemovePairingOperation
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAddRemovePairingOperation : NSObject
{
    char _admin;
    char _operationExecuting;
    int _operation;
    NSString * _identifier;
    NSData * _publicKey;
    NSObject<OS_dispatch_queue> * _queue;
    id _completionHandler;
}

@property (nonatomic) int operation;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSData * publicKey;
@property (nonatomic) char admin;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (copy, nonatomic) id completionHandler;
@property (nonatomic) char operationExecuting;

- (int)operation;
- (void)setOperation:(int)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSData *)publicKey;
- (void)setPublicKey:(NSData *)arg0;
- (void)setAdmin:(char)arg0;
- (void)setOperationExecuting:(char)arg0;
- (HAPAddRemovePairingOperation *)initWith:(int)arg0 identifier:(NSString *)arg1 publicKey:(NSData *)arg2 admin:(char)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completion:(id /* block */)arg5;
- (char)admin;
- (char)operationExecuting;

@end
