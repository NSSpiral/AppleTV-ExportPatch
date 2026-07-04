/* Runtime dump - MSASServerSideModelGroupedCommandQueue
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue
{
    MSASEnqueuedCommand * _lastEnqueuedCommand;
}

@property (retain, nonatomic) MSASEnqueuedCommand * lastEnqueuedCommand;

+ (NSObject *)calloutBlockForCommand:(SEL)arg0;

- (void).cxx_destruct;
- (char)hasEnqueuedItems;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewAlbum:(id)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedAlbum:(id)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewAccessControl:(BRControl *)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedAccessControl:(BRControl *)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewInvitation:(id)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedInvitation:(id)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewAssetCollection:(id)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedAssetCollection:(id)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewComment:(id)arg1 forAssetCollection:(PHAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didDeleteComment:(id)arg1 forAssetCollection:(PHAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)workQueueFlushQueue;
- (void)setLastEnqueuedCommand:(MSASEnqueuedCommand *)arg0;
- (void)workQueueEnqueueCommand:(NSObject *)arg0 variantParam:(NSDictionary *)arg1 invariantParam:(NSDictionary *)arg2;
- (void)flushQueue;
- (MSASEnqueuedCommand *)lastEnqueuedCommand;

@end
