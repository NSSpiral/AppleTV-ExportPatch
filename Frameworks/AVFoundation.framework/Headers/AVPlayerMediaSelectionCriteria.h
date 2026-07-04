/* Runtime dump - AVPlayerMediaSelectionCriteria
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerMediaSelectionCriteria : NSObject
{
    AVPlayerMediaSelectionCriteriaInternal * _criteria;
}

@property (readonly, nonatomic) NSArray * preferredLanguages;
@property (readonly, nonatomic) NSArray * preferredMediaCharacteristics;

- (NSDictionary *)figDictionary;
- (AVPlayerMediaSelectionCriteria *)initWithFigDictionary:(NSDictionary *)arg0;
- (NSArray *)preferredMediaCharacteristics;
- (NSArray *)preferredMediaSubTypes;
- (NSArray *)precludedMediaSubTypes;
- (char)preferMultichannelAudio;
- (char)precludeMultichannelAudio;
- (AVPlayerMediaSelectionCriteria *)initWithPreferredLanguages:(NSArray *)arg0 preferredMediaCharacteristics:(NSArray *)arg1 preferredMediaSubTypes:(NSArray *)arg2 precludedMediaSubTypes:(NSArray *)arg3;
- (AVPlayerMediaSelectionCriteria *)initWithPreferredLanguages:(NSArray *)arg0 preferredMediaCharacteristics:(NSArray *)arg1 preferredMediaSubTypes:(NSArray *)arg2 precludedMediaSubTypes:(NSArray *)arg3 preferMultichannelAudio:(char)arg4 precludeMultichannelAudio:(char)arg5;
- (AVPlayerMediaSelectionCriteria *)initWithPreferredLanguages:(NSArray *)arg0 preferredMediaCharacteristics:(NSArray *)arg1;
- (void)dealloc;
- (AVPlayerMediaSelectionCriteria *)init;
- (NSString *)description;
- (NSArray *)preferredLanguages;

@end
