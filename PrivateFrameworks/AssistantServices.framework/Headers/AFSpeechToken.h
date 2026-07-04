/* Runtime dump - AFSpeechToken
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechToken : NSObject <NSSecureCoding>
{
    char _removeSpaceBefore;
    char _removeSpaceAfter;
    NSString * _text;
    int _confidenceScore;
    double _startTime;
    double _endTime;
}

@property (copy, nonatomic) NSString * text;
@property (nonatomic) int confidenceScore;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) char removeSpaceBefore;
@property (nonatomic) char removeSpaceAfter;

+ (char)supportsSecureCoding;

- (void)setEndTime:(double)arg0;
- (AFSpeechToken *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)setStartTime:(double)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (char)removeSpaceBefore;
- (char)removeSpaceAfter;
- (int)confidenceScore;
- (void)setConfidenceScore:(int)arg0;
- (void)setRemoveSpaceAfter:(char)arg0;
- (void)setRemoveSpaceBefore:(char)arg0;
- (double)endTime;

@end
