/* Runtime dump - AVCaptureMetadataInputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataInputInternal : NSObject
{
    AVCaptureInputPort * metadataPort;
    NSString * sourceID;
    struct opaqueCMFormatDescription * desc;
    struct OpaqueCMClock * clock;
    struct OpaqueCMBlockBuffer * emptyBoxedMetadata;
}

@end
