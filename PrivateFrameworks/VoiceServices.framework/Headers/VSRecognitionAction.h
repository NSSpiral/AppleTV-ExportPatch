/* Runtime dump - VSRecognitionAction
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionAction : NSObject
{
    NSString * _resultString;
    NSString * _statusString;
    id _spokenString;
    VSRecognitionSession * _session;
    id _spokenStringIsAttributed;
}

- (char)cancel;
- (void)dealloc;
- (NSString *)perform;
- (int)completionType;
- (void)_continueAfterDeferredStart;
- (char)_hasDeferredStartCallback;
- (void)_setSession:(NSObject *)arg0;
- (NSString *)spokenFeedbackString;
- (NSString *)spokenFeedbackAttributedString;
- (NSString *)resultDisplayString;
- (NSString *)statusDisplayString;
- (char)sensitiveActionsEnabled;
- (VSRecognitionSession *)_session;
- (void)setResultDisplayString:(NSString *)arg0;
- (void)setStatusDisplayString:(NSString *)arg0;
- (void)setSpokenFeedbackString:(NSString *)arg0;
- (void)setSpokenFeedbackAttributedString:(NSString *)arg0;
- (void)completeWithNextAction:(NSObject *)arg0 error:(NSError *)arg1;

@end
