/* Runtime dump - MFConnection
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFConnection : NSObject
{
    <MFSASLSecurityLayer> * _securityLayer;
    _MFSocket * _socket;
    double _lastUsedTime;
    char * _buffer;
    int _bufferRemainingBytes;
    unsigned int _bufferStart;
    unsigned int _bufferLength;
    unsigned long _desiredBufferLength;
    struct z_stream_s * _deflater;
    struct z_stream_s * _inflater;
    char * _zbuffer;
    NSData * _logData;
    unsigned int _dontLogReads;
    unsigned int _readBytesNotLogged;
    NSMutableString * _readBytesToLog;
    id _isFetching;
    id _allowFallbacks;
    id _compressionEnabled;
}

@property (nonatomic) char isFetching;
@property (readonly, nonatomic) double lastUsedTime;
@property (readonly, nonatomic) NSArray * capabilities;
@property (readonly, nonatomic) NSArray * authenticationMechanisms;
@property (readonly, nonatomic) NSString * securityProtocol;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char hasBytesAvailable;
@property (readonly, nonatomic) char isCellularConnection;
@property (readonly, nonatomic) char loginDisabled;
@property (readonly, nonatomic) char usesOpportunisticSockets;

+ (void)initialize;
+ (char)shouldTryFallbacksAfterError:(NSError *)arg0;
+ (void)readLoggingDefaults;
+ (void)logBytes:(char *)arg0 length:(int)arg1;
+ (void)flushLog;
+ (NSArray *)logClasses;
+ (void)setLogClasses:(NSArray *)arg0;
+ (char)logAllSocketActivity;
+ (void)setLogAllSocketActivity:(char)arg0;
+ (MFConnection *)logActivityOnPorts;
+ (void)setLogActivityOnPorts:(id)arg0;
+ (MFConnection *)logActivityOnHosts;
+ (void)setLogActivityOnHosts:(id)arg0;

- (void)dealloc;
- (NSString *)description;
- (char)isValid;
- (void)disconnect;
- (double)lastUsedTime;
- (char)hasBytesAvailable;
- (NSArray *)capabilities;
- (char)connectUsingFallbacksForAccount:(NSObject *)arg0;
- (char)authenticateUsingAccount:(NSObject *)arg0;
- (void)enableThroughputMonitoring:(char)arg0;
- (NSString *)securityProtocol;
- (char)writeData:(NSData *)arg0 dontLogBytesInRange:(struct _NSRange)arg1;
- (char)writeBytes:(char *)arg0 length:(unsigned long)arg1 dontLogBytesInRange:(struct _NSRange)arg2;
- (char)readLineIntoData:(NSData *)arg0;
- (char)connectUsingAccount:(NSObject *)arg0;
- (NSArray *)authenticationMechanisms;
- (char)authenticateUsingAccount:(NSObject *)arg0 authenticator:(_MFXYMPKIAuthenticator *)arg1;
- (char)loginDisabled;
- (void)setAllowsFallbacks:(char)arg0;
- (char)usesOpportunisticSockets;
- (void)_setupSocketWithSettings:(NSDictionary *)arg0;
- (void)_setupNetworkLogging;
- (char)connectUsingSettings:(NSDictionary *)arg0;
- (char)isFetching;
- (void)setIsFetching:(char)arg0;
- (void)setDesiredReadBufferLength:(unsigned long)arg0;
- (void)enableReadLogging:(char)arg0;
- (void)logReadChars:(char *)arg0 length:(unsigned long)arg1;
- (char)readBytesIntoData:(NSData *)arg0 desiredLength:(unsigned long)arg1;
- (char)startTLSForAccount:(NSObject *)arg0;
- (char)startCompression;
- (char)writeData:(NSData *)arg0;
- (char)isCellularConnection;

@end
