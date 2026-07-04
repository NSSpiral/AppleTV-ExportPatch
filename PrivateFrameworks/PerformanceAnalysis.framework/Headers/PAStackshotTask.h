/* Runtime dump - PAStackshotTask
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshotTask : NSObject
{
    struct task_snapshot * _task_snap;
    PAStackshot * _stackshot;
    long _bytesUsedByThreads;
    long _bytesAvailableForThreads;
    void * _imageInfos;
    void * _mainBinary;
    int * _donationReceivingPids;
}

@property (readonly) int pid;
@property (readonly) char * name;
@property (readonly) char isDarwinBG;
@property (readonly) char isSuppressed;
@property (readonly) char isForeground;

- (char *)name;
- (char)isForeground;
- (int)pid;
- (char)isFromMicrostackshot;
- (char)isDarwinBG;
- (unsigned int)powerstatsFlags;
- (char)setBufferPosition:(char *)arg0 withRemainingBytes:(unsigned long)arg1;
- (unsigned long)bytesUsedInBuffer;
- (unsigned long)_bytesUsedByImageInfos;
- (unsigned long)_bytesUsedByDonationReceivingPids;
- (char)isSuppressed;
- (unsigned long)bytesUsedByHeader;
- (void)iterateThreads:(id)arg0;
- (unsigned long)bytesUsedByThreads;
- (PAStackshotTask *)initWithStackshot:(PAStackshot *)arg0;
- (unsigned int)numImageInfos;
- (struct dyld_uuid_info_64)mainBinary;
- (id)copyImageInfos;
- (id)copyDonationReceivingPids;
- (struct task_snapshot *)task_snap;

@end
