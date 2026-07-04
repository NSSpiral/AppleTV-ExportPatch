/* Runtime dump - MSASPlatformImplementation
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)shouldLogAtLevel:(int)arg0;
- (void)logLevel:(int)arg0 personID:(NSString *)arg1 albumGUID:(NSString *)arg2 format:(NSString *)arg3;
- (id)pathAlbumSharingDir;
- (char)shouldEnableNewFeatures;
- (Class)pluginClass;
- (id)personIDsEnabledForAlbumSharing;
- (char)personIDEnabledForAlbumSharing:(id)arg0;
- (char)MSASIsAllowedToTransferMetadata;
- (char)MSASIsAllowedToUploadAssets;
- (NSObject *)MMCSUploadSocketOptionsForPersonID:(NSObject *)arg0;
- (char)MSASPersonIDIsAllowedToDownloadAssets:(NSArray *)arg0;
- (NSObject *)MMCSDownloadSocketOptionsForPersonID:(NSObject *)arg0;
- (int)MMCSConcurrentConnectionsCount;
- (NSObject *)pushTokenForPersonID:(NSObject *)arg0;
- (NSObject *)baseSharingURLForPersonID:(NSObject *)arg0;
- (NSObject *)_accountForPersonID:(NSObject *)arg0;
- (char)personIDUsesProductionPushEnvironment:(NSDictionary *)arg0;
- (id)albumSharingDaemon;
- (char)deviceHasEnoughDiskSpaceRemainingToOperate;

@end
