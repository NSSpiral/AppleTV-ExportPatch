/* Runtime dump - SnapshotTimer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface SnapshotTimer : NSObject
{
    char taskIsComplete;
}

@property (nonatomic) char taskIsComplete;

+ (void)takeSnapshotForTask:(NSObject *)arg0;

- (SnapshotTimer *)init;
- (void)checkinWithTimeout:(double)arg0 forTask:(NSObject *)arg1;
- (void)checkout;
- (char)taskIsComplete;
- (void)setTaskIsComplete:(char)arg0;

@end
