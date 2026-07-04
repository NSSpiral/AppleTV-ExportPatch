/* Runtime dump - BWFileSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFileSinkNode : BWSinkNode
{
    <BWNodeFileWriterStatusDelegate> * _recordingStatusDelegate;
}

@property (nonatomic) <BWNodeFileWriterStatusDelegate> * recordingStatusDelegate;
@property (readonly, nonatomic) unsigned long long lastFileSize;
@property (readonly, nonatomic) struct ? lastFileDuration;

- (BWFileSinkNode *)init;
- (<BWNodeFileWriterStatusDelegate> *)recordingStatusDelegate;
- (struct ?)lastFileDuration;
- (unsigned long long)lastFileSize;
- (void)setRecordingStatusDelegate:(<BWNodeFileWriterStatusDelegate> *)arg0;

@end
