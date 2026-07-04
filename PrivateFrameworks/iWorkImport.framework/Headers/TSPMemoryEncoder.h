/* Runtime dump - TSPMemoryEncoder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryEncoder : NSObject <TSPEncoder>
{
    char _alwaysDefragmentData;
    TSPMemoryComponentWriteChannel * _metadataWriteChannel;
    TSPMemoryComponentWriteChannel * _rootComponentWriteChannel;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> * metadataDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> * rootObjectComponentDispatchData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPMemoryEncoder *)initWithAlwaysDefragmentData:(char)arg0;
- (NSObject<OS_dispatch_data> *)metadataDispatchData;
- (NSObject<OS_dispatch_data> *)rootObjectComponentDispatchData;
- (NSObject *)newRootObjectComponentWriteChannel;
- (NSObject *)newMetadataComponentWriteChannel;
- (NSData *)metadataData;
- (NSData *)rootObjectComponentData;
- (void).cxx_destruct;
- (NSData *)encodedData;

@end
