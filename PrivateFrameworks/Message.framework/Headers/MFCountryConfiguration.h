/* Runtime dump - MFCountryConfiguration
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFCountryConfiguration : NSObject
{
    int _lock;
    NSConditionLock * _generatorLock;
    NSString * _lastCountryCode;
    NSString * _countryCode;
}

@property (readonly, copy, nonatomic) NSString * countryCode;

+ (MFCountryConfiguration *)sharedConfiguration;

- (void)dealloc;
- (MFCountryConfiguration *)init;
- (void)invalidate;
- (id)_cellSimCountryCode;
- (id)_networkCountryCode;
- (id)_countryCodeWithGenerator:(id)arg0;
- (void)updateCurrentCountry;
- (NSString *)countryCode;

@end
