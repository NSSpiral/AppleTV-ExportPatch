/* Runtime dump - CTRadioAccessTechnology
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTRadioAccessTechnology : NSObject
{
    CTTelephonyNetworkInfo * _networkInfo;
}

@property (readonly) NSString * radioAccessTechnology;

- (CTRadioAccessTechnology *)initWithCTTelephonyNetworkInfo:(NSDictionary *)arg0;
- (NSString *)radioAccessTechnology;
- (void)dealloc;
- (CTRadioAccessTechnology *)init;

@end
