/* Runtime dump - PLVideoRemaker
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLVideoRemaker : NSObject
{
    NSString * _trimmedPath;
    double _duration;
    double _trimStartTime;
    double _trimEndTime;
    int _mode;
    AVAssetExportSession * _exportSession;
    float _percentComplete;
    NSTimer * _progressTimer;
    PLProgressView * _progressView;
    id _delegate;
    id _progressHandler;
    PFVideoAVObjectBuilder * __videoAVObjectBuilder;
}

@property (copy, nonatomic) id progressHandler;
@property (readonly, retain, nonatomic) PFVideoAVObjectBuilder * _videoAVObjectBuilder;

+ (long long)fileLengthLimitForRemakerMode:(int)arg0;
+ (int)getSDRemakerModeForMode:(int)arg0;
+ (long long)approximateByteSizeForMode:(int)arg0 duration:(double)arg1;
+ (int)getHDRemakerModeForMode:(int)arg0;
+ (double)maximumDurationForTrimMode:(int)arg0;

- (void)_updateProgress;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (PLProgressView *)progressView;
- (void)setProgressHandler:(id /* block */)arg0;
- (id /* block */)progressHandler;
- (PLVideoRemaker *)initWithManagedAsset:(char)arg0 applyVideoAdjustments:(char)arg1;
- (PLVideoRemaker *)initWithAVAsset:(NSSet *)arg0;
- (void)setTrimStartTime:(double)arg0;
- (void)setTrimEndTime:(double)arg0;
- (void)remake;
- (void)_exportCompletedWithSuccess:(char)arg0;
- (PFVideoAVObjectBuilder *)_videoAVObjectBuilder;
- (NSNumber *)messageForRemakingProgress;
- (NSURL *)_fileFormatForURL:(NSURL *)arg0;
- (void)_resetProgressTimer;
- (void)_removeProgressTimer;
- (void)_didEndRemakingWithTemporaryPath:(NSString *)arg0;
- (double)trimStartTime;
- (double)trimEndTime;

@end
