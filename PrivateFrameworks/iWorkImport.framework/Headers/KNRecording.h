/* Runtime dump - KNRecording
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecording : TSPObject
{
    NSArray * mEventTracks;
    KNRecordingMovieTrack * mMovieTrack;
    double mDuration;
    NSDate * mModificationDate;
    KNRecordingSyncState * mSyncState;
}

@property (readonly, nonatomic) NSArray * eventTracks;
@property (readonly, nonatomic) KNRecordingMovieTrack * movieTrack;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) char inSyncWithShow;
@property (readonly, nonatomic) NSDate * modificationDate;

- (KNRecording *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct RecordingArchive *)arg0 archiver:(NSObject *)arg1;
- (KNRecording *)initWithContext:(NSObject *)arg0 eventTracks:(NSArray *)arg1 movieTrack:(KNRecordingMovieTrack *)arg2 duration:(double)arg3 modificationDate:(NSDate *)arg4;
- (NSArray *)eventTracks;
- (KNRecordingMovieTrack *)movieTrack;
- (KNRecording *)initWithContext:(NSObject *)arg0 eventTracks:(NSArray *)arg1 movieTrack:(KNRecordingMovieTrack *)arg2 duration:(double)arg3;
- (char)isInSyncWithShow;
- (id)recordingByReplacingSegmentAfterTime:(double)arg0 withRecording:(KNRecording *)arg1;
- (id)recordingByMarkingAsOutOfSyncWithShow:(char)arg0 withLocalOutOfSyncToken:(NSString *)arg1 restoringModificationDate:(NSDate *)arg2;
- (void)dealloc;
- (double)duration;
- (NSDate *)modificationDate;
- (KNRecording *)initWithContext:(TSPObjectContext *)arg0;

@end
