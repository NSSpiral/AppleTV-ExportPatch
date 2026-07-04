/* Runtime dump - KNMovieSegment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMovieSegment : NSObject
{
    TSPData * mMovieData;
    double mStartTime;
}

@property (readonly, nonatomic) TSPData * movieData;
@property (readonly, nonatomic) char emptySegment;
@property (readonly, nonatomic) double startTime;

- (void)saveToArchive:(struct MovieSegmentArchive *)arg0 archiver:(NSObject *)arg1;
- (TSPData *)movieData;
- (NSSet *)movieSegmentByAddingTimeOffset:(double)arg0;
- (KNMovieSegment *)initWithMovieData:(TSPData *)arg0 startTime:(double)arg1;
- (KNMovieSegment *)initEmptySegmentWithStartTime:(double)arg0;
- (char)isEmptySegment;
- (KNMovieSegment *)initWithContext:(NSObject *)arg0 archive:(struct MovieSegmentArchive *)arg1 unarchiver:(struct MovieSegmentArchive)arg2;
- (void)dealloc;
- (KNMovieSegment *)init;
- (double)startTime;

@end
