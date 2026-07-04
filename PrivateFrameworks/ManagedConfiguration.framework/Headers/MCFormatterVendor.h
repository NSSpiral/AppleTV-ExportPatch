/* Runtime dump - MCFormatterVendor
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCFormatterVendor : NSObject
{
    NSNumberFormatter * _numberFormatter;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

+ (MCFormatterVendor *)sharedInstance;

- (NSNumberFormatter *)numberFormatter;
- (void)dealloc;
- (MCFormatterVendor *)init;
- (void).cxx_destruct;
- (void)_localeDidChange:(NSDictionary *)arg0;

@end
