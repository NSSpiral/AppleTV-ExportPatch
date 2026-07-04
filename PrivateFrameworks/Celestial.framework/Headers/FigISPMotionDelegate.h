/* Runtime dump - FigISPMotionDelegate
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigISPMotionDelegate : NSObject
{
    NSMutableArray * ringBuffer;
    struct _opaque_pthread_mutex_t ringMutex;
    struct ? power;
}

+ (FigISPMotionDelegate *)instance;

- (void)dealloc;
- (FigISPMotionDelegate *)init;
- (void).cxx_construct;
- (void)parseSphereDebugData:(struct sCIspMetaDataSharedOIS *)arg0;
- (void)addMotionData:(NSData *)arg0;
- (NSData *)getMotionData;

@end
