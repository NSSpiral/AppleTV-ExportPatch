/* Runtime dump - AVPlayerMediaSelectionCriteriaInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerMediaSelectionCriteriaInternal : NSObject
{
    NSArray * _preferredLanguages;
    NSArray * _requiredMediaCharacteristics;
    NSArray * _preferredMediaCharacteristics;
    NSArray * _precludedMediaCharacteristics;
    NSArray * _preferredMediaSubTypes;
    NSArray * _precludedMediaSubTypes;
    char _preferMultichannelAudio;
    char _precludeMultichannelAudio;
}

@property (retain, nonatomic) NSArray * preferredLanguages;
@property (retain, nonatomic) NSArray * requiredMediaCharacteristics;
@property (retain, nonatomic) NSArray * preferredMediaCharacteristics;
@property (retain, nonatomic) NSArray * precludedMediaCharacteristics;
@property (retain, nonatomic) NSArray * preferredMediaSubTypes;
@property (retain, nonatomic) NSArray * precludedMediaSubTypes;
@property (nonatomic) char preferMultichannelAudio;
@property (nonatomic) char precludeMultichannelAudio;

- (NSArray *)requiredMediaCharacteristics;
- (void)setRequiredMediaCharacteristics:(NSArray *)arg0;
- (NSArray *)preferredMediaCharacteristics;
- (void)setPreferredMediaCharacteristics:(NSArray *)arg0;
- (NSArray *)precludedMediaCharacteristics;
- (void)setPrecludedMediaCharacteristics:(NSArray *)arg0;
- (NSArray *)preferredMediaSubTypes;
- (void)setPreferredMediaSubTypes:(NSArray *)arg0;
- (NSArray *)precludedMediaSubTypes;
- (void)setPrecludedMediaSubTypes:(NSArray *)arg0;
- (char)preferMultichannelAudio;
- (void)setPreferMultichannelAudio:(char)arg0;
- (char)precludeMultichannelAudio;
- (void)setPrecludeMultichannelAudio:(char)arg0;
- (void)setPreferredLanguages:(NSArray *)arg0;
- (void)dealloc;
- (NSArray *)preferredLanguages;

@end
