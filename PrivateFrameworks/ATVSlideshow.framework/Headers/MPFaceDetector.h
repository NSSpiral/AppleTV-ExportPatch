/* Runtime dump - MPFaceDetector
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFaceDetector : NSObject
{
    MPDocument * mDocument;
    NSObject<MRMarimbaPlayback> * mRenderer;
    NSOperationQueue * mDetectionQueue;
    char mIsCancelled;
    NSMutableSet * mPathsInQueue;
    NSLock * mPathQueueLock;
    NSMutableSet * mPlayingSlides;
    NSLock * mPlayingSlidesLock;
    NSLock * mStartStopLock;
    NSTimer * mCheckTimer;
}

@property (retain, nonatomic) MPDocument * document;
@property (retain, nonatomic) NSObject<MRMarimbaPlayback> * renderer;
@property (nonatomic) char isCancelled;

- (char)suspended;
- (void)setRenderer:(NSObject<MRMarimbaPlayback> *)arg0;
- (void)dealloc;
- (MPFaceDetector *)init;
- (void)suspend;
- (void)stop;
- (void)_start;
- (char)isCancelled;
- (void)start;
- (void)resume;
- (MPDocument *)document;
- (void)setDocument:(MPDocument *)arg0;
- (char)_pathIsInQueue:(NSObject *)arg0;
- (void)detectFaces:(id)arg0;
- (void)_addPathToQueue:(NSObject *)arg0;
- (void)_setupTimer;
- (void)_removePathToQueue:(NSObject *)arg0;
- (void)_checkPlayingSlides;
- (void)checkPlayingSlides;
- (void)setIsCancelled:(char)arg0;
- (NSObject<MRMarimbaPlayback> *)renderer;

@end
