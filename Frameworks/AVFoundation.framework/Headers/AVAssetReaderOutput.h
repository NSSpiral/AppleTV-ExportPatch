/* Runtime dump - AVAssetReaderOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderOutput : NSObject
{
    AVAssetReaderOutputInternal * _internal;
}

@property (readonly, nonatomic) NSString * mediaType;
@property (nonatomic) char alwaysCopiesSampleData;
@property (readonly, nonatomic) AVWeakReference * weakReferenceToAssetReader;
@property (nonatomic) int extractionID;
@property (readonly, nonatomic) NSDictionary * figAssetReaderExtractionOptions;
@property (readonly, nonatomic) char trimsSampleDurations;

+ (void)initialize;

- (NSSet *)_asset;
- (int)_status;
- (id)_errorForOSStatus:(long)arg0;
- (void)_attachToWeakReferenceToAssetReader:(NSObject *)arg0;
- (char)_prepareForReadingReturningError:(id *)arg0;
- (void)_cancelReading;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (char)alwaysCopiesSampleData;
- (char)supportsRandomAccess;
- (NSArray *)currentTimeRanges;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg0;
- (AVWeakReference *)_weakReferenceToAssetReader;
- (char)_trimsSampleDurations;
- (int)_extractionID;
- (char)_enableTrackExtractionReturningError:(id *)arg0;
- (void)_markAsFinished;
- (void)markConfigurationAsFinal;
- (char)_updateTimeRangesOnFigAssetReaderReturningError:(id *)arg0;
- (void)setAlwaysCopiesSampleData:(char)arg0;
- (void)setSupportsRandomAccess:(char)arg0;
- (void)_setExtractionID:(int)arg0;
- (NSDictionary *)_figAssetReaderExtractionOptions;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg0;
- (void)resetForReadingTimeRanges:(NSArray *)arg0;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;
- (void)dealloc;
- (AVAssetReaderOutput *)init;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (char)_isFinished;
- (NSString *)mediaType;
- (void)finalize;

@end
