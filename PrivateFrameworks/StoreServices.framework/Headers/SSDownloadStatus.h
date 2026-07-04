/* Runtime dump - SSDownloadStatus
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying>
{
    SSDownloadPhase * _activePhase;
    char _contentRestricted;
    NSError * _error;
    char _failed;
    char _paused;
}

@property (retain, nonatomic) NSError * error;
@property (nonatomic) char failed;
@property (readonly, nonatomic) char failedTransient;
@property (nonatomic) char pausable;
@property (nonatomic) char paused;
@property (nonatomic) char contentRestricted;
@property (readonly, nonatomic) SSDownloadPhase * activePhase;
@property (readonly, nonatomic) float percentComplete;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isFailed;
- (void)setPausable:(char)arg0;
- (char)isPausable;
- (NSDictionary *)copyXPCEncoding;
- (SSDownloadStatus *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (float)percentComplete;
- (SSDownloadStatus *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPaused:(char)arg0;
- (void)setPercentComplete:(float)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (void)setOperationType:(int)arg0;
- (void)setContentRestricted:(char)arg0;
- (void)setOperationProgress:(SSOperationProgress *)arg0;
- (void)setFailed:(char)arg0;
- (char)isContentRestricted;
- (char)isFailedTransient;
- (SSDownloadPhase *)activePhase;
- (char)isPaused;

@end
