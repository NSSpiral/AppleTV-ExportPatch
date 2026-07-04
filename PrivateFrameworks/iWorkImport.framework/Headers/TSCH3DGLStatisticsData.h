/* Runtime dump - TSCH3DGLStatisticsData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLStatisticsData : NSObject
{
    TSCH3DGLPointerCountedSet * mShadersUseCount;
    TSCH3DGLPointerCountedSet * mGeometryUseCount;
    unsigned int mFrames;
}

@property (nonatomic) unsigned int frames;

+ (NSData *)statisticsData;

- (void)activateShader:(NSObject *)arg0;
- (void)drawGeometry:(NSObject *)arg0;
- (unsigned int)frames;
- (void)setFrames:(unsigned int)arg0;
- (void)dealloc;
- (TSCH3DGLStatisticsData *)init;
- (NSString *)description;

@end
