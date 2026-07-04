/* Runtime dump - TSPMemoryComponentWriteChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> * _streamQueue;
    TSUDispatchData * _streamData;
    char _isClosed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPMemoryComponentWriteChannel *)initWithAlwaysDefragmentData:(char)arg0;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(NSData *)arg0;
- (NSData *)serializedData;

@end
