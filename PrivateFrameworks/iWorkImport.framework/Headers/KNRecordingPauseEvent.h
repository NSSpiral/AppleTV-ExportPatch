/* Runtime dump - KNRecordingPauseEvent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingPauseEvent : KNRecordingEvent
{
    int mPauseEventType;
}

@property (readonly, nonatomic) int pauseEventType;

- (void)saveToArchive:(struct RecordingEventArchive *)arg0 archiver:(NSObject *)arg1;
- (KNRecordingPauseEvent *)initWithStartTime:(double)arg0;
- (KNRecordingPauseEvent *)initWithStartTime:(double)arg0 pauseEventType:(int)arg1;
- (int)pauseEventType;
- (KNRecordingPauseEvent *)initWithContext:(NSObject *)arg0 archive:(struct RecordingEventArchive *)arg1 unarchiver:(struct RecordingEventArchive)arg2;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNRecordingPauseEvent *)copyWithZone:(struct _NSZone *)arg0;

@end
