/* Runtime dump - AVImageQueue
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVImageQueue : NSObject
{
    struct _CAImageQueue * _caQueue;
    struct OpaqueFigImageQueue * _figQueue;
    unsigned int _slot;
}

+ (NSString *)drawingContext;

- (void)dealloc;
- (AVImageQueue *)init;
- (void)stop;
- (void)start;
- (void)pause;
- (unsigned int)setVideoDestination:(NSObject *)arg0;
- (void)getQueueRepresentation:(void *)arg0;
- (char)enqueueFrame:(struct __CVBuffer *)arg0 atTime:(struct ?)arg1;

@end
