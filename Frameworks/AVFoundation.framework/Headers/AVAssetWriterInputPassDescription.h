/* Runtime dump - AVAssetWriterInputPassDescription
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPassDescription : NSObject
{
    AVAssetWriterInputPassDescriptionInternal * _internal;
}

@property (readonly, nonatomic) NSArray * sourceTimeRanges;

- (AVAssetWriterInputPassDescription *)initWithTimeRanges:(NSArray *)arg0;
- (NSArray *)sourceTimeRanges;
- (void)dealloc;
- (AVAssetWriterInputPassDescription *)init;
- (NSString *)description;
- (void)finalize;

@end
