/* Runtime dump - CoreCECTypesInternal
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECTypesInternal : NSObject
{
    NSArray * deckControlConstants;
    NSArray * deckControlStrings;
    NSArray * deckInfoConstants;
    NSArray * deckInfoStrings;
    NSArray * deviceTypesConstants;
    NSArray * deviceTypesStrings;
    NSArray * playModeConstants;
    NSArray * playModeStrings;
    NSArray * requestTypeConstants;
    NSArray * requestTypeStrings;
    NSArray * systemAudioModeStatusConstants;
    NSArray * systemAudioModeStatusStrings;
    NSArray * uiCommandConstants;
    NSArray * uiCommandStrings;
}

+ (CoreCECTypesInternal *)defaultTypes;

- (void)dealloc;
- (CoreCECTypesInternal *)init;
- (NSObject *)stringForUICommand:(unsigned int)arg0;
- (NSObject *)stringForDeviceType:(unsigned int)arg0;
- (NSDictionary *)stringForDeckInfo:(unsigned int)arg0;
- (NSString *)stringForDeckControlMode:(unsigned int)arg0;
- (NSString *)stringForPlayMode:(unsigned int)arg0;
- (NSObject *)stringForRequestType:(unsigned int)arg0;
- (NSString *)stringForSystemAudioStatus:(unsigned int)arg0;
- (unsigned int)deckControlModeForString:(NSString *)arg0;
- (unsigned int)deckInfoForString:(NSString *)arg0;
- (unsigned int)playModeForString:(NSString *)arg0;
- (unsigned int)deviceTypeForString:(NSString *)arg0;
- (unsigned int)requestTypeForString:(NSString *)arg0;
- (unsigned int)systemAudioStatusForString:(NSString *)arg0;
- (unsigned int)uiCommandForString:(NSString *)arg0;

@end
