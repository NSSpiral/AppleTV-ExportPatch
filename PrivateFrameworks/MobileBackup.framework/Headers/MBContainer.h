/* Runtime dump - MBContainer
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBContainer : NSObject <NSCopying>
{
    NSMutableDictionary * _plist;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic) NSString * containerTypeString;
@property (retain, nonatomic) NSString * containerDir;
@property (readonly, nonatomic) NSString * safeHarborDir;
@property (retain, nonatomic) NSDate * datePlacedInSafeHarbor;
@property (readonly, nonatomic) char safeHarbor;

+ (NSArray *)containerWithPropertyList:(NSArray *)arg0;
+ (NSString *)containerWithDomainName:(NSString *)arg0;

- (MBContainer *)initWithPropertyList:(NSArray *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)identifier;
- (NSString *)domain;
- (MBContainer *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)propertyListForBackupProperties;
- (char)isSafeHarbor;
- (NSDate *)datePlacedInSafeHarbor;
- (NSString *)safeHarborDir;
- (NSString *)containerTypeString;
- (void)setContainerDir:(NSString *)arg0;
- (void)setDatePlacedInSafeHarbor:(NSDate *)arg0;
- (NSDictionary *)propertyListForSafeHarborInfo;
- (NSString *)containerDir;
- (int)containerType;

@end
