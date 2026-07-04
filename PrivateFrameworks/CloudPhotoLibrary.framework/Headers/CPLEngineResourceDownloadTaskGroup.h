/* Runtime dump - CPLEngineResourceDownloadTaskGroup
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceDownloadTaskGroup : NSObject
{
    NSMutableSet * _activeTasks;
}

@property (readonly, nonatomic) NSSet * activeTasks;
@property (readonly, nonatomic) char complete;

- (void).cxx_destruct;
- (CPLEngineResourceDownloadTaskGroup *)initWithTasks:(NSMutableSet *)arg0;
- (char)isTrackingTask:(NSObject *)arg0;
- (void)taskDidComplete:(id)arg0;
- (NSSet *)activeTasks;
- (char)isComplete;

@end
