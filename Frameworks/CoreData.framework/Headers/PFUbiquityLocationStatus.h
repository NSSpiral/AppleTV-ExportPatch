/* Runtime dump - PFUbiquityLocationStatus
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityLocationStatus : NSObject
{
    char _isLive;
    char _isDeleted;
    char _isDownloaded;
    char _isDownloading;
    char _isUploaded;
    char _isUploading;
    char _isImported;
    char _isScheduled;
    char _isExported;
    char _isFailed;
    PFUbiquityLocation * _location;
    NSError * _error;
    unsigned int _hash;
    long long _numBytes;
    int _numNotifications;
}

@property (readonly, nonatomic) char isLive;
@property (readonly, nonatomic) char isDeleted;
@property (readonly, nonatomic) char isDownloaded;
@property (nonatomic) char isDownloading;
@property (readonly, nonatomic) char isUploaded;
@property (readonly, nonatomic) char isUploading;
@property (readonly, nonatomic) char isScheduled;
@property (readonly, nonatomic) char isImported;
@property (readonly, nonatomic) char isExported;
@property (readonly, nonatomic) char isFailed;
@property (readonly, nonatomic) long long numBytes;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) PFUbiquityLocation * location;
@property (readonly, nonatomic) int numNotifications;

- (long long)numBytes;
- (void)statusDidChange;
- (PFUbiquityLocationStatus *)initWithLocation:(PFUbiquityLocation *)arg0;
- (void)checkFileURLState;
- (void)logWasImported;
- (void)logWasScheduled;
- (void)logImportWasCancelled;
- (void)logWasExported;
- (void)encounteredError:(NSError *)arg0;
- (void)recoveredFromError;
- (char)isDownloaded;
- (void)setIsDownloading:(char)arg0;
- (char)isUploaded;
- (char)isUploading;
- (char)isImported;
- (char)isExported;
- (char)isScheduled;
- (char)isFailed;
- (int)numNotifications;
- (void)dealloc;
- (PFUbiquityLocationStatus *)init;
- (unsigned int)hash;
- (NSString *)description;
- (PFUbiquityLocation *)location;
- (NSError *)error;
- (char)isLive;
- (char)isDeleted;
- (char)isDownloading;

@end
