/* Runtime dump - KNRecordingMovieTrack
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingMovieTrack : TSPObject
{
    NSArray * mMovieSegments;
}

@property (readonly, nonatomic) NSArray * movieSegments;

- (KNRecordingMovieTrack *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct RecordingMovieTrackArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct RecordingMovieTrackArchive *)arg0 unarchiver:(struct RecordingMovieTrackArchive)arg1;
- (KNRecordingMovieTrack *)initWithContext:(NSObject *)arg0 movieSegments:(NSArray *)arg1;
- (id)movieTrackByReplacingSegmentAfterTime:(double)arg0 withMovieTrack:(KNRecordingMovieTrack *)arg1;
- (NSArray *)movieSegments;
- (void)dealloc;
- (KNRecordingMovieTrack *)initWithContext:(TSPObjectContext *)arg0;

@end
