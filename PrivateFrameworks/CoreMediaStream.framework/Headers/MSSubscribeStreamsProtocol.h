/* Runtime dump - MSSubscribeStreamsProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSubscribeStreamsProtocol : MSStreamsProtocol
{
    struct __MSSSPCContext _context;
    int _chunkIndex;
    struct __MSSSPCChunkParsingContext * _parseContext;
}

- (void)dealloc;
- (void)setDelegate:(<MSStreamsProtocolDelegate> *)arg0;
- (<MSStreamsProtocolDelegate> *)delegate;
- (MSSubscribeStreamsProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)pollForSubscriptionUpdatesWithAccountAnchors:(id)arg0;
- (void)_parseChunks;
- (NSObject *)_pathToChunkIndex:(int)arg0;
- (void)_parseNextChunk;
- (NSArray *)_assetCollectionsFromCoreArray:(NSArray *)arg0 personID:(NSString *)arg1 outError:(id *)arg2;
- (NSString *)_invalidFieldErrorWithFieldName:(NSString *)arg0 suggestion:(LSBestAppSuggestion *)arg1;
- (NSString *)_invalidFieldErrorWithFieldName:(NSString *)arg0;
- (NSDictionary *)_assetFromCoreDictionary:(NSDictionary *)arg0 personID:(NSString *)arg1 outError:(id *)arg2;
- (void)_coreProtocolDidFinishError:(NSError *)arg0;
- (void)_coreProtocolDidGetDataChunk:(id)arg0;
- (void)_coreProtocolDidFailAuthentication:(id)arg0;
- (void)_chunkDidBeginStreamForPersonID:(NSObject *)arg0 wasReset:(char)arg1 metadata:(NSDictionary *)arg2;
- (void)_chunkDidParseAssetCollections:(id)arg0 forPersonID:(NSObject *)arg1;
- (void)_chunkDidEndStreamForPersonID:(NSObject *)arg0 ctag:(NSString *)arg1;
- (void)_chunkDidFindSubscriptionGoneForPersonID:(NSObject *)arg0;
- (void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(NSObject *)arg0;
- (void)_chunkDidFindShareState:(NSObject *)arg0;
- (void)abort;

@end
