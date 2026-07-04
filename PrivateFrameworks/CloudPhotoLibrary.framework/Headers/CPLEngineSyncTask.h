/* Runtime dump - CPLEngineSyncTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncTask : NSObject
{
    char _foreground;
    char _paused;
    char _cancelled;
    <CPLEngineSyncTaskDelegate> * _delegate;
    CPLEngineLibrary * _engineLibrary;
    <NSCoding> * _transportUserIdentifier;
}

@property (retain) <CPLEngineSyncTaskDelegate> * delegate;
@property (readonly, nonatomic) CPLEngineLibrary * engineLibrary;
@property (retain, nonatomic) <NSCoding> * transportUserIdentifier;
@property (nonatomic) char foreground;
@property (readonly, nonatomic) NSString * taskIdentifier;
@property char paused;
@property char cancelled;

+ (NSObject *)taskWithEngineLibrary:(CPLEngineLibrary *)arg0;

- (void)launch;
- (void)_setPaused:(char)arg0;
- (void)cancel;
- (void)setDelegate:(<CPLEngineSyncTaskDelegate> *)arg0;
- (NSString *)description;
- (<CPLEngineSyncTaskDelegate> *)delegate;
- (char)isCancelled;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (CPLEngineLibrary *)engineLibrary;
- (CPLEngineSyncTask *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)taskDidFinishWithError:(NSError *)arg0;
- (unsigned int)diskPressureState;
- (void)taskDidProgress:(float)arg0 userInfo:(NSDictionary *)arg1;
- (void)_setCancelled:(char)arg0;
- (<NSCoding> *)transportUserIdentifier;
- (void)setTransportUserIdentifier:(<NSCoding> *)arg0;
- (char)foreground;
- (void)setForeground:(char)arg0;
- (NSString *)taskIdentifier;
- (char)isPaused;

@end
