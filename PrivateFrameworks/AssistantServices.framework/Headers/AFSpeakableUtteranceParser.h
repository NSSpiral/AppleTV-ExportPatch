/* Runtime dump - AFSpeakableUtteranceParser
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeakableUtteranceParser : NSObject
{
    NSMutableDictionary * _providers;
    id _functionHandler;
    NSLocale * _locale;
}

@property (nonatomic) char handleTTSCodes;
@property (nonatomic) char handlesFunctions;

+ (char)_shouldAutomaticallyProvideFunctions;
+ (NSString *)parseUserGeneratedMessage:(NSString *)arg0;

- (AFSpeakableUtteranceParser *)init;
- (void).cxx_destruct;
- (void)setHandlesFunctions:(char)arg0;
- (void)registerProvider:(NSObject *)arg0 forNamespace:(CXUnqualifiedNamespace *)arg1;
- (char)handleTTSCodes;
- (char)handlesFunctions;
- (NSString *)parseStringWithFormat:(NSString *)arg0 error:(id *)arg1;
- (NSString *)parseStringWithFormat:(NSString *)arg0 includeControlCharacters:(char)arg1 error:(id *)arg2 hadEmpties:(char *)arg3;
- (NSObject *)_handleOptionalAtIndex:(unsigned int)arg0 withBuffer:(struct ?)arg1 totalLength:(unsigned short *)arg2 consumedLength:(char *)arg3;
- (NSObject *)_handleProviderAtIndex:(unsigned int)arg0 withBuffer:(struct ?)arg1 totalLength:(unsigned short *)arg2 consumedLength:(char *)arg3;
- (NSObject *)_handleControlCodeAtIndex:(unsigned int)arg0 withBuffer:(struct ?)arg1 totalLength:(unsigned short *)arg2 consumedLength:(char *)arg3 hadEmpties:(struct ?)arg4;
- (void)setHandleTTSCodes:(char)arg0;
- (id)parseStringRemovingControlCharacters:(id)arg0 error:(id *)arg1;
- (AFSpeakableUtteranceParser *)initWithLocale:(NSLocale *)arg0;

@end
