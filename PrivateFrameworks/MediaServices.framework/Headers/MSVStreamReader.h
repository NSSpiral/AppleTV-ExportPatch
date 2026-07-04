/* Runtime dump - MSVStreamReader
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVStreamReader : NSObject <NSStreamDelegate>
{
    char _closeOnStop;
    struct z_stream_s * _zstreamp;
    char _compress;
    id _didReadDataBlock;
    id _didFinishReadingBlock;
    id _didEncounterErrorBlock;
    unsigned int _maximumBufferSize;
    NSInputStream * _stream;
    NSObject<OS_dispatch_queue> * _queue;
    double _timestamp;
}

@property (copy, nonatomic) id didReadDataBlock;
@property (copy, nonatomic) id didFinishReadingBlock;
@property (copy, nonatomic) id didEncounterErrorBlock;
@property (nonatomic) unsigned int maximumBufferSize;
@property (nonatomic) char compress;
@property (readonly, nonatomic) double timestamp;
@property (retain, nonatomic) NSInputStream * stream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (double)timestamp;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)shouldCompress;
- (NSInputStream *)stream;
- (void)stream:(NSInputStream *)arg0 handleEvent:(unsigned int)arg1;
- (MSVStreamReader *)initWithInputStream:(NSObject *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setDidEncounterErrorBlock:(id /* block */)arg0;
- (void)setDidReadDataBlock:(id /* block */)arg0;
- (void)setDidFinishReadingBlock:(id /* block */)arg0;
- (void)readAllDataWithCompletion:(id /* block */)arg0;
- (id /* block */)didFinishReadingBlock;
- (id /* block */)didEncounterErrorBlock;
- (id /* block */)didReadDataBlock;
- (NSData *)_compressedDataForData:(NSData *)arg0;
- (NSError *)readAllDataWithError:(id *)arg0;
- (void)readAllDataIntoFileHandle:(id)arg0 withCompletion:(id /* block */)arg1;
- (unsigned int)maximumBufferSize;
- (void)setMaximumBufferSize:(unsigned int)arg0;
- (void)setCompress:(char)arg0;
- (void)setStream:(NSInputStream *)arg0;

@end
