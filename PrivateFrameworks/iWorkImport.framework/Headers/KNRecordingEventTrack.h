/* Runtime dump - KNRecordingEventTrack
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingEventTrack : TSPObject
{
    NSString * mType;
    NSArray * mEvents;
}

@property (readonly, nonatomic) NSString * type;
@property (readonly, nonatomic) NSArray * events;

- (KNRecordingEventTrack *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct RecordingEventTrackArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct RecordingEventTrackArchive *)arg0 unarchiver:(struct RecordingEventTrackArchive)arg1;
- (KNRecordingEventTrack *)initWithContext:(NSObject *)arg0 type:(NSString *)arg1 events:(NSArray *)arg2;
- (id)eventTrackByReplacingSegmentAfterTime:(double)arg0 withEventTrack:(NSObject *)arg1;
- (NSArray *)events;
- (void)dealloc;
- (NSString *)type;
- (KNRecordingEventTrack *)initWithContext:(TSPObjectContext *)arg0;

@end
