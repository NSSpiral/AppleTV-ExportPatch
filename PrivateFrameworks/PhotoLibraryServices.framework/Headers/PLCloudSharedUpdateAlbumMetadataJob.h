/* Runtime dump - PLCloudSharedUpdateAlbumMetadataJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob
{
    NSDictionary * _metadata;
}

@property (retain, nonatomic) NSDictionary * metadata;

+ (void)updateAlbumMetadata:(NSDictionary *)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)run;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharedUpdateAlbumMetadataJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (NSData *)_argumentsDictionaryAsData:(NSData *)arg0;
- (NSObject *)_argumentsDictionaryFromXPCEvent:(NSObject *)arg0;

@end
