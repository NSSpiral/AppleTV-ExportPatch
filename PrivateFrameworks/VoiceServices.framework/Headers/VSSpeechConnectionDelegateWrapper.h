/* Runtime dump - VSSpeechConnectionDelegateWrapper
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>
{
    <VSSpeechConnectionDelegate> * _delegate;
    VSSpeechRequest * _request;
    VSSpeechConnection * _connection;
}

@property (weak, nonatomic) <VSSpeechConnectionDelegate> * delegate;
@property (retain, nonatomic) VSSpeechRequest * request;
@property (weak, nonatomic) VSSpeechConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<VSSpeechConnectionDelegate> *)arg0;
- (<VSSpeechConnectionDelegate> *)delegate;
- (VSSpeechRequest *)request;
- (void).cxx_destruct;
- (VSSpeechConnection *)connection;
- (void)setConnection:(VSSpeechConnection *)arg0;
- (void)setRequest:(VSSpeechRequest *)arg0;
- (void)speechRequestDidStart;
- (void)speechRequestDidPause;
- (void)speechRequestDidContinue;
- (void)speechRequestMark:(SEL)arg0 didStartForRange:(int)arg1;
- (void)speechRequestDidStopWithSuccess:(SEL)arg0 phonemesSpoken:(char)arg1 error:(NSError *)arg2;

@end
