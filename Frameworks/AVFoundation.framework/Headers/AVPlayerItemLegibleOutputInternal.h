/* Runtime dump - AVPlayerItemLegibleOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemLegibleOutputInternal : NSObject
{
    <AVPlayerItemLegibleOutputDependencyFactory> * dependencyFactory;
    NSArray * nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVWeakReference * weakReferenceToHost;
    char suppressesPlayerRendering;
    double advanceInterval;
    NSString * textStylingResolution;
}

@end
