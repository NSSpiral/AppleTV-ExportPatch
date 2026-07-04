/* Runtime dump - AVMutableVideoCompositionInstruction
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction
{
    AVMutableVideoCompositionInstructionInternal * _mutableInstruction;
}

@property (nonatomic) struct ? timeRange;
@property (retain, nonatomic) struct CGColor * backgroundColor;
@property (copy, nonatomic) NSArray * layerInstructions;
@property (nonatomic) char enablePostProcessing;

+ (<AVVideoCompositionInstruction> *)videoCompositionInstruction;

- (NSArray *)layerInstructions;
- (char)enablePostProcessing;
- (void)setEnablePostProcessing:(char)arg0;
- (void)setLayerInstructions:(NSArray *)arg0;
- (void)setBackgroundColor:(struct CGColor *)arg0;
- (struct CGColor *)backgroundColor;
- (struct ?)timeRange;
- (void)setTimeRange:(struct ?)arg0;

@end
