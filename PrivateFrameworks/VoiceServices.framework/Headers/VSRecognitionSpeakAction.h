/* Runtime dump - VSRecognitionSpeakAction
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionSpeakAction : VSRecognitionAction
{
    char _shouldTerminate;
}

- (NSString *)perform;
- (int)completionType;
- (VSRecognitionSpeakAction *)initWithSpokenFeedbackString:(NSString *)arg0 willTerminate:(char)arg1;

@end
