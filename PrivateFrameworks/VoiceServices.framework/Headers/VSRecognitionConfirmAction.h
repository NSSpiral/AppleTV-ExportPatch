/* Runtime dump - VSRecognitionConfirmAction
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction
{
    VSRecognitionAction * _confirmedAction;
    VSRecognitionAction * _deniedAction;
    struct ? _confirmFlags;
}

- (void)dealloc;
- (VSRecognitionConfirmAction *)init;
- (int)completionType;
- (VSRecognitionConfirmAction *)initWithModelIdentifier:(NSString *)arg0;
- (void)_setConfirmed:(char)arg0;
- (void)setConfirmedAction:(VSRecognitionAction *)arg0;
- (VSRecognitionAction *)confirmedAction;
- (void)setDeniedAction:(VSRecognitionAction *)arg0;
- (VSRecognitionAction *)deniedAction;

@end
