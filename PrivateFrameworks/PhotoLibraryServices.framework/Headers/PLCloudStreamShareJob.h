/* Runtime dump - PLCloudStreamShareJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudStreamShareJob : PLCloudSharingJob
{
    NSArray * _mediaSources;
    NSString * _albumCloudGUID;
    NSString * _albumName;
    NSString * _commentText;
    NSArray * _recipientsInfo;
}

@property (retain, nonatomic) NSArray * mediaSources;
@property (retain, nonatomic) NSString * albumCloudGUID;
@property (retain, nonatomic) NSString * albumName;
@property (retain, nonatomic) NSString * commentText;
@property (retain, nonatomic) NSArray * recipientsInfo;

+ (void)publishMediaFromSources:(id)arg0 toSharedAlbum:(PHCloudSharedAlbum *)arg1 withCommentText:(NSString *)arg2;
+ (void)publishMediaFromSources:(id)arg0 toNewSharedAlbumWithName:(NSString *)arg1 withCommentText:(NSString *)arg2 recipients:(id)arg3;

- (NSString *)description;
- (void)run;
- (void)setMediaSources:(NSArray *)arg0;
- (void)setAlbumCloudGUID:(NSString *)arg0;
- (void)setCommentText:(NSString *)arg0;
- (void)setAlbumName:(NSString *)arg0;
- (void)addInfosForRecipients:(id)arg0;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (NSArray *)mediaSources;
- (NSArray *)recipientsInfo;
- (NSString *)commentText;
- (NSString *)albumCloudGUID;
- (NSString *)albumName;
- (PLCloudStreamShareJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)setRecipientsInfo:(NSArray *)arg0;
- (void)executeDaemonOperation;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (char)shouldArchiveXPCToDisk;

@end
