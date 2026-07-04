/* Runtime dump - IDSBaseSocketPairConnection
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSBaseSocketPairConnection : NSObject
{
    IMWeakReference * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _outgoingDataArray;
    NSObject<OS_dispatch_queue> * _readQueue;
    NSObject<OS_dispatch_source> * _readSource;
    NSObject<OS_dispatch_source> * _writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long _bytesReceived;
    double _prevBPS;
    char _writeSourceIsResumed;
}

@property (readonly, nonatomic) int socket;

- (int)socket;
- (void)dealloc;
- (void)start;
- (void)setDestination:(NSObject *)arg0;
- (void)endSession;
- (void)_callDelegatesWithBlock:(id /* block */)arg0;
- (IDSBaseSocketPairConnection *)initWithSocket:(int)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 delegate:(IMWeakReference *)arg2;
- (IDSBaseSocketPairConnection *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 delegate:(IMWeakReference *)arg1;
- (IDSBaseSocketPairConnection *)initWithSocket:(int)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 delegate:(IMWeakReference *)arg2 start:(char)arg3;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (void)_setupWriteSource;
- (char)sendData:(NSData *)arg0;

@end
