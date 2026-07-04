/* Runtime dump - FigCaptionLayerPrivate
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCaptionLayerPrivate : NSObject
{
    struct OpaqueFigCFCaptionRenderer * renderer;
    NSMutableArray * captionElementLayers;
    struct OpaqueFigSimpleMutex * renderMutex;
    struct OpaqueFigReentrantMutex * layoutSublayersMutex;
}

@end
