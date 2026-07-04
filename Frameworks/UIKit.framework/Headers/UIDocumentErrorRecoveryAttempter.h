/* Runtime dump - UIDocumentErrorRecoveryAttempter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentErrorRecoveryAttempter : NSObject
{
    UIDocument * _document;
    id _wrappedRecoveryAttempter;
    id _continuerOrNil;
    int _silentRecoveryOptionIndex;
    id _appModalRecoveryAttempter;
    id _recoveryCancelerOrNil;
    struct ? _errorRecoveryAttempterFlags;
}

- (void)dealloc;
- (char)attemptRecoveryFromError:(NSError *)arg0 optionIndex:(unsigned int)arg1;
- (char)attemptSilentRecoveryFromError:(NSError *)arg0 error:(id *)arg1;
- (void)cancelRecovery;
- (UIDocumentErrorRecoveryAttempter *)initWithDocument:(UIDocument *)arg0 wrappedRecoveryAttempter:(id)arg1;
- (UIDocumentErrorRecoveryAttempter *)initWithDocument:(UIDocument *)arg0 silentRecoveryOptionIndex:(unsigned int)arg1 appModalRecoveryAttempter:(id)arg2 recoveryCanceler:(/* block */ id)arg3;

@end
