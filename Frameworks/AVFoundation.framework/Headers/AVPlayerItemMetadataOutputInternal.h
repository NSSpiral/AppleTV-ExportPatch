/* Runtime dump - AVPlayerItemMetadataOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemMetadataOutputInternal : NSObject
{
    NSArray * metadataIdentifiers;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    NSObject<OS_dispatch_queue> * accumulationQueue;
    AVWeakReference * weakReferenceToHost;
    double advanceInterval;
    struct __CFDictionary * accumulatedMetadataGroups;
}

@end
