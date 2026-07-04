/* Runtime dump - IDSSocketPairConnection
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairConnection : NSObject
{
    NSMutableData * _headerData;
    NSMutableData * _currentMessageData;
    IMWeakReference * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_semaphore> * _lock;
    unsigned int _currentOutgoingDataIndex;
    NSData * _outgoingData;
    NSMutableArray * _outgoingMessageArray;
    unsigned int _currentOutgoingFragmentedMessageID;
    unsigned int _inFlightMessageCountLowWaterMark;
    NSMutableDictionary * _incomingDataFragments;
    unsigned int _fragmentationSize;
    char _isConnected;
    unsigned int _currentDataLength;
    long _bytesReceived;
    double _prevBPS;
    int _connectedSocket;
    char _writeSocketIsResumed;
    double _lastDateCheck;
    char _notifyWhenConnectionReceivesBytes;
    int _priority;
}

@property (readonly, nonatomic) char isConnected;
@property (readonly, nonatomic) char isEmpty;
@property (nonatomic) unsigned int fragmentationSize;
@property (readonly, nonatomic) unsigned int inFlightMessageCount;
@property (nonatomic) unsigned int inFlightMessageCountLowWaterMark;
@property (readonly, nonatomic) NSSet * inFlightMessages;

- (void)dealloc;
- (char)isEmpty;
- (void)endSession;
- (void)_endSession;
- (void)_callDelegateWithBlock:(id /* block */)arg0;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (int)_read:(char *)arg0 maxLength:(unsigned int)arg1;
- (char)_queueNextOutgoingData;
- (char)sendDataMessage:(NSString *)arg0 canFragment:(char)arg1;
- (IDSSocketPairConnection *)initWithSocket:(int)arg0 queue:(NSObject *)arg1 delegate:(IMWeakReference *)arg2 priority:(int)arg3;
- (unsigned int)fragmentationSize;
- (unsigned int)inFlightMessageCount;
- (unsigned int)inFlightMessageCountLowWaterMark;
- (NSSet *)inFlightMessages;
- (void)setFragmentationSize:(unsigned int)arg0;
- (void)setInFlightMessageCountLowWaterMark:(unsigned int)arg0;
- (char)sendDataMessage:(NSString *)arg0;
- (void)setNotifyWhenConnectionReceivesBytes:(char)arg0;
- (char)isConnected;

@end
