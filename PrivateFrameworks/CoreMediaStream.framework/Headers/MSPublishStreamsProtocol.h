/* Runtime dump - MSPublishStreamsProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPublishStreamsProtocol : MSStreamsProtocol
{
    struct __MSPSPCContext _context;
    NSArray * _assetCollectionsInFlight;
    struct __MSPSPCUCContext _UCContext;
}

- (void)dealloc;
- (void)setDelegate:(<MSStreamsProtocolDelegate> *)arg0;
- (<MSStreamsProtocolDelegate> *)delegate;
- (void).cxx_destruct;
- (MSPublishStreamsProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)sendMetadataForAssetCollections:(id)arg0;
- (void)sendUploadCompleteForAssetCollections:(id)arg0;
- (NSString *)_missingAssetFieldErrorWithFieldName:(NSString *)arg0;
- (NSSet *)_metadataDictForAsset:(NSSet *)arg0 outError:(id *)arg1;
- (id)_metadataDictForAssetCollection:(id)arg0 outError:(id *)arg1;
- (void)_resetConnectionVariables;
- (char)_insertInfoAboutAsset:(NSSet *)arg0 intoDictionary:(NSDictionary *)arg1 outError:(id *)arg2;
- (void)_coreProtocolDidFinishResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;
- (void)_coreProtocolDidFailAuthenticationError:(NSError *)arg0;
- (void)_coreProtocolDidFinishUCResults:(NSArray *)arg0 error:(NSError *)arg1;
- (void)abort;

@end
