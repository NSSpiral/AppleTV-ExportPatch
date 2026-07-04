/* Runtime dump - VCImageAttributeRules
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCImageAttributeRules : NSObject
{
    NSMutableDictionary * _imageAttributeRules;
}

@property (retain, nonatomic) NSMutableDictionary * imageAttributeRules;

- (void)dealloc;
- (VCImageAttributeRules *)init;
- (NSString *)description;
- (NSMutableDictionary *)imageAttributeRules;
- (void)setImageAttributeRules:(NSMutableDictionary *)arg0;
- (id)extractDimensionsForInterface:(int)arg0 direction:(int)arg1;
- (void)swapSendAndReceiveRules;
- (void)addRuleForVideoPayload:(int)arg0 withDirection:(int)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 priority:(int)arg5 interface:(int)arg6;
- (void)interfaceKey:(id *)arg0 forInterface:(int)arg1 directionKey:(id *)arg2 forDirection:(int)arg3;

@end
