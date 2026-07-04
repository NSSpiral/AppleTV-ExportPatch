/* Runtime dump - TSPMemoryDecoder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryDecoder : NSObject <TSPDecoder>
{
    <TSPMemoryDecoderDelegate> * _delegate;
    NSObject<OS_dispatch_data> * _metadataDispatchData;
    NSObject<OS_dispatch_data> * _rootObjectComponentDispatchData;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> * metadataDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> * rootObjectComponentDispatchData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPMemoryDecoder *)initWithMetadataDispatchData:(NSObject<OS_dispatch_data> *)arg0 rootObjectComponentDispatchData:(NSObject<OS_dispatch_data> *)arg1 delegate:(<TSPMemoryDecoderDelegate> *)arg2;
- (id)newReadChannelForRootObjectComponent;
- (NSDictionary *)newReadChannelForMetadata;
- (NSString *)newReadChannelForDataWithIdentifier:(long long)arg0 info:(NSDictionary *)arg1;
- (TSPMemoryDecoder *)initWithEncodedData:(NSData *)arg0 delegate:(<TSPMemoryDecoderDelegate> *)arg1;
- (NSObject<OS_dispatch_data> *)metadataDispatchData;
- (NSObject<OS_dispatch_data> *)rootObjectComponentDispatchData;
- (TSPMemoryDecoder *)init;
- (void).cxx_destruct;

@end
