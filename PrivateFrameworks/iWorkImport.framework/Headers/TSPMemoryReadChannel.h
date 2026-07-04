/* Runtime dump - TSPMemoryReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_data> * _dispatchData;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;

- (void)readFromOffset:(long long)arg0 length:(unsigned long)arg1 handler:(id /* block */)arg2;
- (void)setLowWater:(unsigned long)arg0;
- (void)readWithHandler:(id /* block */)arg0;
- (void)addBarrier:(id)arg0;
- (TSPMemoryReadChannel *)initWithDispatchData:(NSObject<OS_dispatch_data> *)arg0;
- (TSPMemoryReadChannel *)initWithNSData:(NSData *)arg0;
- (TSPMemoryReadChannel *)init;
- (char)isValid;
- (void)close;
- (void).cxx_destruct;

@end
