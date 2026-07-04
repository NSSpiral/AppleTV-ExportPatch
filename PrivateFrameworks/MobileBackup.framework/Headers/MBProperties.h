/* Runtime dump - MBProperties
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBProperties : NSObject
{
    NSMutableDictionary * _plist;
    char _protect;
    char _protected;
}

@property (readonly, nonatomic) id propertyList;
@property (nonatomic) char protected;
@property (nonatomic) double systemDomainsVersion;
@property (retain, nonatomic) NSData * keybagData;
@property (retain, nonatomic) NSDate * date;
@property (nonatomic) double version;
@property (nonatomic) char passcodeSet;
@property (nonatomic) char encrypted;
@property (readonly, nonatomic) NSDictionary * containers;
@property (readonly, nonatomic) NSDictionary * appleIDs;
@property (retain, nonatomic) NSString * activeAppleID;
@property (retain, nonatomic) NSDictionary * lockdownKeys;
@property (readonly, nonatomic) NSString * deviceID;
@property (readonly, nonatomic) NSString * serialNumber;
@property (readonly, nonatomic) NSString * deviceName;
@property (readonly, nonatomic) NSString * productType;
@property (readonly, nonatomic) NSString * buildVersion;
@property (readonly, nonatomic) char hasCorruptSQLiteDBs;

+ (NSDictionary *)properties;
+ (NSString *)propertiesWithFile:(NSString *)arg0 error:(id *)arg1;

- (char)writeToFile:(NSString *)arg0 error:(id *)arg1;
- (NSArray *)propertyList;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (MBProperties *)init;
- (NSString *)description;
- (char)_boolForKey:(NSString *)arg0;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (NSString *)buildVersion;
- (void)setVersion:(double)arg0;
- (double)version;
- (MBProperties *)initWithData:(NSData *)arg0 error:(id *)arg1;
- (NSString *)productType;
- (NSString *)deviceID;
- (void)addContainer:(NSObject *)arg0;
- (NSString *)containerWithIdentifier:(NSString *)arg0;
- (NSString *)deviceName;
- (void)setEncrypted:(char)arg0;
- (char)isEncrypted;
- (NSString *)serialNumber;
- (NSString *)_dictionaryForKey:(NSString *)arg0;
- (NSString *)_dataForKey:(NSString *)arg0;
- (MBProperties *)initWithFile:(NSString *)arg0 error:(id *)arg1;
- (double)systemDomainsVersion;
- (void)setSystemDomainsVersion:(double)arg0;
- (void)_setBool:(char)arg0 forKey:(NSString *)arg1;
- (void)_setData:(NSData *)arg0 forKey:(NSString *)arg1;
- (void)_setDictionary:(NSDictionary *)arg0 forKey:(NSString *)arg1;
- (NSDictionary *)lockdownKeys;
- (NSString *)_stringForLockdownKey:(NSString *)arg0;
- (NSDictionary *)appleIDs;
- (char)wasPasscodeSet;
- (NSData *)keybagData;
- (void)setKeybagData:(NSData *)arg0;
- (void)setPasscodeSet:(char)arg0;
- (void)setLockdownKeys:(NSDictionary *)arg0;
- (char)hasCorruptSQLiteDBs;
- (void)addAppleIDsFromSet:(NSSet *)arg0;
- (NSString *)activeAppleID;
- (void)setActiveAppleID:(NSString *)arg0;
- (void)addContainersFromArray:(NSArray *)arg0;
- (char)isProtected;
- (void)setProtected:(char)arg0;
- (NSDictionary *)containers;

@end
