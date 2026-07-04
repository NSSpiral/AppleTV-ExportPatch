/* Runtime dump - AFSpeechCorrectionInfo
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>
{
    int _alternativeSelectionCount;
    int _characterModificationCount;
    NSString * _correctedText;
}

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic) int characterModificationCount;
@property (copy, nonatomic) NSString * correctedText;

+ (char)supportsSecureCoding;

- (AFSpeechCorrectionInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setAlternativeSelectionCount:(int)arg0;
- (void)setCharacterModificationCount:(int)arg0;
- (void)setCorrectedText:(NSString *)arg0;
- (int)alternativeSelectionCount;
- (int)characterModificationCount;
- (NSString *)correctedText;

@end
