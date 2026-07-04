/* Runtime dump - TIKeyboardInputManagerStub
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TIKeyboardInputManagerStub *)serverInterface;
+ (void)setClassesForSelectorsReplyingWithCandidatesInInterface:(id)arg0;

- (void)textAccepted:(id)arg0;
- (void)syncToKeyboardState:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)handleKeyboardInput:(NSObject *)arg0 keyboardState:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)generateCandidatesWithKeyboardState:(NSObject *)arg0 candidateRange:(struct _NSRange)arg1 completionHandler:(id /* block */)arg2;
- (void)generateAutocorrectionsWithKeyboardState:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)handleAcceptedCandidate:(NSDate *)arg0 keyboardState:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)generateReplacementsForString:(NSString *)arg0 keyLayout:(TIKeyboardLayout *)arg1 continuation:(unsigned long long)arg2;
- (void)skipHitTestForTouchEvent:(NSObject *)arg0 keyboardState:(NSObject *)arg1;
- (void)performHitTestForTouchEvent:(NSObject *)arg0 keyboardState:(NSObject *)arg1 continuation:(unsigned long long)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(char)arg0 keyboardState:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)lastAcceptedCandidateCorrected;
- (void)setOriginalInput:(NSObject *)arg0;
- (void)candidateRejected:(id)arg0;
- (void)writeTypologyLogWithCompletionHandler:(id /* block */)arg0;
- (void)generateRefinementsForCandidate:(NSDate *)arg0 keyboardState:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (NSDictionary *)keyboardConfiguration;

@end
