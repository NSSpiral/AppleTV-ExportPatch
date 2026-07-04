/* Runtime dump - ATVCupidSharedPSPlatform
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol MSASPlatform;
@interface ATVCupidSharedPSPlatform : NSObject <MSASPlatform>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)shouldLogAtLevel:(int)arg0;
- (void)logLevel:(int)arg0 personID:(NSString *)arg1 albumGUID:(NSString *)arg2 format:(NSString *)arg3;
- (NSString *)pathAlbumSharingDir;
- (char)shouldEnableNewFeatures;
- (Class)pluginClass;
- (NSArray *)personIDsEnabledForAlbumSharing;
- (char)personIDEnabledForAlbumSharing:(NSString *)arg0;
- (char)MSASIsAllowedToTransferMetadata;
- (char)MSASIsAllowedToUploadAssets;
- (char)MSASPersonIDIsAllowedToDownloadAssets:(NSString *)arg0;
- (NSData *)pushTokenForPersonID:(NSString *)arg0;
- (NSURL *)baseSharingURLForPersonID:(NSString *)arg0;
- (char)personIDUsesProductionPushEnvironment:(NSString *)arg0;
- (MSAlbumSharingDaemon *)albumSharingDaemon;

@end
