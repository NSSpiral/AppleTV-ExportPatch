/* Runtime dump - AVPlayerInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerInternal : NSObject
{
    AVWeakReference * weakReference;
    AVWeakKeyValueObserverProxy * KVOProxy;
    AVPixelBufferAttributeMediator * pixelBufferAttributeMediator;
    NSObject<OS_dispatch_queue> * figConfigurationQueue;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * currentItem;
    struct OpaqueFigPlayer * figPlayer;
    struct OpaqueCMClock * figMasterClock;
    AVPropertyStorage * propertyStorage;
    NSMutableDictionary * pendingFigPlayerProperties;
    NSArray * expectedAssetTypes;
    AVPlayerItem * lastItem;
    struct OpaqueFigPlaybackItem * figPlaybackItemToIdentifyNextCurrentItem;
    NSMutableSet * items;
    NSObject<OS_dispatch_queue> * layersQ;
    struct __CFDictionary * videoLayers;
    NSMutableSet * subtitleLayers;
    NSMutableSet * closedCaptionLayers;
    struct CGSize cachedDisplaySize;
    NSHashTable * avPlayerLayers;
    NSString * externalPlaybackVideoGravity;
    int status;
    NSError * error;
    NSObject<OS_dispatch_queue> * stateDispatchQueue;
    NSArray * displaysUsedForPlayback;
    char needsToCreateFigPlayer;
    char logPerformanceData;
    NSDictionary * cachedFigMediaSelectionCriteriaProperty;
    struct OpaqueCMTimebase * proxyTimebase;
    char reevaluateBackgroundPlayback;
    char hostApplicationInForeground;
    char hadAssociatedOnscreenPlayerLayerWhenSuspended;
    char iapdExtendedModeIsActive;
    AVAudioSessionMediaPlayerOnly * audioSessionMediaPlayerOnly;
    NSDictionary * vibrationPattern;
    struct OpaqueFigSimpleMutex * prerollIDMutex;
    int nextPrerollIDToGenerate;
    int pendingPrerollID;
    id prerollCompletionHandler;
    char autoSwitchStreamVariants;
    char preparesItemsForPlaybackAsynchronously;
    char allowsOutOfBandTextTrackRendering;
}

@end
