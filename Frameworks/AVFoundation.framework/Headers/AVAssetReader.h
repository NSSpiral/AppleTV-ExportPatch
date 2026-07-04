/* Runtime dump - AVAssetReader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReader : NSObject
{
    AVAssetReaderInternal * _priv;
}

@property (readonly, retain, nonatomic) AVAsset * asset;
@property (readonly) int status;
@property (readonly) NSError * error;
@property (nonatomic) struct ? timeRange;
@property (readonly, nonatomic) NSArray * outputs;
@property (readonly, nonatomic) struct OpaqueFigAssetReader * figAssetReader;

+ (AVAssetReader *)_errorForOSStatus:(long)arg0;
+ (void)initialize;
+ (AVAssetReader *)assetReaderWithAsset:(AVAsset *)arg0 error:(id *)arg1;

- (NSArray *)outputs;
- (void)cancelReading;
- (AVAssetReader *)initWithAsset:(AVAsset *)arg0 error:(id *)arg1;
- (void)_tearDownFigAssetReader;
- (char)_canAddOutput:(NSObject *)arg0 exceptionReason:(id *)arg1;
- (void)_transitionToStatus:(int)arg0 failureError:(NSError *)arg1;
- (char)canAddOutput:(NSObject *)arg0;
- (void)_handleServerDiedNotification;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (void)dealloc;
- (AVAssetReader *)init;
- (NSString *)description;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (AVAsset *)asset;
- (int)status;
- (NSError *)error;
- (char)startReading;
- (struct ?)timeRange;
- (void)setTimeRange:(struct ?)arg0;
- (void)finalize;
- (void)addOutput:(NSObject *)arg0;

@end
