/* Runtime dump - KNRecordingEvent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingEvent : NSObject <NSCopying>
{
    double mStartTime;
}

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) char ignoredWhenSeeking;
@property (readonly, nonatomic) char canPrecedeDiscontinuity;

- (void)saveToArchive:(struct RecordingEventArchive *)arg0 archiver:(NSObject *)arg1;
- (KNRecordingEvent *)initWithStartTime:(double)arg0;
- (char)isIgnoredWhenSeeking;
- (char)canPrecedeDiscontinuity;
- (NSSet *)recordingEventByAddingTimeOffset:(double)arg0;
- (KNRecordingEvent *)initWithContext:(NSObject *)arg0 archive:(struct RecordingEventArchive *)arg1 unarchiver:(struct RecordingEventArchive)arg2;
- (KNRecordingEvent *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNRecordingEvent *)copyWithZone:(struct _NSZone *)arg0;
- (double)startTime;

@end
