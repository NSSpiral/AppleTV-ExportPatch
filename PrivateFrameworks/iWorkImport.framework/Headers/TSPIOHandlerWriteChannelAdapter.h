/* Runtime dump - TSPIOHandlerWriteChannelAdapter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel>
{
    id _handler;
    NSError * _error;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)close;
- (void).cxx_destruct;
- (TSPIOHandlerWriteChannelAdapter *)initWithHandler:(id /* block */)arg0;
- (void)setError:(NSError *)arg0;
- (void)writeData:(NSData *)arg0;

@end
