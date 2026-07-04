/* Runtime dump - CAMAvalancheCaptureService
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMAvalancheCaptureService : CAMCaptureService
{
    char _supportsAvalancheAnalysis;
    NSArray * _recentFaceMetadata;
    NSMutableDictionary * __avalancheSessionsByUUID;
    CAMAvalancheSession * __activeAvalancheSession;
    NSCountedSet * __inflightRequestsByUUID;
    NSMutableSet * __avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
    double __avalancheStartTime;
}

@property (nonatomic) char supportsAvalancheAnalysis;
@property (copy, nonatomic) NSArray * recentFaceMetadata;
@property (readonly, nonatomic) NSMutableDictionary * _avalancheSessionsByUUID;
@property (readonly, nonatomic) CAMAvalancheSession * _activeAvalancheSession;
@property (readonly, nonatomic) NSCountedSet * _inflightRequestsByUUID;
@property (readonly, nonatomic) NSMutableSet * _avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
@property (readonly, nonatomic) double _avalancheStartTime;

- (CAMAvalancheCaptureService *)init;
- (void).cxx_destruct;
- (int)numberOfPhotos;
- (void)_ensureValidAvalancheSession;
- (void)finishAvalancheCaptureWithCompletion:(id /* block */)arg0;
- (CAMAvalancheSession *)_activeAvalancheSession;
- (char)_canFinishCapturingActiveAvalanche;
- (void)_finalizeAvalancheSession:(NSObject *)arg0;
- (NSMutableSet *)_avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
- (void)_cancelAvalancheSession:(NSObject *)arg0;
- (void)_finalizeAndBeginNewAvalancheSession;
- (char)supportsAvalancheAnalysis;
- (NSMutableDictionary *)_avalancheSessionsByUUID;
- (NSArray *)recentFaceMetadata;
- (void)startAvalancheCapture;
- (void)finishAvalancheCapture;
- (void)cancelAvalancheCapture;
- (char)canContinueAvalancheCapture;
- (void)requestWasEnqueued:(id)arg0;
- (void)responseWasGenerated:(id)arg0 error:(NSError *)arg1;
- (void)responseWasCompleted:(id)arg0 error:(NSError *)arg1;
- (void)setSupportsAvalancheAnalysis:(char)arg0;
- (void)setRecentFaceMetadata:(NSArray *)arg0;
- (NSCountedSet *)_inflightRequestsByUUID;
- (double)_avalancheStartTime;

@end
