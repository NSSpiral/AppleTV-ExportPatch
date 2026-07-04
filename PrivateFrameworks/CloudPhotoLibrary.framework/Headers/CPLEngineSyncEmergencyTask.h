/* Runtime dump - CPLEngineSyncEmergencyTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding>
{
    CPLEngineLibrary * _readwriteEngineLibrary;
    NSString * _taskIdentifier;
}

@property (retain, nonatomic) CPLEngineLibrary * engineLibrary;
@property (readonly, nonatomic) unsigned int priority;
@property (retain) <CPLEngineSyncEmergencyTaskDelegate> * delegate;

+ (char)shouldCoalesceTasks;
+ (NSObject *)taskWithEngineLibrary:(CPLEngineLibrary *)arg0;
+ (NSString *)taskIdentifier;

- (CPLEngineSyncEmergencyTask *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CPLEngineSyncEmergencyTask *)init;
- (unsigned int)priority;
- (void).cxx_destruct;
- (CPLEngineLibrary *)engineLibrary;
- (void)setEngineLibrary:(CPLEngineLibrary *)arg0;
- (char)shouldDiscardOnError;
- (char)shouldStopSyncSession;
- (NSString *)taskIdentifier;

@end
