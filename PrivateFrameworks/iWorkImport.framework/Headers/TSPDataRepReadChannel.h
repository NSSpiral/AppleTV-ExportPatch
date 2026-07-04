/* Runtime dump - TSPDataRepReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel>
{
    SFUDataRepresentation * _representation;
    <SFUInputStream> * _inputStream;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (TSPDataRepReadChannel *)initWithRepresentation:(SFUDataRepresentation *)arg0;

@end
