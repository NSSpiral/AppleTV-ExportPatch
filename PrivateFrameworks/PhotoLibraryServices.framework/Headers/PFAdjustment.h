/* Runtime dump - PFAdjustment
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFAdjustment : NSObject
{
    char _enabled;
    unsigned int _formatVersion;
    NSString * _identifier;
    NSDictionary * _settings;
    NSString * _autoIdentifier;
    NSDictionary * _autoSettings;
    NSString * _maskUUID;
}

@property (readonly, nonatomic) unsigned int formatVersion;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSDictionary * settings;
@property (readonly, nonatomic) NSString * autoIdentifier;
@property (readonly, nonatomic) NSDictionary * autoSettings;
@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) NSString * maskUUID;

+ (char)isValidArchiveDictionary:(NSDictionary *)arg0 errors:(NSMutableArray *)arg1;

- (NSDictionary *)archiveDictionary;
- (PFAdjustment *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSDictionary *)settings;
- (NSString *)identifier;
- (char)enabled;
- (void).cxx_destruct;
- (PFAdjustment *)initWithIdentifier:(NSString *)arg0 settings:(NSDictionary *)arg1 autoIdentifier:(NSString *)arg2 autoSettings:(NSDictionary *)arg3 enabled:(char)arg4;
- (PFAdjustment *)initWithIdentifier:(NSString *)arg0 settings:(NSDictionary *)arg1 autoIdentifier:(NSString *)arg2 autoSettings:(NSDictionary *)arg3 enabled:(char)arg4 maskUUID:(NSString *)arg5;
- (PFAdjustment *)initWithIdentifier:(NSString *)arg0 settings:(NSDictionary *)arg1 enabled:(char)arg2;
- (unsigned int)formatVersion;
- (NSString *)autoIdentifier;
- (NSDictionary *)autoSettings;
- (NSString *)maskUUID;
- (PFAdjustment *)initWithArchiveDictionary:(NSDictionary *)arg0;

@end
