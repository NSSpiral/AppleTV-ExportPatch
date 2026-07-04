/* Runtime dump - CKDProtobufStreamWriter
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray * _allObjects;
    NSData * _curData;
    unsigned int _curDataPos;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    struct z_stream_s _zlibStream;
    char _haveFlushedZlib;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    char _shouldCompress;
    char _hasInitedCompression;
    char _haveFinishedCompression;
    char _haveFinishedStreaming;
    unsigned int _bufferSize;
    <CKDProtobufMessageSigningDelegate> * _signingDelegate;
    NSFileHandle * _humanLogFileHandle;
    NSFileHandle * _binaryLogFileHandle;
}

@property (nonatomic) char shouldCompress;
@property (nonatomic) unsigned int bufferSize;
@property (weak, nonatomic) <CKDProtobufMessageSigningDelegate> * signingDelegate;
@property (retain, nonatomic) NSFileHandle * humanLogFileHandle;
@property (retain, nonatomic) NSFileHandle * binaryLogFileHandle;
@property (nonatomic) char hasInitedCompression;
@property (nonatomic) char haveFinishedCompression;
@property char haveFinishedStreaming;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (NSNumber *)open;
- (void)tearDown;
- (void)setStreamedObjects:(NSArray *)arg0;
- (CKDProtobufStreamWriter *)initWithCompression:(char)arg0;
- (void)setBufferSize:(unsigned int)arg0;
- (void)setSigningDelegate:(<CKDProtobufMessageSigningDelegate> *)arg0;
- (void)setHumanLogFileHandle:(NSFileHandle *)arg0;
- (void)setBinaryLogFileHandle:(NSFileHandle *)arg0;
- (void)_tearDownOutputStream;
- (void)setHaveFinishedStreaming:(char)arg0;
- (unsigned int)bufferSize;
- (char)haveFinishedCompression;
- (void)setHaveFinishedCompression:(char)arg0;
- (char)shouldCompress;
- (NSData *)_compressBodyData:(NSData *)arg0 shouldFlush:(char)arg1;
- (int)_streamNextObject:(NSObject *)arg0;
- (<CKDProtobufMessageSigningDelegate> *)signingDelegate;
- (NSString *)_dataForMessage:(NSString *)arg0;
- (NSFileHandle *)humanLogFileHandle;
- (NSFileHandle *)binaryLogFileHandle;
- (NSObject *)_prepareMescalSignature:(NSObject *)arg0;
- (void)_prepareObjectForStreaming:(id)arg0 shouldSign:(char)arg1;
- (int)_writeDataToStream:(NSObject *)arg0;
- (char)haveFinishedStreaming;
- (char)_finishStreaming:(id)arg0;
- (void)setShouldCompress:(char)arg0;
- (char)hasInitedCompression;
- (void)setHasInitedCompression:(char)arg0;
- (void)stream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;

@end
