/* Runtime dump - PLCloudSharedCommentsJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedCommentsJob : PLCloudSharingJob
{
    NSArray * _msASComments;
    NSString * _commentGUID;
    NSString * _assetGUID;
    NSString * _albumGUID;
    NSDictionary * _mstreamdInfoDictionary;
    long long _jobType;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSArray * msASComments;
@property (retain, nonatomic) NSString * commentGUID;
@property (retain, nonatomic) NSString * assetGUID;
@property (retain, nonatomic) NSString * albumGUID;
@property (retain, nonatomic) NSDictionary * mstreamdInfoDictionary;

+ (void)locallyProcessAddedComments:(id)arg0 assetGUID:(NSString *)arg1 albumGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
+ (void)publishCommentToServer:(NSObject *)arg0;
+ (void)deleteSharedCommentFromServer:(NSObject *)arg0;
+ (PLCloudSharedCommentsJob *)directoryPathForInFlightComments:(char)arg0;
+ (void)locallyProcessDeletedComments:(id)arg0 info:(NSDictionary *)arg1;

- (void)dealloc;
- (NSString *)description;
- (void)run;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharedCommentsJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (char)shouldArchiveXPCToDisk;
- (NSString *)albumGUID;
- (NSDictionary *)mstreamdInfoDictionary;
- (long long)jobType;
- (void)setMstreamdInfoDictionary:(NSDictionary *)arg0;
- (void)setJobType:(long long)arg0;
- (void)setAlbumGUID:(NSString *)arg0;
- (void)setCommentGUID:(NSString *)arg0;
- (void)setAssetGUID:(NSString *)arg0;
- (void)setMsASComments:(NSArray *)arg0;
- (NSArray *)msASComments;
- (NSString *)commentGUID;
- (NSString *)assetGUID;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (void)executeDeleteCommentFromServer;

@end
