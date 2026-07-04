/* Runtime dump - PLCloudSharingInvitationChangeJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob
{
    NSArray * _MSASSharingRelationships;
    NSString * _albumGUID;
    NSString * _resendInvitationGUID;
    NSDictionary * _mstreamdInfoDictionary;
    long long _relationshipChangeType;
    long long _jobType;
}

@property (retain, nonatomic) NSArray * MSASSharingRelationships;
@property (nonatomic) long long relationshipChangeType;
@property (retain, nonatomic) NSString * albumGUID;
@property (retain, nonatomic) NSString * resendInvitationGUID;
@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary * mstreamdInfoDictionary;

+ (void)sendServerPendingInvitationsForAlbumWithGUID:(NSString *)arg0;
+ (void)saveServerStateLocallyForSharingACLRelationships:(id)arg0 changeType:(long long)arg1 info:(NSDictionary *)arg2;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg0 changeType:(long long)arg1 info:(NSDictionary *)arg2;
+ (void)resendPendingInvitationWithGUID:(NSString *)arg0 albumGUID:(NSString *)arg1;

- (void)dealloc;
- (NSString *)description;
- (void)run;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharingInvitationChangeJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (char)shouldArchiveXPCToDisk;
- (NSString *)albumGUID;
- (NSDictionary *)mstreamdInfoDictionary;
- (long long)jobType;
- (void)setMstreamdInfoDictionary:(NSDictionary *)arg0;
- (void)setJobType:(long long)arg0;
- (void)setAlbumGUID:(NSString *)arg0;
- (void)setMSASSharingRelationships:(id)arg0;
- (void)setRelationshipChangeType:(long long)arg0;
- (void)setResendInvitationGUID:(NSString *)arg0;
- (NSArray *)MSASSharingRelationships;
- (long long)relationshipChangeType;
- (NSString *)resendInvitationGUID;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;

@end
