/* Runtime dump - VideoData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface VideoData : NSObject
{
    int flags;
    int pid;
    int videoType;
    int width;
    int height;
    int parX;
    int parY;
    long long averageFrameTime;
    int averageBitRate;
}

- (int)getFlags;
- (VideoData *)initWithBuffer:(Buffer *)arg0;
- (int)getPID;
- (int)getVideoType;
- (int)getHeight;
- (int)getParX;
- (int)getParY;
- (long long)getAverageFrameTime;
- (int)getAverageBitRate;
- (int)getWidth;

@end
