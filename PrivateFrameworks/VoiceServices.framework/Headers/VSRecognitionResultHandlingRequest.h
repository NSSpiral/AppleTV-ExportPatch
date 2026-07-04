/* Runtime dump - VSRecognitionResultHandlingRequest
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResultHandlingRequest : NSObject
{
    <VSRecognitionResultHandler> * _handler;
    NSArray * _results;
    VSRecognitionAction * _action;
}

- (void)dealloc;
- (NSArray *)results;
- (<VSRecognitionResultHandler> *)handler;
- (VSRecognitionResultHandlingRequest *)initWithHandler:(<VSRecognitionResultHandler> *)arg0 results:(NSArray *)arg1;
- (NSObject *)nextAction;
- (void)setNextAction:(NSObject *)arg0;

@end
