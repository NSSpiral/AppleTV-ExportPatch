/* Runtime dump - VSRecognitionURLAction
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionURLAction : VSRecognitionAction
{
    NSURL * _url;
}

- (void)dealloc;
- (NSURL *)URL;
- (NSString *)perform;
- (void)setURL:(NSString *)arg0;
- (int)completionType;

@end
