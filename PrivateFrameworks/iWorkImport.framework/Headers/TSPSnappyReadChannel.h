/* Runtime dump - TSPSnappyReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel>
{
    <TSUStreamReadChannel> * _readChannel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSPSnappyReadChannel *)initWithReadChannel:(<TSUStreamReadChannel> *)arg0;
- (char)processData:(id *)arg0 isDone:(char)arg1 handler:(id /* block */)arg2;
- (NSObject *)uncompressDataFromSource:(struct SnappySource *)arg0;
- (NSData *)uncompressData:(NSData *)arg0;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;

@end
