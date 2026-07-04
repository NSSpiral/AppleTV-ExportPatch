/* Runtime dump - BRCPackageManifestWriter
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageManifestWriter : NSObject
{
    BRCAccountSession * _session;
    NSString * _stageID;
    PBMessageStreamWriter * _writer;
    NSOutputStream * _stream;
    NSURL * _url;
    char _sharedZone;
    NSError * _error;
}

@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSURL * url;

- (NSURL *)url;
- (char)done;
- (char)addItem:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSError *)error;
- (void)_handleStreamError;
- (void)_applyQuarantineMetadataWithManifestItem:(NSObject *)arg0 fd:(int)arg1;
- (unsigned short)_computedFileModeForPackageItem:(NSObject *)arg0;
- (char)_packageItem:(NSObject *)arg0 matchesMode:(unsigned short)arg1;
- (void)_applyFileMetadataWithManifestItem:(NSObject *)arg0 packageRootFD:(int)arg1;
- (void)_applyDirectoryMetadataWithManifestItem:(NSObject *)arg0 packageRootFD:(int)arg1;
- (char)_stageExistingPackageItem:(NSObject *)arg0 withLiveFd:(int)arg1 stageFd:(int)arg2;
- (char)addLocalItem:(NSObject *)arg0;
- (BRCPackageManifestWriter *)initWithSession:(BRCAccountSession *)arg0 stageID:(NSString *)arg1 url:(NSURL *)arg2 sharedZone:(char)arg3;
- (char)stagePackageWithReader:(NSObject *)arg0 package:(TSPDirectoryPackage *)arg1 stageItemURL:(NSURL *)arg2 livefd:(int)arg3;

@end
