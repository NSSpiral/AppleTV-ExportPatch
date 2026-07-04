/* Runtime dump - TSUBufferedReadChannelHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>
{
    TSUBufferedReadChannel * _bufferedReadChannel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSUBufferedReadChannelHelper *)initWithBufferedReadChannel:(TSUBufferedReadChannel *)arg0;
- (void)close;
- (void).cxx_destruct;

@end
