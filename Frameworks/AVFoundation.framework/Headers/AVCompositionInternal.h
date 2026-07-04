/* Runtime dump - AVCompositionInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionInternal : NSObject
{
    struct OpaqueFigMutableComposition * mutableComposition;
    long formatReaderInitializationOnce;
    long assetInspectorInitializationOnce;
    long tracksInitializationOnce;
    struct OpaqueFigFormatReader * formatReader;
    AVAssetInspectorLoader * assetInspectorLoader;
    AVAssetInspector * assetInspector;
    struct CGSize naturalSize;
    NSMutableArray * tracks;
}

@end
