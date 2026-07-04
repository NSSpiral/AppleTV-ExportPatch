/* Runtime dump - HSMediaLibraryImportObserver
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSMediaLibraryImportObserver : NSObject
{
    NSTimer * _updateTimer;
    unsigned int _consecutiveUpdateFailures;
    char _stopped;
    char _updating;
    <HSMediaLibraryImportObserverDelegate> * _delegate;
    double _updateInterval;
}

@property (nonatomic) <HSMediaLibraryImportObserverDelegate> * delegate;
@property (readonly, nonatomic) char updating;
@property (nonatomic) double updateInterval;

- (char)isUpdating;
- (void)dealloc;
- (void)setDelegate:(<HSMediaLibraryImportObserverDelegate> *)arg0;
- (HSMediaLibraryImportObserver *)init;
- (<HSMediaLibraryImportObserverDelegate> *)delegate;
- (double)updateInterval;
- (void)setUpdateInterval:(double)arg0;
- (void).cxx_destruct;
- (void)stopUpdating;
- (void)_updateImportStatus:(id)arg0;
- (void)beginUpdating;

@end
