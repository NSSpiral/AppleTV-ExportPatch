/* Runtime dump - MFStream
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFStream : NSObject <NSStreamDelegate>
{
    NSInputStream * _rStream;
    NSOutputStream * _wStream;
    NSMutableDictionary * _properties;
    id _callback;
    NSObject<OS_dispatch_queue> * _location;
    unsigned long _capacity;
    unsigned long _length;
    char * _buffer;
    NSError * _error;
    char _streamCanRead;
    char _streamCanWrite;
    char _dispatchedBytesAvailable;
    unsigned int _bytesRead;
    unsigned int _bytesWritten;
    char _enableThroughputMonitoring;
}

@property (readonly, nonatomic) NSError * streamError;
@property (readonly, nonatomic) char isOpen;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)networkThread;
+ (void)setNetworkThread:(NSObject *)arg0;
+ (NSOperationQueue *)_networkDispatchQueue;

- (void)dealloc;
- (MFStream *)init;
- (void)close;
- (int)write:(char *)arg0 maxLength:(unsigned int)arg1;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (int)read:(char *)arg0 maxLength:(unsigned int)arg1;
- (void)stream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)enableThroughputMonitoring:(char)arg0;
- (MFStream *)initCallBack:(HMDWatchSessionMessageCallback *)arg0 onDispatchQueue:(/* block */ id)arg1;
- (NSString *)_copyPropertyForKey:(NSString *)arg0;
- (void)_readBytesFromStream;
- (void)_closeAndReleaseStream:(NSObject *)arg0 logMessage:(NSString *)arg1;
- (void)openToHostName:(NSString *)arg0 port:(int)arg1;
- (char)isOpen;

@end
