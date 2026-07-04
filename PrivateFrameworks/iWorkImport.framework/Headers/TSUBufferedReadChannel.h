/* Runtime dump - TSUBufferedReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_queue> * _readQueue;
    <TSUReadChannel> * _sourceReadChannel;
    unsigned long _sourceReadBufferSize;
    long long _sourceOffset;
    unsigned long _sourceLength;
    NSError * _sourceReadChannelError;
    NSArray * _blockInfos;
    id _streamReadChannelBlock;
    <TSUStreamReadChannel> * _streamReadChannel;
    id _streamReadChannelSourceHandler;
    char _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long _streamOutputOutstandingLength;
    unsigned long _streamOutputLength;
    NSObject<OS_dispatch_data> * _currentStreamOutputData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;

- (TSUBufferedReadChannel *)initWithReadChannel:(<TSUStreamReadChannel> *)arg0 blockInfos:(NSArray *)arg1 streamReadChannelBlock:(id /* block */)arg2;
- (void)readFromOffset:(long long)arg0 length:(unsigned long)arg1 handler:(id /* block */)arg2;
- (void)setLowWater:(unsigned long)arg0;
- (void)readWithHandler:(id /* block */)arg0;
- (void)addBarrier:(id)arg0;
- (TSUBufferedReadChannel *)initWithReadChannel:(<TSUStreamReadChannel> *)arg0 sourceReadBufferSize:(unsigned long)arg1 blockInfos:(NSArray *)arg2 streamReadChannelBlock:(id /* block */)arg3;
- (void)_closeStreamReadChannel;
- (void)_readFromOffset:(long long)arg0 length:(unsigned long)arg1 handler:(id /* block */)arg2;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg0 length:(unsigned long)arg1;
- (NSSet *)_currentDataIntersectionWithOffset:(long long)arg0 length:(unsigned long)arg1 isReadDone:(char *)arg2;
- (void)setStreamReadChannelSourceHandler:(id /* block */)arg0;
- (void)dealloc;
- (char)isValid;
- (void)close;
- (void).cxx_destruct;
- (void)_close;

@end
