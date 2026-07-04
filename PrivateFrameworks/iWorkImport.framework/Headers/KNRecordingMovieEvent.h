/* Runtime dump - KNRecordingMovieEvent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingMovieEvent : KNRecordingEvent
{
    TSPLazyReference * mMovieInfoReference;
    int mMovieEventType;
    double mMovieEventValue;
}

@property (readonly, nonatomic) TSDMovieInfo * movieInfo;
@property (readonly, nonatomic) int movieEventType;
@property (readonly, nonatomic) double movieEventValue;
@property (readonly, nonatomic) double seekTime;
@property (readonly, nonatomic) double rate;
@property (readonly, nonatomic) char beginsScrubbing;
@property (readonly, nonatomic) char endsScrubbing;
@property (readonly, nonatomic) char startsPlayback;
@property (readonly, nonatomic) char stopsPlayback;

- (void)saveToArchive:(struct RecordingEventArchive *)arg0 archiver:(NSObject *)arg1;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0;
- (char)isIgnoredWhenSeeking;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 movieInfo:(TSDMovieInfo *)arg1 movieEventType:(int)arg2 movieEventValue:(double)arg3;
- (int)movieEventType;
- (double)movieEventValue;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 movieInfo:(TSDMovieInfo *)arg1 seekTime:(double)arg2;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 movieInfo:(TSDMovieInfo *)arg1 rate:(double)arg2;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 startingPlaybackForMovieInfo:(NSDictionary *)arg1;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 stoppingPlaybackForMovieInfo:(NSDictionary *)arg1;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 beginningScrubbingForMovieInfo:(NSDictionary *)arg1;
- (KNRecordingMovieEvent *)initWithStartTime:(double)arg0 endingScrubbingForMovieInfo:(NSDictionary *)arg1 withRate:(double)arg2;
- (double)seekTime;
- (char)beginsScrubbing;
- (char)endsScrubbing;
- (char)startsPlayback;
- (char)stopsPlayback;
- (KNRecordingMovieEvent *)initWithContext:(NSObject *)arg0 archive:(struct RecordingEventArchive *)arg1 unarchiver:(struct RecordingEventArchive)arg2;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNRecordingMovieEvent *)copyWithZone:(struct _NSZone *)arg0;
- (TSDMovieInfo *)movieInfo;
- (double)rate;

@end
