/* Runtime dump - PLCPLDownloadContext
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLCPLDownloadContext : NSObject
{
    char _completed;
    NSString * _taskIdentifier;
    NSString * _resourceTypeDescription;
    NSError * _error;
    double _progress;
    double _updateLastQueuedTime;
}

@property (retain) NSString * taskIdentifier;
@property (retain) NSString * resourceTypeDescription;
@property double progress;
@property char completed;
@property (retain) NSError * error;
@property double updateLastQueuedTime;

- (char)completed;
- (void)setCompleted:(char)arg0;
- (double)updateLastQueuedTime;
- (void)setUpdateLastQueuedTime:(double)arg0;
- (NSString *)resourceTypeDescription;
- (void)dealloc;
- (NSString *)description;
- (void)setProgress:(double)arg0;
- (double)progress;
- (void)setResourceTypeDescription:(NSString *)arg0;
- (NSError *)error;
- (void)setTaskIdentifier:(NSString *)arg0;
- (void)setError:(NSError *)arg0;
- (NSString *)taskIdentifier;

@end
