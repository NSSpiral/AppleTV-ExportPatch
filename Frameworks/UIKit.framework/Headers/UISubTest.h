/* Runtime dump - UISubTest
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISubTest : NSObject
{
    NSNumber * _startTime;
    NSNumber * _startFrame;
    NSMutableArray * _time;
    NSMutableArray * _fps;
    NSString * _testName;
    char _showTime;
    char _showFps;
}

- (UISubTest *)initWithName:(NSString *)arg0 metrics:(struct ?)arg1;
- (void)startWithFrameCount:(int)arg0;
- (void)stopWithFrameCount:(int)arg0;
- (NSMutableData *)outputData;
- (void).cxx_destruct;

@end
