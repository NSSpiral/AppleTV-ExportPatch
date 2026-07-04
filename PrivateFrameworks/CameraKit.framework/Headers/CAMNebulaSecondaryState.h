/* Runtime dump - CAMNebulaSecondaryState
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMNebulaSecondaryState : NSObject <NSCoding>
{
    NSDate * _stopTime;
    int _stopReasons;
    NSDate * _lastMovieWriteAttemptTime;
    int _movieWriteAttemptsCount;
    int _failedStateReadAttemptsCount;
}

@property (retain, nonatomic) NSDate * stopTime;
@property (nonatomic) int stopReasons;
@property (readonly, nonatomic) NSDate * lastMovieWriteAttemptTime;
@property (readonly, nonatomic) int movieWriteAttemptsCount;
@property (nonatomic) int failedStateReadAttemptsCount;

+ (NSString *)secondaryStateWithContentsOfFile:(NSString *)arg0;

- (CAMNebulaSecondaryState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (int)stopReasons;
- (char)addStopReasons:(int)arg0 stopTime:(NSDate *)arg1;
- (int)failedStateReadAttemptsCount;
- (int)movieWriteAttemptsCount;
- (NSDate *)lastMovieWriteAttemptTime;
- (void)setStopReasons:(int)arg0;
- (void)notifyWillAttemptToWriteMovie;
- (char)writeToFile:(NSString *)arg0;
- (void)setFailedStateReadAttemptsCount:(int)arg0;
- (void)setStopTime:(NSDate *)arg0;
- (NSDate *)stopTime;

@end
