/* Runtime dump - TSDFPSCACounter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFPSCACounter : TSDFPSCounter
{
    unsigned int mCAFrameCount;
    NSTimer * mTimer;
    unsigned int mMaxFrameDelta;
    char _shouldRunTimer;
}

@property (nonatomic) char shouldRunTimer;

- (void)stopLoggingFPS;
- (char)shouldRunTimer;
- (void)p_updateFrameCount;
- (void)startLoggingFPS;
- (void)setShouldRunTimer:(char)arg0;
- (TSDFPSCACounter *)init;
- (void)reset;

@end
