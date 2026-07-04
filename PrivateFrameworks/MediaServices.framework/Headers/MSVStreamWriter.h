/* Runtime dump - MSVStreamWriter
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVStreamWriter : NSObject <NSStreamDelegate>
{
    char _closeOnStop;
    struct z_stream_s * _zstreamp;
    char _compressed;
    unsigned int _maximumBufferSize;
    id _canWriteDataBlock;
    id _didFinishWritingBlock;
    id _didEncounterErrorBlock;
    NSOutputStream * _outputStream;
    NSInputStream * _inputStream;
    NSObject<OS_dispatch_queue> * _queue;
    double _timestamp;
    unsigned long long _bytesWritten;
}

@property (nonatomic) unsigned int maximumBufferSize;
@property (nonatomic) char compressed;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long bytesWritten;
@property (copy, nonatomic) id canWriteDataBlock;
@property (copy, nonatomic) id didFinishWritingBlock;
@property (copy, nonatomic) id didEncounterErrorBlock;
@property (retain, nonatomic) NSOutputStream * outputStream;
@property (retain, nonatomic) NSInputStream * inputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (MSVStreamWriter *)init;
- (double)timestamp;
- (MSVStreamWriter *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setTimestamp:(double)arg0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSInputStream *)inputStream;
- (void)setInputStream:(NSInputStream *)arg0;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (void)stream:(NSObject *)arg0 handleEvent:(unsigned int)arg1;
- (void)setCompressed:(char)arg0;
- (void)setDidEncounterErrorBlock:(id /* block */)arg0;
- (id /* block */)didEncounterErrorBlock;
- (unsigned int)maximumBufferSize;
- (void)setMaximumBufferSize:(unsigned int)arg0;
- (void)setDidFinishWritingBlock:(id /* block */)arg0;
- (void)setBytesWritten:(unsigned long long)arg0;
- (id /* block */)didFinishWritingBlock;
- (void)setCanWriteDataBlock:(id /* block */)arg0;
- (NSData *)_decompressData:(NSData *)arg0;
- (void)writeAllData:(NSData *)arg0 withCompletion:(id /* block */)arg1;
- (void)writeStreamError:(struct ?)arg0;
- (id /* block */)canWriteDataBlock;
- (unsigned long long)bytesWritten;
- (NSOutputStream *)outputStream;
- (MSVStreamWriter *)initWithOutputStream:(NSOutputStream *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (char)writeAllData:(NSData *)arg0 error:(id *)arg1;
- (char)isCompressed;

@end
