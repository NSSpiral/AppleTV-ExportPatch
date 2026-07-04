/* Runtime dump - AFSUPFunctionProvider
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider>
{
    NSDateFormatter * _dateFormatter;
    NSDateFormatter * _timeFormatter;
    char _useSpeechMode;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_shouldAutomaticallyProvideFunctions;

- (AFSUPFunctionProvider *)init;
- (void).cxx_destruct;
- (void)useSpeechMode:(char)arg0;
- (NSObject *)stringForExpression:(NSObject *)arg0;
- (NSObject *)_dateFormattedWithFormatter:(NSObject *)arg0 arguments:(NSDictionary *)arg1;
- (id)_currentTime:(id)arg0;
- (NSDate *)_currentShortDate:(NSDate *)arg0;
- (NSDate *)_currentLongDate:(NSDate *)arg0;
- (id)_currentWeekday:(id)arg0;
- (id)_tempInWeatherUnits:(id)arg0;
- (NSString *)_deviceModel;
- (NSString *)_lowercaseString:(NSString *)arg0;
- (id)_callFunction:(id)arg0 withArguments:(NSDictionary *)arg1;
- (AFSUPFunctionProvider *)initWithLocale:(NSLocale *)arg0;

@end
