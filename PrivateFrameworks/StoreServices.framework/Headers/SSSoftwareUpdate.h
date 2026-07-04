/* Runtime dump - SSSoftwareUpdate
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdate : NSObject
{
    NSDictionary * _dictionary;
    NSDate * _installDate;
    int _updateState;
}

@property (readonly, nonatomic) NSDictionary * updateDictionary;
@property (readonly, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSDate * installDate;
@property (readonly, nonatomic) int parentalControlsRank;
@property (readonly, nonatomic) long long storeItemIdentifier;
@property (nonatomic) int updateState;

- (long long)storeItemIdentifier;
- (void)dealloc;
- (NSString *)bundleIdentifier;
- (int)updateState;
- (SSSoftwareUpdate *)initWithUpdateDictionary:(NSDictionary *)arg0;
- (void)setUpdateState:(int)arg0;
- (void)setInstallDate:(NSDate *)arg0;
- (NSDate *)installDate;
- (NSDictionary *)updateDictionary;
- (int)parentalControlsRank;

@end
