/* Runtime dump - KNRecordingLaserEvent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingLaserEvent : KNRecordingEvent
{
    struct CGPoint mUnitLocation;
}

@property (readonly, nonatomic) struct CGPoint unitLocation;

- (void)saveToArchive:(struct RecordingEventArchive *)arg0 archiver:(NSObject *)arg1;
- (KNRecordingLaserEvent *)initWithStartTime:(double)arg0;
- (KNRecordingLaserEvent *)initWithStartTime:(double)arg0 unitLocation:(struct CGPoint)arg1;
- (struct CGPoint)unitLocation;
- (KNRecordingLaserEvent *)initWithContext:(NSObject *)arg0 archive:(struct RecordingEventArchive *)arg1 unarchiver:(struct RecordingEventArchive)arg2;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNRecordingLaserEvent *)copyWithZone:(struct _NSZone *)arg0;

@end
