/* Runtime dump - BWNodeConfigurationLiveMessage
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeConfigurationLiveMessage : BWNodeMessage
{
    long long _configurationID;
    BWFormat * _updatedFormat;
}

@property (readonly) long long configurationID;
@property (readonly) BWFormat * updatedFormat;

+ (NSDictionary *)newMessageWithConfigurationID:(long long)arg0 updatedFormat:(BWFormat *)arg1;
+ (NSDictionary *)newMessageWithConfigurationID:(long long)arg0;

- (long long)configurationID;
- (void)dealloc;
- (BWFormat *)updatedFormat;
- (NSDictionary *)_initWithConfigurationID:(long long)arg0 updatedFormat:(BWFormat *)arg1;

@end
