/* Runtime dump - IKJSFoundation
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSFoundation : NSObject
{
    IKAppContext * _appContext;
    NSMutableDictionary * _jsTimers;
    NSMutableDictionary * _dateFormatterCache;
    <IKAppDeviceConfig> * _deviceConfig;
}

@property (weak, nonatomic) IKAppContext * appContext;
@property (retain, nonatomic) NSMutableDictionary * jsTimers;
@property (retain, nonatomic) NSMutableDictionary * dateFormatterCache;
@property (weak, nonatomic) <IKAppDeviceConfig> * deviceConfig;

- (void).cxx_destruct;
- (IKAppContext *)appContext;
- (IKJSFoundation *)initWithAppContext:(IKAppContext *)arg0 deviceConfig:(<IKAppDeviceConfig> *)arg1;
- (void)stopTimers;
- (id)setInterval:(double)arg0 time:(int)arg1;
- (void)clearInterval:(id)arg0;
- (id)setTimeout:(AWDSiriSessionLoadTimeout *)arg0 time:(int)arg1;
- (void)clearTimeout:(id)arg0;
- (void)setAppContext:(IKAppContext *)arg0;
- (NSURL *)getCookieForURL:(NSURL *)arg0 useSSCookieStorage:(char)arg1;
- (void)setCookie:(NSString *)arg0 useSSCookieStorage:(char)arg1;
- (void)clearCookies;
- (<IKAppDeviceConfig> *)deviceConfig;
- (void)setDeviceConfig:(<IKAppDeviceConfig> *)arg0;
- (NSTimer *)_startTimer:(NSObject *)arg0 time:(int)arg1 repeating:(char)arg2;
- (void)_clearTimer:(NSObject *)arg0;
- (NSMutableDictionary *)jsTimers;
- (void)_jsTimerFired:(id)arg0;
- (NSString *)_stringForKey:(NSString *)arg0 fromDict:(id)arg1;
- (void)setJsTimers:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)dateFormatterCache;
- (void)setDateFormatterCache:(NSMutableDictionary *)arg0;

@end
