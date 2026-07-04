/* Runtime dump - HTSHTTPServerConnection
 * Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate>
{
    HTSHTTPServer * _server;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSObject<OS_dispatch_source> * _readSource;
    char _readActive;
    NSObject<OS_dispatch_source> * _writeSource;
    char _writeActive;
    int _socket;
    int _socketRefCount;
    struct __CFHTTPMessage * _incomingMessage;
    NSMutableArray * _incomingQueue;
    NSMutableArray * _outputQueue;
    char _outputStalled;
    char _closeOnEmptyQueue;
    NSString * _identifier;
    NSTimer * _idleTimer;
    double _lastActivity;
}

@property (readonly, nonatomic) NSString * identifier;
@property (nonatomic) double lastActivity;
@property (retain, nonatomic) NSTimer * idleTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)identifier;
- (HTSHTTPServerConnection *)initWithServer:(HTSHTTPServer *)arg0 socket:(int)arg1;
- (void)sendResponse:(NSURLResponse *)arg0 withLatency:(double)arg1 closeAfterSending:(char)arg2;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)setLastActivity:(double)arg0;
- (void)_processStreamInput;
- (void)_processStreamOutput;
- (void)_processIncomingBytes:(char *)arg0 length:(long)arg1;
- (void)setIdleTimer:(NSTimer *)arg0;
- (void)_shutdownIdleConnection:(NSURLConnection *)arg0;
- (void)printData:(NSData *)arg0 withMessage:(NSString *)arg1;
- (double)lastActivity;
- (NSTimer *)idleTimer;

@end
