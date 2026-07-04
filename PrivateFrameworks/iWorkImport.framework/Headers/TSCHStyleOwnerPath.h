/* Runtime dump - TSCHStyleOwnerPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerPath : NSObject <NSCopying>
{
    NSArray * mUuids;
}

@property (readonly, nonatomic) NSArray * uuids;

+ (TSCHStyleOwnerPath *)instanceWithArchive:(struct StyleOwnerPath *)arg0 unarchiver:(struct StyleOwnerPath)arg1;
+ (TSCHStyleOwnerPath *)verifiedUUIDs:(id)arg0;
+ (TSCHStyleOwnerPath *)styleOwnerPathWithUUIDs:(id)arg0;
+ (NSObject *)styleOwnerPathForStyleOwner:(NSObject *)arg0;
+ (unsigned char)styleOwnerPathTypeForStyleOwner:(NSObject *)arg0;
+ (NSString *)styleOwnerPathForSemanticTag:(NSString *)arg0 ofChart:(GQHChart *)arg1;

- (void)didInitFromSOS;
- (void)saveToArchive:(struct StyleOwnerPath *)arg0 archiver:(NSObject *)arg1;
- (TSCHStyleOwnerPath *)initWithArchive:(struct StyleOwnerPath *)arg0 unarchiver:(struct StyleOwnerPath)arg1;
- (TSCHStyleOwnerPath *)initWithUUIDs:(id)arg0;
- (NSString *)TSUUUIDPath;
- (id)pathByPrefixingWithUUIDs:(id)arg0;
- (Class)genericPropertyMapClass;
- (unsigned char)styleOwnerPathType;
- (int)styleOwnerType;
- (NSObject *)p_createUUIDDecoder;
- (id)p_axisStyleOwnerForChart:(id)arg0;
- (id)p_seriesStyleOwnerForChart:(id)arg0;
- (id)p_referenceLineStyleOwnerForChart:(id)arg0;
- (id)styleOwnerForChart:(id)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCHStyleOwnerPath *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)uuids;

@end
