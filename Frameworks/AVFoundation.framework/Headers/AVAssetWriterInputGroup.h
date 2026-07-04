/* Runtime dump - AVAssetWriterInputGroup
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup
{
    AVAssetWriterInputGroupInternal * _internal;
}

@property (readonly, nonatomic) NSArray * inputs;
@property (readonly, nonatomic) AVAssetWriterInput * defaultInput;

+ (AVAssetWriterInputGroup *)assetWriterInputGroupWithInputs:(NSArray *)arg0 defaultInput:(AVAssetWriterInput *)arg1;

- (NSArray *)inputs;
- (AVAssetWriterInput *)defaultInput;
- (AVAssetWriterInputGroup *)initWithInputs:(NSArray *)arg0 defaultInput:(AVAssetWriterInput *)arg1;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)dealloc;
- (AVAssetWriterInputGroup *)init;
- (AVAssetWriterInputGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSDictionary *)options;
- (void)finalize;

@end
