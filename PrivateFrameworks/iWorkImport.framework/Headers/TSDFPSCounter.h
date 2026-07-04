/* Runtime dump - TSDFPSCounter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFPSCounter : NSObject
{
    NSMutableArray * _dateArray;
    double _startTimeInterval;
    double _endTimeInterval;
    unsigned int _frameCount;
}

- (void)addFrameAtDrawTime:(double)arg0 duration:(double)arg1;
- (NSObject *)p_fpsSummaryStringIncludingGraph:(char)arg0;
- (NSDictionary *)p_getFPSInfo:(char)arg0;
- (void)addFrame;
- (void)addFrameAtDrawTime:(double)arg0;
- (NSString *)fpsSummaryString;
- (NSString *)fpsGraphString;
- (void)writeFPSInfoToLog:(id)arg0 identifier:(NSString *)arg1 type:(NSObject *)arg2 direction:(TDThemeDirection *)arg3 duration:(double)arg4 graphing:(char)arg5 slide:(int)arg6;
- (void)dealloc;
- (TSDFPSCounter *)init;
- (void)reset;

@end
