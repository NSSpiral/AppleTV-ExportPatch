/* Runtime dump - PTPTransport
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTransport : NSObject
{
    unsigned short _type;
    int _role;
    int _connectionStatus;
    id _delegate;
    char _timedOut;
    char _responseReceived;
    PTPOperationResponsePacket * _response;
    struct _opaque_pthread_t * _callbackThread;
    struct _opaque_pthread_mutex_t _callbackThreadMutex;
    struct _opaque_pthread_cond_t _callbackThreadCondition;
    char _callbackThreadConditionSignaled;
    struct __CFRunLoop * _callbackThreadRunLoop;
    struct __CFRunLoopSource * _callbackDummyMachPortRLSrc;
    id _headerBuffer;
    id _md5;
    char _failedMD5;
    char _headerBufferFound;
    char _delegateNeedsResponse;
    char _busy;
    unsigned long _canceledTransactionID;
    PTPWrappedBytes * _dataForTransaction;
    unsigned long long _excessReceivedDataSize;
    unsigned long _totalBytesFilled;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (PTPTransport *)init;
- (char)sendResponse:(NSURLResponse *)arg0;
- (char)sendEvent:(NSObject *)arg0;
- (unsigned short)type;
- (void)stop;
- (PTPOperationResponsePacket *)response;
- (void)setResponse:(PTPOperationResponsePacket *)arg0;
- (int)role;
- (char)responseReceived;
- (void)setResponseReceived:(char)arg0;
- (struct __CFRunLoop *)callbackThreadRunLoop;
- (char)startInitiator;
- (int)lockCallbackThreadMutex;
- (int)unlockCallbackThreadMutex;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg0;
- (int)signalCallbackThreadCondition;
- (char)startResponder;
- (NSURLRequest *)sendRequest:(NSURLRequest *)arg0 receiveData:(NSData *)arg1 timeout:(unsigned long)arg2;
- (NSURLRequest *)sendRequest:(NSURLRequest *)arg0 sendData:(NSData *)arg1 timeout:(unsigned long)arg2;
- (void)cancelTransaction:(NSObject *)arg0;
- (void)abortPendingIO;
- (int)connectionStatus;
- (unsigned long long)excessReceivedDataSize;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (char)startCallbackThread;
- (void)endCallbackThread;
- (void)cleanupCallbackThread;
- (void *)callbackThreadFunction;
- (void)sendData:(NSData *)arg0;
- (NSString *)md5;
- (char)connected;
- (void)setTimedOut:(char)arg0;
- (char)timedOut;

@end
