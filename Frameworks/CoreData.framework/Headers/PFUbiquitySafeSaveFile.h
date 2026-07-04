/* Runtime dump - PFUbiquitySafeSaveFile
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySafeSaveFile : NSObject
{
    PFUbiquityLocation * _permanentLocation;
    PFUbiquityLocation * _safeSaveLocation;
    PFUbiquityLocation * _currentLocation;
    NSString * _localPeerID;
    char _continueCheckingDownload;
    char _downloadSuccess;
    NSError * _downloadError;
    char _continueCheckingUpload;
    char _safeSaveSuccess;
    char _moveAfterSave;
    NSError * _safeSaveError;
    NSObject<OS_dispatch_semaphore> * _safeSaveSemaphore;
    char _isRegistered;
}

@property (readonly, nonatomic) PFUbiquityLocation * permanentLocation;
@property (readonly, nonatomic) PFUbiquityLocation * safeSaveLocation;
@property (retain, nonatomic) PFUbiquityLocation * currentLocation;
@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) NSError * safeSaveError;
@property (readonly, nonatomic) char isRegistered;
@property (readonly, nonatomic) char continueCheckingUpload;
@property (readonly, nonatomic) char safeSaveSuccess;
@property (readonly, nonatomic) char moveAfterSave;
@property (readonly, nonatomic) char existsAtSafeSaveLocation;
@property (readonly, nonatomic) char existsAtPermanentLocation;
@property (readonly, nonatomic) char existsInCloud;
@property (readonly, nonatomic) char downloadSuccess;
@property (readonly, nonatomic) char continueCheckingDownload;
@property (readonly, nonatomic) NSError * downloadError;

- (NSString *)localPeerID;
- (char)continueCheckingDownload;
- (void)checkFileDownload;
- (char)continueCheckingUpload;
- (void)checkSafeSaveFileUpload;
- (PFUbiquityLocation *)permanentLocation;
- (PFUbiquityLocation *)safeSaveLocation;
- (PFUbiquitySafeSaveFile *)initWithPermanentLocation:(PFUbiquityLocation *)arg0 safeSaveLocation:(PFUbiquityLocation *)arg1 andLocalPeerID:(NSObject *)arg2;
- (PFUbiquityLocation *)currentLocation;
- (void)setCurrentLocation:(PFUbiquityLocation *)arg0;
- (char)existsInCloud;
- (char)loadFile:(id *)arg0;
- (char)downloadLatestVersion:(char)arg0 error:(id *)arg1;
- (char)moveToPermanentLocation:(id *)arg0;
- (char)loadFileFromLocation:(NSObject *)arg0 error:(id *)arg1;
- (char)writeFileToLocation:(NSObject *)arg0 error:(id *)arg1;
- (char)safeSaveFile:(char)arg0 moveToPermanentLocation:(char)arg1 error:(id *)arg2;
- (char)existsAtSafeSaveLocation;
- (char)waitForFileToUpload:(id *)arg0;
- (char)isFileUploaded:(id *)arg0;
- (char)existsAtPermanentLocation;
- (char)removeFileFromLocation:(NSObject *)arg0 error:(id *)arg1;
- (char)removeFile:(id *)arg0;
- (char)writeFile:(id *)arg0;
- (char)isFileDownloaded:(id *)arg0;
- (char)waitForFileToDownload:(id *)arg0;
- (void)checkSafeSaveFileUploadAsync;
- (void)setSafeSaveSuccess:(char)arg0;
- (void)safeSaveFinishedUpload;
- (void)setSafeSaveError:(NSError *)arg0;
- (void)setDownloadSuccess:(char)arg0;
- (void)downloadFinished;
- (NSError *)safeSaveError;
- (char)safeSaveSuccess;
- (char)moveAfterSave;
- (char)downloadSuccess;
- (char)isRegistered;
- (void)dealloc;
- (PFUbiquitySafeSaveFile *)init;
- (NSString *)description;
- (NSError *)downloadError;
- (void)setDownloadError:(NSError *)arg0;

@end
