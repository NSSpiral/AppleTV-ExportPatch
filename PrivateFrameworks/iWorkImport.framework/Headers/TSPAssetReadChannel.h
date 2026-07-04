/* Runtime dump - TSPAssetReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAssetReadChannel : NSObject <TSUStreamReadChannel>
{
    ALAssetRepresentation * _representation;
    ALAssetsLibrary * _library;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSPAssetReadChannel *)initWithRepresentation:(ALAssetRepresentation *)arg0 library:(ALAssetsLibrary *)arg1;
- (void)close;
- (void).cxx_destruct;

@end
