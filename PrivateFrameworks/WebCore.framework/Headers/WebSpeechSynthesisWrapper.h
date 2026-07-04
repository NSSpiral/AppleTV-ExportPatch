/* Runtime dump - WebSpeechSynthesisWrapper
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate>
{
    struct PlatformSpeechSynthesizer * m_synthesizerObject;
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> m_utterance;
    struct RetainPtr<AVSpeechSynthesizer> m_synthesizer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (void)resume;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)pause;
- (float)mapSpeechRateToPlatformRate:(float)arg0;
- (void)speakUtterance:(struct PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance>)arg0;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 didStartSpeechUtterance:(id)arg1;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 didFinishSpeechUtterance:(id)arg1;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 didPauseSpeechUtterance:(id)arg1;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 didContinueSpeechUtterance:(id)arg1;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 didCancelSpeechUtterance:(id)arg1;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 willSpeakRangeOfSpeechString:(struct _NSRange)arg1 utterance:(NSString *)arg2;
- (WebSpeechSynthesisWrapper *)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer *)arg0;

@end
