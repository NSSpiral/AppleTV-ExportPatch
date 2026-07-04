/* Runtime dump - TSCH3DGLStatistics
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLStatistics : NSObject
{
    unsigned int mLifespan;
    NSMutableArray * mFrames;
}

@property (readonly, nonatomic) TSCH3DGLStatisticsData * allFramesStatistics;
@property (readonly, nonatomic) TSCH3DGLStatisticsData * currentFrameStatistics;

- (void)activateShader:(NSObject *)arg0;
- (void)drawGeometry:(NSObject *)arg0;
- (void)pushStatistics;
- (TSCH3DGLStatisticsData *)allFramesStatistics;
- (TSCH3DGLStatisticsData *)currentFrameStatistics;
- (void)dealloc;
- (TSCH3DGLStatistics *)init;
- (NSString *)description;
- (void)endFrame;
- (void)beginFrame;

@end
