/* Runtime dump - FigVideoLayerInternal
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigVideoLayerInternal : NSObject
{
    char isPresentationLayer;
    char visible;
    struct OpaqueFigSimpleMutex * serializationMutex;
    NSObject<OS_dispatch_queue> * notificationSerialQueue;
}

@end
