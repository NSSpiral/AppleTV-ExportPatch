/* Runtime dump - KNRecordingNavigationEvent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingNavigationEvent : KNRecordingEvent
{
    TSPLazyReference * mTargetSlideNodeReference;
    unsigned int mTargetEventIndex;
    int mAnimationPhase;
}

@property (readonly, nonatomic) KNSlideNode * targetSlideNode;
@property (readonly, nonatomic) unsigned int targetEventIndex;
@property (readonly, nonatomic) int animationPhase;

- (void)saveToArchive:(struct RecordingEventArchive *)arg0 archiver:(NSObject *)arg1;
- (KNRecordingNavigationEvent *)initWithStartTime:(double)arg0;
- (char)isIgnoredWhenSeeking;
- (char)canPrecedeDiscontinuity;
- (KNRecordingNavigationEvent *)initWithContext:(NSObject *)arg0 archive:(struct RecordingEventArchive *)arg1 unarchiver:(struct RecordingEventArchive)arg2;
- (KNRecordingNavigationEvent *)initWithStartTime:(double)arg0 targetSlideNode:(KNSlideNode *)arg1 targetEventIndex:(unsigned int)arg2 animationPhase:(int)arg3;
- (KNSlideNode *)targetSlideNode;
- (unsigned int)targetEventIndex;
- (int)animationPhase;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (KNRecordingNavigationEvent *)copyWithZone:(struct _NSZone *)arg0;

@end
