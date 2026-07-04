/* Runtime dump - BWMonochromeEffectNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMonochromeEffectNode : BWNode
{
    struct opaqueCMFormatDescription * _outputFormatDescription;
}

- (void)dealloc;
- (BWMonochromeEffectNode *)init;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;

@end
