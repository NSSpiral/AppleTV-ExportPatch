/* Runtime dump - CECFakeInterface
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECFakeInterface : CECInterface
{
    NSMutableDictionary * _properties;
}

+ (CECFakeInterface *)defaultTVProperties;
+ (CECFakeInterface *)defaultPlaybackDeviceProperties;

- (void)dealloc;
- (char)isValid;
- (NSMutableDictionary *)properties;
- (CECFakeInterface *)initWithInterfaceListener:(GKInterfaceListener *)arg0 properties:(NSMutableDictionary *)arg1;
- (char)sendFrame:(struct CECFrame)arg0 withRetryCount:(unsigned char)arg1 error:(id *)arg2;
- (char)pingTo:(unsigned char)arg0 acknowledged:(char *)arg1 error:(id *)arg2;
- (void)fakePropertiesChanged:(NSNotification *)arg0;
- (void)fakeTerminated;

@end
